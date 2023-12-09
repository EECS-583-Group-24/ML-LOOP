import os
import argparse
import csv
import subprocess
import timeit

collect_features_script='../scripts/collectFeatures.py'
output_dir='.'
model='./multiModel.py'
training_data='./training.csv'
optimization_permutations_source='../scripts/optimization_permutations.txt'
model_output='./predictions.csv'
def run_time_executable(executable,n):
    total=0
    for i in range(n):
        start_time = timeit.default_timer()
        subprocess.run([executable])  # Execute the generated executable
        execution_time = timeit.default_timer() - start_time
        total=total+execution_time
    average=total/n
    return average
def compile_test_file_with_optimization(test_directory, input_file, opt_sequence,n):
    
    # Create a directory based on the input file name
    output_dir = os.path.join("./temp/output", os.path.splitext(input_file)[0])
    os.makedirs(output_dir, exist_ok=True)
    
    non_optimized_file = os.path.join(output_dir, f"{os.path.splitext(input_file)[0]}_0_non_optimized.ll")
    subprocess.run(f"clang -S -emit-llvm {os.path.join(test_directory, input_file)} -o {non_optimized_file}", shell=True)
    
    # Join the list elements into a single string
    opt_flags = ' '.join(opt_sequence)
    
    # Formulate the output file path within the directory
    optimized_file = os.path.join(output_dir, f"{os.path.splitext(input_file)[0]}.ll")

    # Execute the opt command and place the output file in the directory
    subprocess.run(f"opt {opt_flags} {non_optimized_file} -o {optimized_file}", shell=True)
    
    # Formulate the output executable file path
    executable_file = os.path.join(output_dir, f"{os.path.splitext(input_file)[0]}")
    # Compile the optimized LLVM IR file into an executable
    subprocess.run(f"clang {optimized_file} -o {executable_file}", shell=True)
    
    # Measure execution time of the executable
    return run_time_executable(executable_file,n)

def compile_test_file_with_optimization_level(test_directory,input_file, optimization_level,n):
    # Create a directory based on the input file name
    output_dir = os.path.join("./temp/output", os.path.splitext(input_file)[0])
    os.makedirs(output_dir, exist_ok=True)

    non_optimized_file = os.path.join(output_dir, f"{os.path.splitext(input_file)[0]}_0_non_optimized.ll")
    subprocess.run(f"clang -S -emit-llvm {os.path.join(test_directory, input_file)} -o {non_optimized_file}", shell=True)
    
    optimized_file = os.path.join(output_dir, f"{os.path.splitext(input_file)[0]}_O{optimization_level}.ll")

    subprocess.run(f"opt -O{optimization_level} {non_optimized_file} -o {optimized_file}", shell=True)
    
    executable_file =  os.path.join(output_dir, f"{os.path.splitext(input_file)[0]}_O{optimization_level}")
    print(executable_file)
    subprocess.run(f"clang {optimized_file} -o {executable_file}", shell=True)

    return run_time_executable(executable_file,n) 

def generate_features_directory(test_files):
    subprocess.run(['python3', collect_features_script, 'test', test_files])
    subprocess.run(['python3', 'combineFeatures.py','test',output_dir+'/test.csv'])
    return
def process_dataset():
    return
def run_inference():
    subprocess.run(['python3', model, training_data, 'p'])
    return 
def profile(test_directory, n):
    optimization_permutations = []
    with open(optimization_permutations_source, 'r') as file:
        for line in file:
            row = line.strip().split(',') 
            optimization_permutations.append(row)
    output=[]                   
    with open(model_output, newline='') as csvfile:
        reader = csv.reader(csvfile)
        headers = next(reader)  # Skip header row
        for row in reader:
            filename = row[0]
            times=[filename]
            for model_name, opt_sequence_number in zip(headers[1:], row[1:]):
                # Get the optimization sequence
                opt_sequence = optimization_permutations[int(opt_sequence_number)]
                # Compile the test file with the optimization sequence
                times.append(compile_test_file_with_optimization(test_directory,filename, opt_sequence,n))
            times.append(compile_test_file_with_optimization_level(test_directory,filename, 3,n)) #O3
            percent=[t/times[-1] for t in times[1:]]
            output.append(percent)
    with open('results.csv', 'w', newline='') as csvfile:
        writer = csv.writer(csvfile)
        [writer.writerow(out) for out in output] 

    return 
if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    #Setup
    #parser.add_argument('test_files',help="realtive path to test directory")
    args = parser.parse_args()
    profile('../files/test',1000)
