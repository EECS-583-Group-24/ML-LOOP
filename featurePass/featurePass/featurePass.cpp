#include "llvm/Analysis/BlockFrequencyInfo.h"
#include "llvm/Analysis/BranchProbabilityInfo.h"
#include "llvm/Analysis/LoopNestAnalysis.h"
#include "llvm/IR/PassManager.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Support/raw_ostream.h"

#include <iostream>
#include <set>

using namespace llvm;
namespace
{

    struct FeaturePass : public PassInfoMixin<FeaturePass>
    {

        PreservedAnalyses run(Function &F, FunctionAnalysisManager &FAM)
        {

            // Inst Categories
            std::set<std::string> branch({"br", "switch", "indirectbr"});
            std::set<std::string> integerALU({"add", "sub", "mul", "udiv", "sdiv", "urem", "shl", "lshr", "ashr", "and", "or", "xor", "icmp", "srem"});
            std::set<std::string> fpALU({"fadd", "fsub", "fmul", "fdiv", "frem", "fcmp"});
            std::set<std::string> memory({"alloca", "load", "store", "getelementptr", "fence", "atomiccmpxchg", "atomicrmw"});

            // LOOP RELATED FEATURES
            std::vector<double> averageLoopInstCount(5, 0);
            int loopCount = 0;
            int loopTotalDynamicInstCount = 0;
            int loopTotalStaticInstCount = 0;
            double averageBBPerLoop = 0;

            // INST COUNT RELATED FEATURES
            std::vector<uint64_t> staticInstCount(5, 0);
            std::vector<uint64_t> dynamicInstCount(5, 0);
            int totalBBs = 0;
            int totalDynamicInstCount = 0;
            int totalStaticInstCount = 0;
            double averageStaticInstPerBB = 0;
            int biasedBranchCount = 0;
            int unbiasedBranchCount = 0;

            // RECURSIVE FUNCTION COUNT FEATURE
            int recursiveCount = 0;

            llvm::BlockFrequencyAnalysis::Result &bfi = FAM.getResult<BlockFrequencyAnalysis>(F);
            llvm::BranchProbabilityAnalysis::Result &bpi = FAM.getResult<BranchProbabilityAnalysis>(F);
            llvm::LoopAnalysis::Result &li = FAM.getResult<LoopAnalysis>(F);

            // Loop Feature Extraction
            for (Loop *loop : li)
            {
                std::vector<uint64_t> loopInstCount(5, 0);
                loopCount += 1;
                averageBBPerLoop += loop->getNumBlocks();
                for (auto bb : loop->getBlocks())
                {
                    for (auto &instr : *bb)
                    {
                        std::string opcode = instr.getOpcodeName();
                        uint64_t blockCount = bfi.getBlockProfileCount(instr.getParent()).value();
                        loopTotalDynamicInstCount += blockCount;
                        loopTotalStaticInstCount += 1;

                        if (integerALU.find(opcode) != integerALU.end())
                        {
                            loopInstCount[0] += 1;
                        }
                        else if (fpALU.find(opcode) != fpALU.end())
                        {
                            loopInstCount[1] += 1;
                        }
                        else if (memory.find(opcode) != memory.end())
                        {
                            loopInstCount[2] += 1;
                        }
                        else if (branch.find(opcode) != branch.end())
                        {
                            loopInstCount[3] += 1;
                        }
                        else
                        {
                            loopInstCount[4] += 1;
                        }
                    }
                }

                for (int i = 0; i < averageLoopInstCount.size(); i++)
                {
                    double sum = averageLoopInstCount[i] * (loopCount - 1) + loopInstCount[i];
                    averageLoopInstCount[i] = sum / loopCount;
                }

                averageBBPerLoop /= loopCount;
            }

            // Inst Count Feature Extraction
            for (auto &bb : F)
            {
                // errs() << "BB!\n";
                totalBBs++;

                for (auto &instr : bb)
                {
                    std::string opcode = instr.getOpcodeName();
                    uint64_t blockCount = bfi.getBlockProfileCount(instr.getParent()).value();
                    totalDynamicInstCount += blockCount;
                    totalStaticInstCount += 1;

                    // Check for recursive call.
                    CallInst *callInst = dyn_cast<CallInst>(&instr);
                    if(callInst != nullptr) {
                        if (Function *calledFunction = callInst->getCalledFunction()) {
                            if (calledFunction->getName() == F.getName()) {
                                // errs() << "Recursive function detected\n";
                                recursiveCount++;
                            }
                        }
                    }

                    // Biased Branch Count
                    if (opcode == "br" || opcode == "switch" || opcode == "indirectbr")
                    {
                        // If successor single target, then biased
                        if (instr.getNumSuccessors() == 1)
                        {
                            biasedBranchCount += blockCount;
                            continue;
                        }
                        // Iterate through successors
                        bool flag = false;
                        for (int j = 0; j < instr.getNumSuccessors(); j++)
                        {
                            BasicBlock *target = instr.getSuccessor(j);
                            BranchProbability branchProbability = bpi.getEdgeProbability(&bb, target);
                            if (branchProbability > BranchProbability(4, 5))
                            {
                                biasedBranchCount += blockCount;
                                flag = true;
                                break;
                            }
                        }
                        if (!flag)
                        {
                            unbiasedBranchCount += blockCount;
                        }
                    }

                    // Instruction Counts
                    if (integerALU.find(opcode) != integerALU.end())
                    {
                        dynamicInstCount[0] += blockCount;
                        staticInstCount[0] += 1;
                    }
                    else if (fpALU.find(opcode) != fpALU.end())
                    {
                        dynamicInstCount[1] += blockCount;
                        staticInstCount[1] += 1;
                    }
                    else if (memory.find(opcode) != memory.end())
                    {
                        dynamicInstCount[2] += blockCount;
                        staticInstCount[2] += 1;
                    }
                    else if (branch.find(opcode) != branch.end())
                    {
                        dynamicInstCount[3] += blockCount;
                        staticInstCount[3] += 1;
                    }
                    else
                    {
                        dynamicInstCount[4] += blockCount;
                        staticInstCount[4] += 1;
                    }
                }
            }

            // Overall CFG stats.
            errs() << totalBBs << "," << format("%0.3f,", (double)((double)totalStaticInstCount / (double)totalBBs));

            // Dynamic Instruction Counts
            errs() << totalDynamicInstCount << ",";
            for (auto it : dynamicInstCount)
            { // iterate all categories
                errs() << it << ",";
            }

            // Static Instruction Counts
            errs() << totalStaticInstCount << ",";
            for (auto it : staticInstCount)
            { // iterate all categories
                errs() << it << ",";
            }

            // Dynamic to Instruction Count Ratios per Instruction
            errs() << format("%.3f,", (double)((double)totalDynamicInstCount / (double)totalStaticInstCount));
            for (int i = 0; i < dynamicInstCount.size(); i++)
            {
                if (staticInstCount[i] == 0)
                {
                    errs() << 0 << ",";
                }
                else
                {
                    errs() << format("%.3f,", (double)((double)dynamicInstCount[i] / (double)staticInstCount[i]));
                }
            }

            // Branch Bias Count
            errs() << biasedBranchCount << "," << unbiasedBranchCount << ",";

            // Loop Features
            errs() << loopCount << format("%.3f,", averageBBPerLoop) << loopTotalStaticInstCount << ",";
            for (int i = 0; i < averageLoopInstCount.size(); i++)
            {
                errs() << format("%.3f,", averageLoopInstCount[i]);
            }

            // Recursive Count Feature
            errs() << recursiveCount;

            errs() << "\n";

            return PreservedAnalyses::all();
        }
    };

    extern "C" ::llvm::PassPluginLibraryInfo LLVM_ATTRIBUTE_WEAK llvmGetPassPluginInfo()
    {
        return {
            LLVM_PLUGIN_API_VERSION, "FeaturePass", "v0.1",
            [](PassBuilder &PB)
            {
                PB.registerPipelineParsingCallback(
                    [](StringRef Name, FunctionPassManager &FPM,
                       ArrayRef<PassBuilder::PipelineElement>)
                    {
                        if (Name == "fp")
                        {
                            FPM.addPass(FeaturePass());
                            return true;
                        }
                        return false;
                    });
            }};
    }
}