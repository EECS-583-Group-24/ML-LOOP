# ML-LOOP: Optimizing LLVM with Machine Learning
Leverage machine learning to dynamically predict and apply optimization pass sequences in LLVM. 
![alt text](https://github.com/EECS-583-Group-24/ML-LOOP/blob/main/figures/Total_Models_Improvement_O3.png)
## Project Overview
**Team Members:** Anurag Bangera, Chirag Bangera, Jonhan Chen, Richard Wang.

This repository holds the code deliverables for Group 24's (Anurag Bangera, Chirag Bangera, Jonhan Chen, Richard Wang) EECS 583 Advanced Compilers Project at the University of Michigan.

## Getting Started: Quick Instructions
For a quick setup, follow these steps:

1. **Run Entire Workflow:** 
   Run `cd scripts` then `python3 runEntireWorkflow.py` to automate the entire process.
   - ETA to Run (using `time python3 runEntireWorkflow.py`):
      - real    9m 12.976s
      - user    24m 33.383s
      - sys     21m 30.435s
## Running Demo
We created a demo folder (/demo) to highlight the functionality of our current models and workflows. This demo assumes that training is complete and collected within the /demo/training_files folder. The scripts and other functionality is then locally stored within this folder. Inference is run on all programs that are collected within the ./tests folder. This demo has a run.py interface at the top level of the demo folder that provides a variety of commands to run each step of the model inference process, from feature collection, inference, profiling and visualization. Each of these steps can be performed in order, or can be run together as the batch command. Please refer to the command line help for more information. 
```
cd ./demo //Run all commands wihtin the /demo directory
python3 run.py features //collect features of test dataset
python3 run.py inference //run inference on features
python3 run.py profile // profile results against O3
python3 run.py visualize //generate graphs and other visualization tools
```
## Detailed Instructions: Manual Setup

### Step 1: Build the Feature Passes
- **Initial Setup:** 
  Use CMake to build the `featurePass` in a "build" directory: `cmake ..`. Then, execute `make` in `featurePass/build/featurePass` and `featurePass/build/loopPass`.
  - `featurePass`: A function pass that aggregates various features.
  - `loopPass`: A loop pass for feature collection.

### Step 2: Script Execution for Data Preparation
First make sure to run `pip3 install -r requirements.txt`. Execute the following scripts in sequence to prepare the training and test datasets:

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
  - `multiModel.py` for all ML model results.
  - `knn.py` for just the 1st Nearest Neighbor results.
  - `randomForest.py` for just the Random Forest results.

### Step 4: Performance Analysis
- Run `inference.py` to compare the machine learning predicted results against LLVM's O3 optimizations, documented in the `results.csv` file.

### Step 5: Visualize Results
- Run `visualize.py` to create various graphs to visualize the results.


