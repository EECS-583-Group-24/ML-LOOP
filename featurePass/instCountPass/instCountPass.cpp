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
                        else if (opcode == "ceanupret")
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

    extern "C" ::llvm::PassPluginLibraryInfo LLVM_ATTRIBUTE_WEAK llvmGetPassPluginInfo()
    {
        return {
            LLVM_PLUGIN_API_VERSION, "InstCountPass", "v0.1",
            [](PassBuilder &PB)
            {
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
            }};
    }
}