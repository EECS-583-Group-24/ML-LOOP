#include "llvm/Analysis/BlockFrequencyInfo.h"
#include "llvm/Analysis/BranchProbabilityInfo.h"
#include "llvm/Analysis/LoopNestAnalysis.h"
#include "llvm/IR/PassManager.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Support/raw_ostream.h"

#include <iostream>
#include <unordered_set>
#include <string>

using namespace llvm;
namespace
{

    struct LoopFeaturePass : public PassInfoMixin<LoopFeaturePass>
    {

        std::vector<Loop*> visitedOuterLoops;
        std::vector<int> outerLoopDepth;
        int deepestDepth = -1;
        int numLoops = 0;
        int sumDepth = 0;
        int numNestedLoops = 0;

        
        PreservedAnalyses run(Loop &L, LoopAnalysisManager &LAM, LoopStandardAnalysisResults &AR, LPMUpdater &U)
        {

            // errs() << "In loop pass!\n";
            int loopDepth = L.getLoopDepth();
            if(loopDepth > deepestDepth) {
                deepestDepth = L.getLoopDepth();
            }

            if(L.getSubLoops().size() > 0) {
                numNestedLoops += 1;
            }


            sumDepth += L.getLoopDepth();
            numLoops += 1;
            // Find Deepest Loop Depth for each outermost loop, average these in the end
            if(L.isInnermost()) {
                bool flag = false;
                for(int i = 0; i < visitedOuterLoops.size(); i++) {
                    if(visitedOuterLoops[i]->contains(&L)) {
                        // errs() << "Found existing parent!\n";
                        if(L.getLoopDepth() > outerLoopDepth[i]) {
                            outerLoopDepth[i] = L.getLoopDepth();
                        }
                        flag = true;
                    }
                }
                if(!flag) {
                    visitedOuterLoops.push_back(L.getOutermostLoop());
                    outerLoopDepth.push_back(L.getLoopDepth());
                }
            }
            errs() << numNestedLoops << "," << visitedOuterLoops.size() << "," << format("%.3f,",(double) ((double) sumDepth / (double) numLoops));
            double totalOuterLoopDepth = 0;
            for(int i = 0; i < visitedOuterLoops.size(); i++) {
                totalOuterLoopDepth += outerLoopDepth[i];
            }
            errs() << format("%.3f,", (double) (totalOuterLoopDepth / (double) visitedOuterLoops.size())) << deepestDepth;
            errs() << "\n";
                        
            return PreservedAnalyses::all();
        }
    };

    extern "C" ::llvm::PassPluginLibraryInfo LLVM_ATTRIBUTE_WEAK llvmGetPassPluginInfo()
    {
        return {
            LLVM_PLUGIN_API_VERSION, "LoopFeaturePass", "v0.1",
            [](PassBuilder &PB)
            {
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
                // PB.registerAnalysisRegistrationCallback(
                //     [](LoopAnalysisManager &LAM)
                //     {
                //         LAM.registerPass([&]
                //                          { return LoopNestAnalysis(); });
                //     });
            }};
    }
}