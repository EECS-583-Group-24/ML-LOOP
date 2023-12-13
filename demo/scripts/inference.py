import os
import argparse
import csv
import subprocess
import timeit
import statistics
'''
    SETUP PARAMETERS
'''
collect_features_script='../scripts/collectFeatures.py'
output_directory_loc='../'
model_output="../predictions.csv"
optimization_permutations_source='../training/optimization_permutations.txt'
'''
    FUNCTION TO GENERATE COMPILED CODE
'''
'''Times executation of n runs and returns average'''
def run_time_executable(executable,n):
    '''times = []
    for _ in range(n):
        start_time = timeit.default_timer()
        subprocess.run([executable])  # Execute the generated executable
        execution_time = timeit.default_timer() - start_time
        times.append(execution_time)
        median_time = statistics.median(times)
    return median_time
    '''
    return timeit.timeit(stmt = f"subprocess.call([\'{executable}\'],stdout=subprocess.DEVNULL,stderr=subprocess.STDOUT)", setup = "import subprocess", number=n)
'''Generates llvm_ir and output directory from c file'''
def generate_bytecode(test_directory, filename):
    # Create a directory based on the input file name
    output_dir ="./temp"
    os.makedirs(output_dir, exist_ok=True)
    
    llvm_ir = os.path.join(output_dir, f"{os.path.splitext(filename)[0]}_non_optimized.ll")
    subprocess.run(f"clang -S -emit-llvm {os.path.join(test_directory, filename)} -o {llvm_ir}",shell=True)
    return llvm_ir,output_dir

'''Compiles and tests files with a optimization sequence'''
def compile_test_file_with_optimization(output_dir, bytecode, opt_sequence,n):
     
    # Join the list elements into a single string
    opt_flags = ' '.join(opt_sequence)
    optimized_file = os.path.join(output_dir, "optimized.ll")
    executable_file = os.path.join(output_dir, "exec")

    # Execute the opt command and place the output file in the directory
    subprocess.run(f"opt {opt_flags} {bytecode} -o {optimized_file}", shell=True,stdout=subprocess.DEVNULL,stderr=subprocess.STDOUT)
    subprocess.run(f"clang {optimized_file} -o {executable_file}", shell=True,stdout=subprocess.DEVNULL,stderr=subprocess.STDOUT)
    
    # Measure execution time of the executable
    return run_time_executable(executable_file,n)

'''Compiles and tests files with a optimization level'''
def compile_test_file_with_optimization_level(output_dir,bytecode, optimization_level,n):

    optimized_file = os.path.join(output_dir, f"opt_{optimization_level}.ll")
    executable_file =  os.path.join(output_dir, f"exec_{optimization_level}")
    
    subprocess.run(f"opt -O{optimization_level} {bytecode} -o {optimized_file}", shell=True)
    subprocess.run(f"clang {optimized_file} -o {executable_file}", shell=True)

    return run_time_executable(executable_file,n) 


'''Takes model inference and profiles output from each model and each file relative to O3'''
def profile(test_directory, n):
    #Gathers optimization permutations
    optimization_permutations = []
    with open(optimization_permutations_source, 'r') as file:
        for line in file:
            row = line.strip().split(',') 
            optimization_permutations.append(row)
    #Gathers performance Output
    output=[]
    percentages=[]
    filenames=[]                   
    with open(model_output, newline='') as csvfile:
        reader = csv.reader(csvfile)
        headers = next(reader)  # Skip header row
        for row in reader:
            filename = row[0]
            filenames.append(filename)
            times=[]
            # Profile each optimization sequence
            llvm_ir,output_dir=generate_bytecode(test_directory,filename)
            print(f'Testing {filename} ...')
            for model_name, opt_sequence_number in zip(headers[1:], row[1:]):
                opt_sequence = optimization_permutations[int(opt_sequence_number)]
                times.append(compile_test_file_with_optimization(output_dir,llvm_ir, opt_sequence,n))
            # Iterate from 0-3 for optimization levels
            for i in range(4):
                times.append(compile_test_file_with_optimization_level(output_dir,llvm_ir, i,n))
            O3=times[-1]
            run_times=times[0:-3]
            percentages.append([(O3-time)/O3 for time in times])
            output.append(times)
    #O3=[output[t][-1] for t in output]
    transposed =[[row[i] for row in percentages] for i in range(len(percentages[0]))]
    print([statistics.median(transpose) for transpose in transposed])
    #Print Results
    with open('results.csv', 'w', newline='') as csvfile:
        writer = csv.writer(csvfile)
        writer.writerow(['Filename'] + headers[1:] + ['O0'] + ['O1'] + ['O2'] + ['O3'])  # Write header row
        for i, out in enumerate(output):
            out.insert(0,filenames[i])
            writer.writerow(out)
    with open(output_directory_loc+'results_percentages.csv', 'w', newline='') as csvfile:
        writer = csv.writer(csvfile)
        writer.writerow(['Filename'] + headers[1:] + ['O0'] + ['O1'] + ['O2'] + ['O3'])  # Write header row
        for i, out in enumerate(percentages):
            out.insert(0,filenames[i])
            writer.writerow(out)

    return 
def generate_stats(output):
    transposed =[[row[i] for row in output] for i in range(len(output[0]))]

'''
    COMMAND LINE INPUTS
'''
if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    #Setup
    parser.add_argument('test_files',help="realtive path to test directory")
    args = parser.parse_args()
    profile(args.test_files,1000)
