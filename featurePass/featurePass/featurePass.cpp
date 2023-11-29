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

    std::vector<uint64_t> categoryCount(6, 0);

    struct FeaturePass : public PassInfoMixin<FeaturePass>
    {

        PreservedAnalyses run(Module &M, ModuleAnalysisManager &MAM)
        {

            // FunctionAnalysisManager &FAM =MAM.getResult<FunctionAnalysisManagerModuleProxy>(M).getManager();

            std::vector<uint64_t> categoryCount(31, 0);
            int count = 0;

            for (auto &function : M)
            {
                // errs() << function.getName() << "\n";
                // llvm::BlockFrequencyAnalysis::Result &bfi = FAM.getResult<BlockFrequencyAnalysis>(function);
                // llvm::BranchProbabilityAnalysis::Result &bpi = FAM.getResult<BranchProbabilityAnalysis>(function);
                for (auto &bb : function)
                {
                    // errs() << "BB!\n";
                    for (auto &instr : bb)
                    {
                        std::string opcode = instr.getOpcodeName();
                        // uint64_t blockCount = bfi.getBlockProfileCount(instr.getParent()).value();
                        uint64_t blockCount = 1;
                        count += blockCount;

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
            }
            // std::set<std::string> fpALU({"fadd", "fsub", "fmul", "fdiv", "frem", "fcmp"});
            // std::set<std::string> memory({"alloca", "load", "store", "getelementptr", "fence", "atomiccmpxchg", "atomicrmw"});
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
                    [](StringRef Name, ModulePassManager &MPM,
                       ArrayRef<PassBuilder::PipelineElement>)
                    {
                        if (Name == "fp")
                        {
                            MPM.addPass(FeaturePass());
                            return true;
                        }
                        return false;
                    });
            }};
    }
}
// auto functions = M.getFunctionList();
// for (auto &function : functions)
// {
//     for (auto &bb : function)
//     {
//         uint64_t blockCount = bfi.getBlockProfileCount(i->getParent()).value();
//         count += blockCount;
//         if (integerALU.find(i->getOpcodeName()) != integerALU.end())
//         {
//             categoryCount[0] += blockCount;
//         }
//         else if (fpALU.find(i->getOpcodeName()) != fpALU.end())
//         {
//             categoryCount[1] += blockCount;
//         }
//         else if (memory.find(i->getOpcodeName()) != memory.end())
//         {
//             categoryCount[2] += blockCount;
//         }
//         else if (branch.find(i->getOpcodeName()) != branch.end())
//         {
//             // If successor single target, then biased
//             if (i->getNumSuccessors() == 1)
//             {
//                 categoryCount[3] += blockCount;
//                 continue;
//             }
//             // Iterate through successors
//             bool flag = false;
//             for (int j = 0; j < i->getNumSuccessors(); j++)
//             {
//                 BasicBlock *target = i->getSuccessor(j);
//                 BranchProbability branchProbability = bpi.getEdgeProbability(&(*bb), target);
//                 if (branchProbability > BranchProbability(4, 5))
//                 {
//                     categoryCount[3] += blockCount;
//                     flag = true;
//                     break;
//                 }
//             }
//             if (!flag)
//             {
//                 categoryCount[4] += blockCount;
//             }
//         }
//         else
//         {
//             categoryCount[5] += blockCount;
//         }
//     }