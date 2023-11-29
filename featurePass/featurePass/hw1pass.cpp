#include "llvm/Analysis/BlockFrequencyInfo.h"
#include "llvm/Analysis/BranchProbabilityInfo.h"
#include "llvm/IR/PassManager.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Support/raw_ostream.h"

#include  <iostream>
#include  <set>

using namespace llvm;

namespace {

struct HW1Pass : public PassInfoMixin<HW1Pass> {

  PreservedAnalyses run(Function &F, FunctionAnalysisManager &FAM) {
    // These variables contain the results of some analysis passes.
    // Go through the documentation to see how they can be used.
    llvm::BlockFrequencyAnalysis::Result &bfi = FAM.getResult<BlockFrequencyAnalysis>(F);
    llvm::BranchProbabilityAnalysis::Result &bpi = FAM.getResult<BranchProbabilityAnalysis>(F);

    // Add your code here

    // Branch: br, switch, indirectbr
    // Integer ALU: add, sub, mul, udiv, sdiv, urem, shl, lshr, ashr, and, or, xor, icmp, srem
    // uint64_ting-point ALU: fadd, fsub, fmul, fdiv, frem, fcmp
    // Memory: alloca, load, store, getelementptr, fence, atomiccmpxchg, atomicrmw
    // Others: everything else

    uint64_t count = 0;
    std::set<std::string> branch({"br", "switch", "indirectbr"});
    std::set<std::string> integerALU({"add", "sub", "mul", "udiv", "sdiv", "urem", "shl", "lshr", "ashr", "and", "or", "xor", "icmp", "srem"});
    std::set<std::string> fpALU({"fadd", "fsub", "fmul", "fdiv", "frem", "fcmp"});
    std::set<std::string> memory({"alloca", "load", "store", "getelementptr", "fence", "atomiccmpxchg", "atomicrmw"});
    std::vector<uint64_t> categoryCount(6,0);
    for(Function::iterator bb = F.begin(), e = F.end(); bb != e; ++bb) {
      for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e; ++i) {
        uint64_t blockCount = bfi.getBlockProfileCount(i->getParent()).value();
        count+= blockCount;

        if(integerALU.find(i->getOpcodeName()) != integerALU.end()){
          categoryCount[0] += blockCount;
        } else if(fpALU.find(i->getOpcodeName()) != fpALU.end()) {
          categoryCount[1] += blockCount;
        } else if(memory.find(i->getOpcodeName()) != memory.end()) {
          categoryCount[2] += blockCount;
        } else if(branch.find(i->getOpcodeName()) != branch.end()) {
          // If successor single target, then biased
          if(i->getNumSuccessors() == 1) {
            categoryCount[3] += blockCount;
            continue;
          }
          // Iterate through successors
          bool flag = false;
          for(int j = 0; j < i->getNumSuccessors(); j++) {
            BasicBlock* target = i->getSuccessor(j);
            BranchProbability branchProbability = bpi.getEdgeProbability(&(*bb), target);
            if(branchProbability > BranchProbability(4,5)) {
                categoryCount[3] += blockCount;
                flag = true;
                break;
            }
          }
          if(!flag) {
            categoryCount[4] += blockCount;
          }

        } else {
          categoryCount[5] += blockCount;
        }
      }
    }

    errs() << F.getName();
    errs() << ", " << count;
    for(auto it: categoryCount){ // iterate all categories
      if (count == 0) errs() << ", " << format("%.3f", it);
      else errs() << ", " << format("%.3f", static_cast<float>(it)/static_cast<float>(count));
    }
    errs() << "\n";

    categoryCount.clear();

    return PreservedAnalyses::all();
  }
};
}

extern "C" ::llvm::PassPluginLibraryInfo LLVM_ATTRIBUTE_WEAK llvmGetPassPluginInfo() {
  return {
    LLVM_PLUGIN_API_VERSION, "HW1Pass", "v0.1",
    [](PassBuilder &PB) {
      PB.registerPipelineParsingCallback(
        [](StringRef Name, FunctionPassManager &FPM,
        ArrayRef<PassBuilder::PipelineElement>) {
          if(Name == "hw1"){
            FPM.addPass(HW1Pass());
            return true;
          }
          return false;
        }
      );
    }
  };
}