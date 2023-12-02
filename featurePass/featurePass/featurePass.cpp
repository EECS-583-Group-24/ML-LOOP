#include "llvm/Analysis/BlockFrequencyInfo.h"
#include "llvm/Analysis/BranchProbabilityInfo.h"
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

            std::vector<uint64_t> categoryCount(33, 0);
            int count = 0;

            llvm::BlockFrequencyAnalysis::Result &bfi = FAM.getResult<BlockFrequencyAnalysis>(F);
            llvm::BranchProbabilityAnalysis::Result &bpi = FAM.getResult<BranchProbabilityAnalysis>(F);
            llvm::LoopAnalysis::Result &li = FAM.getResult<LoopAnalysis>(F);
            llvm::LoopNestAnalysis::Result &lni = FAM.getResult<LoopNestAnalysis>(F);
            auto &test = FAM.getResult<MemoryUsageAnalys
            
            for (auto &bb : F)
            {
                // errs() << "BB!\n";

                // Loop Feature Extraction
                for (Loop *loop : li) {

                }


                // Instruction Count Extraction
                for (auto &instr : bb)
                {
                    std::string opcode = instr.getOpcodeName();
                    uint64_t blockCount = bfi.getBlockProfileCount(instr.getParent()).value();
                    count += blockCount;


                    // Biased Branch Count
                    if(opcode == "br" || opcode == "switch" || opcode == "indirectbr") {
                        // If successor single target, then biased
                        if(instr.getNumSuccessors() == 1) {
                            categoryCount[31] += blockCount;
                            continue;
                        }
                        // Iterate through successors
                        bool flag = false;
                        for(int j = 0; j < instr.getNumSuccessors(); j++) {
                            BasicBlock* target = instr.getSuccessor(j);
                            BranchProbability branchProbability = bpi.getEdgeProbability(&bb, target);
                            if(branchProbability > BranchProbability(4,5)) {
                                categoryCount[31] += blockCount;
                                flag = true;
                                break;
                            }
                        }
                        if(!flag) {
                            categoryCount[32] += blockCount;
                        }
                    }

                    // Instruction Counts
                    if (opcode == "br")
                    {
                        categoryCount[0] += blockCount;
                    }
                    else if (opcode == "switch")
                    {
                        categoryCount[1] += blockCount;
                    }
                    else if (opcode == "indirectbr")
                    {
                        categoryCount[2] += blockCount;
                    }
                    else if (opcode == "add")
                    {
                        categoryCount[3] += blockCount;
                    }
                    else if (opcode == "sub")
                    {
                        categoryCount[4] += blockCount;
                    }
                    else if (opcode == "mul")
                    {
                        categoryCount[5] += blockCount;
                    }
                    else if (opcode == "udiv")
                    {
                        categoryCount[6] += blockCount;
                    }
                    else if (opcode == "sdiv")
                    {
                        categoryCount[7] += blockCount;
                    }
                    else if (opcode == "urem")
                    {
                        categoryCount[8] += blockCount;
                    }
                    else if (opcode == "shl")
                    {
                        categoryCount[9] += blockCount;
                    }
                    else if (opcode == "lshr")
                    {
                        categoryCount[10] += blockCount;
                    }
                    else if (opcode == "ashr")
                    {
                        categoryCount[11] += blockCount;
                    }
                    else if (opcode == "and")
                    {
                        categoryCount[12] += blockCount;
                    }
                    else if (opcode == "or")
                    {
                        categoryCount[13] += blockCount;
                    }
                    else if (opcode == "xor")
                    {
                        categoryCount[14] += blockCount;
                    }
                    else if (opcode == "icmp")
                    {
                        categoryCount[15] += blockCount;
                    }
                    else if (opcode == "srem")
                    {
                        categoryCount[16] += blockCount;
                    }
                    else if (opcode == "fadd")
                    {
                        categoryCount[17] += blockCount;
                    }
                    else if (opcode == "fsub")
                    {
                        categoryCount[18] += blockCount;
                    }
                    else if (opcode == "fmul")
                    {
                        categoryCount[19] += blockCount;
                    }
                    else if (opcode == "fdiv")
                    {
                        categoryCount[20] += blockCount;
                    }
                    else if (opcode == "frem")
                    {
                        categoryCount[21] += blockCount;
                    }
                    else if (opcode == "fcmp")
                    {
                        categoryCount[22] += blockCount;
                    }
                    else if (opcode == "alloca")
                    {
                        categoryCount[23] += blockCount;
                    }
                    else if (opcode == "load")
                    {
                        categoryCount[24] += blockCount;
                    }
                    else if (opcode == "store")
                    {
                        categoryCount[25] += blockCount;
                    }
                    else if (opcode == "getelementptr")
                    {
                        categoryCount[26] += blockCount;
                    }
                    else if (opcode == "fence")
                    {
                        categoryCount[27] += blockCount;
                    }
                    else if (opcode == "atomiccmpxchg")
                    {
                        categoryCount[28] += blockCount;
                    }
                    else if (opcode == "atomicrmw")
                    {
                        categoryCount[29] += blockCount;
                    }
                    else
                    {
                        categoryCount[30] += blockCount;
                    }
                }
            }

            errs() << count << ",";
            for (auto it : categoryCount)
            { // iterate all categories
                errs() << it << ",";
            }
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