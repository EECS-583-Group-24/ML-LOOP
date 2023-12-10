# ML-LOOP: Machine Learning LLVM Optimization Ordering Pass 
Using Machine Learning to Predict the Sequences of Optimization Passes in LLVM

This repository holds the code deliverables for Group 24's (Anurag Bangera, Chirag Bangera, Jonhan Chen, Richard Wang) EECS 583 Project.

## Instructions (simple)
1. Run scripts/runEntireWorkflow.py
2. Run scripts/multiModel.py
3. Run scripts/inference.py

## Instructions (manual)

1. Make sure you build the featurePass with CMake in a "build" directory with "cmake ..". In this build directory, run "make" in featurePass/build/featurePass and featurePass/build/loopPass
    "featurePass" contains a function pass that collects several features.
    "loopPass" contains a loop pass that collects several features.
2. Run the scripts in the scripts folder to generate the training and test sets, in order generatePermutations.py -> runOptimizations.py -> collectFeatures.py -> combineFeatures.py :
    1. generatePermutations.py: Creates a .txt file that holds the different permutations of the passes
    2. runOptimizations.py: Generates the best optimization pass for each file.
    3. collectFeatures.py: Collect the features on each training and test file.
    5. combineFeatures.py: Create the training csv and the test csv for the ML model.
    The outputted "training.csv" and "test.csv" will be found in mlModels.
4. In mlModels, run "knn.py" for the 1st Nearest Neighbor results on each of the test files, or "randomForest.py" for the Random Forest results.
5. Run inference.py to compare predicted ML results to O3 in results.csv file
