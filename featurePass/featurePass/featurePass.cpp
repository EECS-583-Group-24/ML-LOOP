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
                    if (callInst != nullptr)
                    {
                        if (Function *calledFunction = callInst->getCalledFunction())
                        {
                            if (calledFunction->getName() == F.getName())
                            {
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

    struct InstCountPass : public PassInfoMixin<InstCountPass>
    {

        PreservedAnalyses run(Module &M, ModuleAnalysisManager &MAM)
        {
            std::vector<int> instCount(65, 0);
            for (auto &f : M)
            {
                for (auto &bb : f)
                {
                    for (auto &instr : bb)
                    {
                        std::string opcode = instr.getOpcodeName();
                        if (opcode == "ret")
                        {
                            instCount[0]++;
                        }
                        else if (opcode == "br")
                        {
                            instCount[1]++;
                        }
                        else if (opcode == "switch")
                        {
                            instCount[2]++;
                        }
                        else if (opcode == "indirectbr")
                        {
                            instCount[3]++;
                        }
                        else if (opcode == "invoke")
                        {
                            instCount[4]++;
                        }
                        else if (opcode == "callbr")
                        {
                            instCount[5]++;
                        }
                        else if (opcode == "resume")
                        {
                            instCount[6]++;
                        }
                        else if (opcode == "catchswitch")
                        {
                            instCount[7]++;
                        }
                        else if (opcode == "catchret")
                        {
                            instCount[8]++;
                        }
                        else if (opcode == "cleanupret")
                        {
                            instCount[9]++;
                        }
                        else if (opcode == "unreachable")
                        {
                            instCount[10]++;
                        }
                        else if (opcode == "fneg")
                        {
                            instCount[11]++;
                        }
                        else if (opcode == "add")
                        {
                            instCount[12]++;
                        }
                        else if (opcode == "fadd")
                        {
                            instCount[13]++;
                        }
                        else if (opcode == "sub")
                        {
                            instCount[14]++;
                        }
                        else if (opcode == "fsub")
                        {
                            instCount[15]++;
                        }
                        else if (opcode == "mul")
                        {
                            instCount[16]++;
                        }
                        else if (opcode == "fmul")
                        {
                            instCount[17]++;
                        }
                        else if (opcode == "udiv")
                        {
                            instCount[18]++;
                        }
                        else if (opcode == "sdiv")
                        {
                            instCount[19]++;
                        }
                        else if (opcode == "fdiv")
                        {
                            instCount[20]++;
                        }
                        else if (opcode == "urem")
                        {
                            instCount[21]++;
                        }
                        else if (opcode == "srem")
                        {
                            instCount[22]++;
                        }
                        else if (opcode == "frem")
                        {
                            instCount[23]++;
                        }
                        else if (opcode == "shl")
                        {
                            instCount[24]++;
                        }
                        else if (opcode == "lshr")
                        {
                            instCount[25]++;
                        }
                        else if (opcode == "ashr")
                        {
                            instCount[26]++;
                        }
                        else if (opcode == "and")
                        {
                            instCount[27]++;
                        }
                        else if (opcode == "or")
                        {
                            instCount[28]++;
                        }
                        else if (opcode == "xor")
                        {
                            instCount[29]++;
                        }
                        else if (opcode == "extractelement")
                        {
                            instCount[30]++;
                        }
                        else if (opcode == "insertelement")
                        {
                            instCount[31]++;
                        }
                        else if (opcode == "shufflevector")
                        {
                            instCount[32]++;
                        }
                        else if (opcode == "extractvalue")
                        {
                            instCount[33]++;
                        }
                        else if (opcode == "insertvalue")
                        {
                            instCount[34]++;
                        }
                        else if (opcode == "alloca")
                        {
                            instCount[35]++;
                        }
                        else if (opcode == "load")
                        {
                            instCount[36]++;
                        }
                        else if (opcode == "store")
                        {
                            instCount[37]++;
                        }
                        else if (opcode == "fence")
                        {
                            instCount[38]++;
                        }
                        else if (opcode == "cmpxchg")
                        {
                            instCount[39]++;
                        }
                        else if (opcode == "atomicrmw")
                        {
                            instCount[40]++;
                        }
                        else if (opcode == "getelementptr")
                        {
                            instCount[41]++;
                        }
                        else if (opcode == "trunc")
                        {
                            instCount[42]++;
                        }
                        else if (opcode == "zext")
                        {
                            instCount[43]++;
                        }
                        else if (opcode == "sext")
                        {
                            instCount[44]++;
                        }
                        else if (opcode == "fptrunc")
                        {
                            instCount[45]++;
                        }
                        else if (opcode == "fpext")
                        {
                            instCount[46]++;
                        }
                        else if (opcode == "fptoui")
                        {
                            instCount[47]++;
                        }
                        else if (opcode == "fptosi")
                        {
                            instCount[48]++;
                        }
                        else if (opcode == "uitofp")
                        {
                            instCount[49]++;
                        }
                        else if (opcode == "sitofp")
                        {
                            instCount[50]++;
                        }
                        else if (opcode == "ptrtoint")
                        {
                            instCount[51]++;
                        }
                        else if (opcode == "inttoptr")
                        {
                            instCount[52]++;
                        }
                        else if (opcode == "bitcast")
                        {
                            instCount[53]++;
                        }
                        else if (opcode == "addrspacecast")
                        {
                            instCount[54]++;
                        }
                        else if (opcode == "icmp")
                        {
                            instCount[55]++;
                        }
                        else if (opcode == "fcmp")
                        {
                            instCount[56]++;
                        }
                        else if (opcode == "phi")
                        {
                            instCount[57]++;
                        }
                        else if (opcode == "select")
                        {
                            instCount[58]++;
                        }
                        else if (opcode == "freeze")
                        {
                            instCount[59]++;
                        }
                        else if (opcode == "call")
                        {
                            instCount[60]++;
                        }
                        else if (opcode == "va_arg")
                        {
                            instCount[61]++;
                        }
                        else if (opcode == "landingpad")
                        {
                            instCount[62]++;
                        }
                        else if (opcode == "catchpad")
                        {
                            instCount[63]++;
                        }
                        else if (opcode == "cleanuppad")
                        {
                            instCount[64]++;
                        }
                    }
                }
            }

            for (auto count : instCount)
            {
                errs() << count << ",";
            }
            errs() << "\n";

            return PreservedAnalyses::all();
        }
    };

    struct LoopFeaturePass : public PassInfoMixin<LoopFeaturePass>
    {

        std::vector<Loop *> visitedOuterLoops;
        std::vector<int> outerLoopDepth;
        int deepestDepth = -1;
        int numLoops = 0;
        int sumDepth = 0;
        int numNestedLoops = 0;

        PreservedAnalyses run(Loop &L, LoopAnalysisManager &LAM, LoopStandardAnalysisResults &AR, LPMUpdater &U)
        {

            // errs() << "In loop pass!\n";
            int loopDepth = L.getLoopDepth();
            if (loopDepth > deepestDepth)
            {
                deepestDepth = L.getLoopDepth();
            }

            if (L.getSubLoops().size() > 0)
            {
                numNestedLoops += 1;
            }

            sumDepth += L.getLoopDepth();
            numLoops += 1;
            // Find Deepest Loop Depth for each outermost loop, average these in the end
            if (L.isInnermost())
            {
                bool flag = false;
                for (int i = 0; i < visitedOuterLoops.size(); i++)
                {
                    if (visitedOuterLoops[i]->contains(&L))
                    {
                        // errs() << "Found existing parent!\n";
                        if (L.getLoopDepth() > outerLoopDepth[i])
                        {
                            outerLoopDepth[i] = L.getLoopDepth();
                        }
                        flag = true;
                    }
                }
                if (!flag)
                {
                    visitedOuterLoops.push_back(L.getOutermostLoop());
                    outerLoopDepth.push_back(L.getLoopDepth());
                }
            }
            errs() << numNestedLoops << "," << visitedOuterLoops.size() << "," << format("%.3f,", (double)((double)sumDepth / (double)numLoops));
            double totalOuterLoopDepth = 0;
            for (int i = 0; i < visitedOuterLoops.size(); i++)
            {
                totalOuterLoopDepth += outerLoopDepth[i];
            }
            errs() << format("%.3f,", (double)(totalOuterLoopDepth / (double)visitedOuterLoops.size())) << deepestDepth;
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
                PB.registerPipelineParsingCallback(
                    [](StringRef Name, ModulePassManager &MPM,
                       ArrayRef<PassBuilder::PipelineElement>)
                    {
                        if (Name == "icp")
                        {
                            MPM.addPass(InstCountPass());
                            return true;
                        }
                        return false;
                    });
                PB.registerPipelineParsingCallback(
                    [](StringRef Name, LoopPassManager &LPM,
                       ArrayRef<PassBuilder::PipelineElement>)
                    {
                        if (Name == "lnp")
                        {
                            LPM.addPass(LoopFeaturePass());
                            return true;
                        }
                        return false;
                    });
            }};
    }
}