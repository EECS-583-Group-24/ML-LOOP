import os
import subprocess

# Directory path to featurePass
directory_path = os.path.join(os.path.dirname(__file__), '../featurePass/build/')
test_files='.'
temp_dir='./temp/'
output_dir='.'
training_output='./best_optimization_results.csv'
ml_model='./mlModel/'

# Workflow: Create FeaturePass.so -> generatePermutations.py -> runOptimizations.py -> collectFeatures.py -> combineFeatures.py -> inference.py -> visualization.py

# Import all python requirements
subprocess.run(['pip3', 'install', '-r', '../requirements.txt'])

# Make build directory if it doesnt exist
if not os.path.exists(directory_path):
    os.makedirs(directory_path)

# Create FeaturePass.so executable
subprocess.run(['cmake', '..'], cwd=directory_path)
subprocess.run(['make'], cwd=directory_path)

#Model
print("Running Model ...")
subprocess.run(['python3', 'multiModel.py'], cwd=ml_model)


# Run inference.py
print("Analyze results ...")
subprocess.run(['python3', 'inference.py'], cwd=ml_model)

# Visualize results
subprocess.run(['python3', 'visualization.py'], cwd=ml_model)
