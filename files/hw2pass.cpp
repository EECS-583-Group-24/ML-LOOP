//===-- Frequent Path Loop Invariant Code Motion Pass --------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===---------------------------------------------------------------------===//
//
// EECS583 F23 - This pass can be used as a template for your FPLICM homework
//               assignment.
//               The passes get registered as "fplicm-correctness" and
//               "fplicm-performance".
//
//
////===-------------------------------------------------------------------===//
#include "llvm/Analysis/BlockFrequencyInfo.h"
#include "llvm/Analysis/BranchProbabilityInfo.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/LoopIterator.h"
#include "llvm/Analysis/LoopPass.h"
#include "llvm/IR/CFG.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/PassManager.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Transforms/Scalar/LoopPassManager.h"
#include "llvm/Transforms/Utils/BasicBlockUtils.h"
#include "llvm/Transforms/Utils/LoopUtils.h"
#include <unordered_set>
#include <iostream>

/* *******Implementation Starts Here******* */
// You can include more Header files here
/* *******Implementation Ends Here******* */

using namespace llvm;

namespace
{

  struct HW2CorrectnessPass : public PassInfoMixin<HW2CorrectnessPass>
  {

    PreservedAnalyses run(Function &F, FunctionAnalysisManager &FAM)
    {
      llvm::BlockFrequencyAnalysis::Result &bfi = FAM.getResult<BlockFrequencyAnalysis>(F);
      llvm::BranchProbabilityAnalysis::Result &bpi = FAM.getResult<BranchProbabilityAnalysis>(F);
      llvm::LoopAnalysis::Result &li = FAM.getResult<LoopAnalysis>(F);
      /* *******Implementation Starts Here******* */
      // Your core logic should reside here.

      // Iterate through all loops
      for (Loop *loop : li)
      {
        // For each loop, we want to find the most frequent path and the result infrequent path.
        std::unordered_set<BasicBlock *> frequentPath = std::unordered_set<BasicBlock *>();

        // Start at the loop's header
        BasicBlock *currentBlock = loop->getHeader();

        // Add this to the most frequent path.
        frequentPath.insert(currentBlock);

        // While this currentBlock isn't a loopLatch/backedge...
        while (currentBlock != loop->getLoopLatch())
        {
          // Get the terminating instruction in this block
          BranchInst *branchInst = dyn_cast<BranchInst>(currentBlock->getTerminator());

          // For each successor of this branch...
          for (int i = 0; i < branchInst->getNumSuccessors(); i++)
          {
            BasicBlock *target = branchInst->getSuccessor(i);
            BranchProbability branchProbability = bpi.getEdgeProbability(&(*currentBlock), target);

            // If the probability to go to that successor is >= 0.8, then we add it to the frequent path.
            if (branchProbability >= BranchProbability(4, 5))
            {
              frequentPath.insert(target);
              currentBlock = target;
              break;
            }
          }
        }

        // Store all of the infrequent blocks
        std::unordered_set<BasicBlock *> infrequentBlocks = std::unordered_set<BasicBlock *>();

        // Iterate through all blocks in the loop
        for (auto block : loop->blocks())
        {
          // If the block isn't in the frequent path, then it's an infrequent block
          if (frequentPath.find(block) == frequentPath.end())
          {
            infrequentBlocks.insert(block);
          }
        }

        // Find load instructions to hoist.
        std::unordered_set<LoadInst *> toHoist = std::unordered_set<LoadInst *>();

        // Iterate through each block of the frequentPath
        for (BasicBlock *block : frequentPath)
        {
          // Iterate through each instruction of these blocks
          for (BasicBlock::iterator instr = block->begin(), instr_end = block->end(); instr != instr_end; ++instr)
          {
            // If it's a load, we have to take a close look at it
            if (strcmp(instr->getOpcodeName(), "load") == 0)
            {
              bool hoist = false;

              // Get the pointer operand of the load instruction
              LoadInst *loadInst = dyn_cast<LoadInst>(instr);
              Value *operand = loadInst->getPointerOperand();

              // For each user of the operand
              for (auto user : operand->users())
              {
                // Convert user to an instruction
                if (auto *userInst = dyn_cast<Instruction>(user))
                {
                  // Check if user is a store
                  if (strcmp(userInst->getOpcodeName(), "store") == 0)
                  {
                    StoreInst *storeInst = dyn_cast<StoreInst>(userInst);

                    // If this store is in the frequentPath, then we can't hoist the load.
                    if (frequentPath.find(storeInst->getParent()) != frequentPath.end())
                    {
                      hoist = false;
                      break;
                    }

                    // We need to make sure that a store occurs in the infrequent blocks, otherwise we can't hoist the load (hoist is default false).
                    if (infrequentBlocks.find(storeInst->getParent()) != infrequentBlocks.end())
                    {
                      hoist = true;
                    }
                  }
                }
              }

              // If, after looking at all users, we can hoist, then add it to the toHoist set.
              if (hoist)
              {
                toHoist.insert(loadInst);
              }
            }
          }
        }

        // Now we want to store all dependent instructions to our hoisted instructions
        std::unordered_map<LoadInst *, std::unordered_set<User *>> dependentInsts = std::unordered_map<LoadInst *, std::unordered_set<User *>>();
        std::unordered_map<LoadInst *, std::unordered_set<User *>> dependentOpInsts = std::unordered_map<LoadInst *, std::unordered_set<User *>>();


        // Iterate through each load
        for (auto instr : toHoist)
        {
          // For each user of each load
          for (auto user : instr->users())
          {
            // It'll be a dependent instruction if it uses the load instruction.
            if (auto dependentInst = dyn_cast<Instruction>(user))
            {
              dependentInsts[instr].insert(user);
            }
          }
          
          // For each user of the load operand
          for (auto user : instr->getOperand(0)->users())
          {
            if (auto dependentOpInst = dyn_cast<Instruction>(user))
            {
              // It'll be a dependentOp instruction if it uses the operand and is infrequent.
              if (infrequentBlocks.find(dependentOpInst->getParent()) != infrequentBlocks.end())
              {
                dependentOpInsts[instr].insert(user);
              }
            }
          }
        }

        // Repair time!
        for (auto instr : toHoist)
        {
          // Create instructions
          AllocaInst *allocaInst = new AllocaInst(instr->getType(), 0, nullptr, dyn_cast<LoadInst>(instr)->getAlign(), "", loop->getLoopPreheader()->getTerminator());
          StoreInst *storeInst = new StoreInst(instr, allocaInst, loop->getLoopPreheader()->getTerminator());
          LoadInst *newLoad = new LoadInst(instr->getType(), allocaInst, "", instr);

          // Hoist the load
          instr->moveAfter(allocaInst);

          // For each dependent instruction, fix the use
          for (auto user : dependentInsts[instr])
          {
            if (auto userInst = dyn_cast<Instruction>(user))
            {
              user->replaceUsesOfWith(instr, newLoad);
            }
          }

          // For each dependent op instruction, fix the use of the operand to the alloca
          for (auto user : dependentOpInsts[instr])
          {
            if (auto userOpInst = dyn_cast<Instruction>(user))
            {

              // If statement for if more than one load stores to same pointer
              if (strcmp(userOpInst->getOpcodeName(), "store") == 0 && userOpInst->getOperand(1) != instr->getOperand(0))
              {
                StoreInst *fixStore = new StoreInst(userOpInst->getOperand(0), allocaInst, userOpInst);
              }
              else
              {
                userOpInst->replaceUsesOfWith(instr->getOperand(0), allocaInst);
              }
            }
          }
        }
      }

      /* *******Implementation Ends Here******* */
      // Your pass is modifying the source code. Figure out which analyses
      // are preserved and only return those, not all.
      return PreservedAnalyses::all();
    }
  };
}

