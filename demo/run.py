import os
import subprocess
import argparse
import shutil
# Directory path to featurePass
directory_path = os.path.join(os.path.dirname(__file__), '../featurePass/build/')
test_files='../test_files'
temp_dir='./temp/'
output_dir='..'
features_dir='../test_files/test_features.csv'
training_output='./best_optimization_results.csv'
ml_model='./mlModel/'

# Workflow: Create FeaturePass.so -> generatePermutations.py -> runOptimizations.py -> collectFeatures.py -> combineFeatures.py -> inference.py -> visualization.py
'''
# Import all python requirements
subprocess.run(['pip3', 'install', '-r', '../requirements.txt'])

# Make build directory if it doesnt exist
if not os.path.exists(directory_path):
    os.makedirs(directory_path)
'''
verbose=False
def call(args,loc):
    if verbose:
        subprocess.run(args,cwd=loc)
    else:
        subprocess.run(args,cwd=loc,stdout=subprocess.DEVNULL,stderr=subprocess.STDOUT)
def feature_extraction():
    print("Extracting Features ...")
    subprocess.run(['python3', 'collectFeatures.py', 'test', test_files],cwd="./feature_extraction")
    subprocess.run(['python3', 'combineFeatures.py','test',features_dir],cwd="./feature_extraction")

def model_inference():
    print("Running Model ...")
    subprocess.run(['python3', 'multiModel.py', '--test',features_dir], cwd="./scripts")

def profiling():
    print("Profiling Predictions ...")
    subprocess.run(['python3', 'inference.py', test_files], cwd="./scripts")

def visualize():
    print("Visualizing Results ...")
    subprocess.run(['python3', 'visualization_demo.py'], cwd="./scripts")
def clean():
    files=["./results_percentages.csv","./predictions.csv",test_files+"/test_features.csv","./scripts/temp","./scripts/results.csv","./figures","./feature_extraction/temp"]
    for file in files:
        try: 
            os.remove(file)
        except:
            shutil.rmtree(file)
        finally:
            continue

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument('--feature',default=False, action='store_true',help="run feature analysis on tests")
    parser.add_argument('--inference',default=False, action='store_true',help="run inference on tests")
    parser.add_argument('--profile',default=False, action='store_true',help="profile performance relative to O3")
    parser.add_argument('--visual',default=False, action='store_true',help="create visuals of results")
    parser.add_argument('--batch',default=False, action='store_true',help="run end to end process")
    parser.add_argument('--verbose',default=False, action='store_true',help="makes processes output messages")
    parser.add_argument('--clean',default=False, action='store_true',help="clean demo folder")
    args = parser.parse_args()
    verbose=args.verbose
    if args.feature :
        feature_extraction()
    elif args.inference:
        model_inference()
    elif args.profile:
        profiling()
        visualize()
    elif args.visual:
        visualize()
    elif args.batch:
        feature_extraction()
        model_inference()
        profiling()
        visualize()
    elif args.clean:
        clean()
    