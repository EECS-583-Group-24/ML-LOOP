# Optimization Pass Ordering EECS 583 Project

This repository holds the code deliverables for Group 24's (Anurag Bangera, Chirag Bangera, Jonhan Chen, Richard Wang) EECS 583 Project.

## Use

1. Make sure you build the featurePass with CMake in a "build" directory with "cmake ..". In this build directory, run "make" in featurePass/build/featurePass and featurePass/build/loopPass
    "featurePass" contains a function pass that collects several features.
    "loopPass" contains a loop pass that collects several features.
2. Run the scripts in the scripts folder to generate the training and test sets, in order:
    1. generatePermutations.py: Creates a .txt file that holds the different permutations of the passes
    2. runOptimizations.py: Generates the best optimization pass for each file.
    3. collectTrainingFeatures.py: Collect the features on each training file.
    4. collectTestFeatures.py: Collect the features on each test file.
    5. createTraining.py: Create the training csv for the ML model.
    6. createTest.py: Create the test csv for the ML model.
    The outputted "training.csv" and "test.csv" will be found in mlModels.
3. In mlModels, run "knn.py" for the 1st Nearest Neighbor results on each of the test files, or "randomForest.py" for the Random Forest results.