struct HW2PerformancePass : public PassInfoMixin<HW2PerformancePass>
{
  PreservedAnalyses run(Function &F, FunctionAnalysisManager &FAM)
  {
    llvm::BlockFrequencyAnalysis::Result &bfi = FAM.getResult<BlockFrequencyAnalysis>(F);
    llvm::BranchProbabilityAnalysis::Result &bpi = FAM.getResult<BranchProbabilityAnalysis>(F);
    llvm::LoopAnalysis::Result &li = FAM.getResult<LoopAnalysis>(F);
    /* *******Implementation Starts Here******* */
    // This is a bonus. You do not need to attempt this to receive full credit.
    /* *******Implementation Ends Here******* */

    // Your pass is modifying the source code. Figure out which analyses
    // are preserved and only return those, not all.
    return PreservedAnalyses::all();
  }
};

extern "C" ::llvm::PassPluginLibraryInfo LLVM_ATTRIBUTE_WEAK llvmGetPassPluginInfo()
{
  return {
      LLVM_PLUGIN_API_VERSION, "HW2Pass", "v0.1",
      [](PassBuilder &PB)
      {
        PB.registerPipelineParsingCallback(
            [](StringRef Name, FunctionPassManager &FPM,
               ArrayRef<PassBuilder::PipelineElement>)
            {
              if (Name == "fplicm-correctness")
              {
                FPM.addPass(HW2CorrectnessPass());
                return true;
              }
              if (Name == "fplicm-performance")
              {
                FPM.addPass(HW2PerformancePass());
                return true;
              }
              return false;
            });
      }};
}
