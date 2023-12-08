import os
import subprocess

# Directory path to featurePass
directory_path = os.path.join(os.path.dirname(__file__), '../featurePass/featurePass/')
training_files="../files/simple"
# Create FeaturePass.so executable
subprocess.run(['cmake', '..'], cwd=directory_path)
subprocess.run(['make'], cwd=directory_path)

# Run generatePermutations.py
subprocess.run(['python3', 'generatePermutations.py'])

# runOptimizations.py - >collectTrainingFeatures.py -> collectTestFeatures.py -> createTraining.py -> createTest.py
subprocess.run(['python3', 'runOptimizations.py', training_files])
subprocess.run(['python3', 'collectTrainingFeatures.py'])
subprocess.run(['python3', 'collectTestFeatures.py'])
subprocess.run(['python3', 'createTraining.py'])
subprocess.run(['python3', 'createTest.py'])

