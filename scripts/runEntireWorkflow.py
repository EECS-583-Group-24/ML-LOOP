import os
import subprocess

# Directory path to featurePass
directory_path = os.path.join(os.path.dirname(__file__), '../featurePass/featurePass/')
training_files="../files/simple"
test_files='../files/test/'
temp_dir='./temp/'
output_dir='../mlModel'
training_output='../temp/best_optimization_results.csv'

# Workflow: Create FeaturePass.so -> generatePermutations.py -> runOptimizations.py -> collectFeatures.py -> combineFeatures.py

# Create FeaturePass.so executable
subprocess.run(['cmake', '..'], cwd=directory_path)
subprocess.run(['make'], cwd=directory_path)

# Run generatePermutations.py
subprocess.run(['python3', 'generatePermutations.py'])

#Training
subprocess.run(['python3', 'runOptimizations.py', training_files])
subprocess.run(['python3', 'collectFeatures.py', 'training', training_files])
subprocess.run(' '.join(['python3', 'combineFeatures.py',f'--training_opt {training_output}','training',output_dir+'/training.csv']),shell=True)

#Inference
subprocess.run(['python3', 'collectFeatures.py', 'test', test_files])
subprocess.run(['python3', 'combineFeatures.py','test',output_dir+'/test.csv'])

