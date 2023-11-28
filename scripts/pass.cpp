#include "llvm/Analysis/BlockFrequencyInfo.h"
#include "llvm/Analysis/BranchProbabilityInfo.h"
#include "llvm/IR/PassManager.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/Format.h"
#include "llvm/Support/FileSystem.h"

using namespace llvm;

namespace
{

  struct HW1Pass : public PassInfoMixin<HW1Pass>
  {

    PreservedAnalyses run(Function &F, FunctionAnalysisManager &FAM)
    {
      // Get block and branch probability analysis results
      BlockFrequencyInfo &BFI = FAM.getResult<BlockFrequencyAnalysis>(F);
      BranchProbabilityInfo &BPI = FAM.getResult<BranchProbabilityAnalysis>(F);

      // Initialize counters for various operation categories
      uint64_t totalDynOpCount = 0;
      uint64_t intALUCount = 0;
      uint64_t floatALUCount = 0;
      uint64_t memCount = 0;
      uint64_t biasedBranchCount = 0;
      uint64_t unbiasedBranchCount = 0;
      uint64_t otherCount = 0;

      // Open the debug file for writing
      std::error_code DebugEC;
      sys::fs::OpenFlags DebugFlags = sys::fs::OF_Append;
      raw_fd_ostream debugFile("branchDebug.txt", DebugEC, DebugFlags);

      // Print the results in the specified format
      std::error_code EC;
      sys::fs::OpenFlags flags = sys::fs::OF_Append;
      raw_fd_ostream myfile = raw_fd_ostream("benchmark.opcstats", EC, flags);

      // Iterate through each basic block in the function
      for (BasicBlock &BB : F)
      {
        uint64_t blockFrequency = BFI.getBlockProfileCount(&BB).value();
        // Iterate through each instruction in the basic block
        for (Instruction &I : BB)
        {
          totalDynOpCount += blockFrequency; // Increment the total operation count

          // Categorize instructions based on their opcodes
          switch (I.getOpcode())
          {
          // Branch instructions
          case Instruction::Br:
          case Instruction::Switch:
          case Instruction::IndirectBr:

            // Branches with only a single target are considered biased
            if (I.getNumOperands() == 1)
            {
              // For branches with only a single target, the branch bias is considered to be 100%
              biasedBranchCount += blockFrequency;
            }
            else
            {
              // Iterate through each successor of the current basic block
              BranchProbability branchProb = BPI.getEdgeProbability(&BB, I.getSuccessor(0));
              double bias = branchProb.getNumerator() / (double)branchProb.getDenominator();
              for (auto *Succ : successors(&BB))
              {
                // Calculate the bias using BranchProbabilityInfo
                branchProb = BPI.getEdgeProbability(&BB, Succ);
                bias = branchProb.getNumerator() / (double)branchProb.getDenominator();

                // Branches are considered biased if the bias > 80% and unbiased otherwise.
                if (bias > 0.8)
                {
                  biasedBranchCount += blockFrequency;
                  debugFile << "Biased branch: " << bias << "\n";
                  break;
                }
              }
              if (bias <= 0.8)
              {
                unbiasedBranchCount += blockFrequency;
                debugFile << "Unbiased branch: " << bias << "\n";
              }
            }
            break;

          // Integer ALU instructions
          case Instruction::Add:
          case Instruction::Sub:
          case Instruction::Mul:
          case Instruction::UDiv:
          case Instruction::SDiv:
          case Instruction::URem:
          case Instruction::Shl:
          case Instruction::LShr:
          case Instruction::AShr:
          case Instruction::And:
          case Instruction::Or:
          case Instruction::Xor:
          case Instruction::ICmp:
          case Instruction::SRem:
            intALUCount += blockFrequency;
            break;

          // Floating-point ALU instructions
          case Instruction::FAdd:
          case Instruction::FSub:
          case Instruction::FMul:
          case Instruction::FDiv:
          case Instruction::FRem:
          case Instruction::FCmp:
            floatALUCount += blockFrequency;
            break;

          // Memory instructions
          case Instruction::Alloca:
          case Instruction::Load:
          case Instruction::Store:
          case Instruction::GetElementPtr:
          case Instruction::Fence:
          case Instruction::AtomicCmpXchg:
          case Instruction::AtomicRMW:
            memCount += blockFrequency;
            break;

          default:
            otherCount += blockFrequency; // Count all other instructions
          }
        }
      }

      // Calculate bias based on your profiling information here

      // Calculate biased and unbiased branch ratios
      double biasedBranchRatio = (totalDynOpCount == 0) ? 0.0 : (double)biasedBranchCount / totalDynOpCount;     // Avoid division by zero
      double unbiasedBranchRatio = (totalDynOpCount == 0) ? 0.0 : (double)unbiasedBranchCount / totalDynOpCount; // Avoid division by zero

      double values[] = {
          (double)intALUCount,
          (double)floatALUCount,
          (double)memCount,
          (double)biasedBranchCount,
          (double)unbiasedBranchCount,
          (double)otherCount};

      errs() << F.getName();
      myfile << F.getName();
      errs() << ", " << totalDynOpCount;
      myfile << ", " << totalDynOpCount;
      for (int i = 0; i < 6; i++)
      {
        if (totalDynOpCount == 0)
        {
          errs() << ", " << format("%.3f", float(values[i]));
          myfile << ", " << format("%.3f", float(values[i]));
        }
        else
        {
          errs() << ", " << format("%.3f", float(values[i]) / float(totalDynOpCount));
          myfile << ", " << format("%.3f", float(values[i]) / float(totalDynOpCount));
        }
      }
      errs() << "\n";
      myfile << "\n";
      return PreservedAnalyses::all();
    }
  };

} // namespace

extern "C" ::llvm::PassPluginLibraryInfo LLVM_ATTRIBUTE_WEAK llvmGetPassPluginInfo()
{
  return {
      LLVM_PLUGIN_API_VERSION, "HW1Pass", "v0.1",
      [](PassBuilder &PB)
      {
        PB.registerPipelineParsingCallback(
            [](StringRef Name, FunctionPassManager &FPM,
               ArrayRef<PassBuilder::PipelineElement>)
            {
              if (Name == "hw1")
              {
                FPM.addPass(HW1Pass());
                return true;
              }
              return false;
            });
      }};
}
