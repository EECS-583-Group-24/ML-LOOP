# ML-LOOP: Optimizing LLVM with Machine Learning
Leverage machine learning to dynamically predict and apply optimization pass sequences in LLVM. 
![alt text](https://github.com/EECS-583-Group-24/ML-LOOP/blob/main/figures/Total_Models_Improvement_O3.png)
## Project Overview
**Team Members:** Anurag Bangera, Chirag Bangera, Jonhan Chen, Richard Wang.

This repository holds the code deliverables for Group 24's (Anurag Bangera, Chirag Bangera, Jonhan Chen, Richard Wang) EECS 583 Advanced Compilers Project at the University of Michigan.

## Getting Started: Quick Instructions
For a quick setup, follow these steps:

1. **Run Entire Workflow:** 
   Run `cd scripts` then `python3 runEntireWorkflow.py` to automate the process.
2. **Activate Multiple Models:** 
   Run `cd ../mlModel` then `python3 multiModel.py` to engage various machine learning models.
3. **Begin Inference:** 
   Run `python3 inference.py` for the inference phase.
4.  **Visualize Reults:** 
   Run `python3 visualize.py` to create various performance graphs

## Detailed Instructions: Manual Setup

### Step 1: Build the Feature Passes
- **Initial Setup:** 
  Use CMake to build the `featurePass` in a "build" directory: `cmake ..`. Then, execute `make` in `featurePass/build/featurePass` and `featurePass/build/loopPass`.
  - `featurePass`: A function pass that aggregates various features.
  - `loopPass`: A loop pass for feature collection.

### Step 2: Script Execution for Data Preparation
Execute the following scripts in sequence to prepare the training and test datasets:

1. **generatePermutations.py:** 
   Generates a .txt file with different pass permutations.
2. **runOptimizations.py:** 
   Identifies the optimal optimization pass for each file.
3. **collectFeatures.py:** 
   Gathers features from each training and test file.
4. **combineFeatures.py:** 
   Produces `training.csv` and `test.csv` for machine learning models, located in `mlModels`.

### Step 3: Model Training and Evaluation
- In `mlModels`, run:
  - `knn.py` for 1st Nearest Neighbor results.
  - `randomForest.py` for Random Forest results.

### Step 4: Performance Analysis
- Run `inference.py` to compare the machine learning predicted results against LLVM's O3 optimizations, documented in the `results.csv` file.

### Step 5: Visualize Results
- Run `visualize.py` to create various graphs to visualize the results.


