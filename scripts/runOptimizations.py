import subprocess
import os
import itertools
import timeit
import csv
import heapq
import argparse
from multiprocessing import Pool
from itertools import repeat

def timed_run(executable_file, terminal:bool=False):
    if not terminal:
        start_time = timeit.default_timer()
        subprocess.run([executable_file])
        return timeit.default_timer() - start_time                      
    else:
        return timeit.timeit(stmt = f"subprocess.call([\'{executable_file}\'],stdout=subprocess.DEVNULL,stderr=subprocess.STDOUT)", setup = "import subprocess", number=1)
# Function to compile test file with optimization sequence
def compile_test_file_with_optimization(input_file, opt_sequence,test_directory,pass_id, non_optimized_file, output_dir):
    #print(f"Testing opt sequence #{pass_id} for {input_file} ...")
    # Join the list elements into a single string
    opt_flags = ' '.join(opt_sequence)
    
    # Formulate the output file path within the directory
    optimized_file = os.path.join(output_dir, f"{os.path.splitext(input_file)[0]}_{pass_id}.ll")

    # Execute the opt command and place the output file in the directory
    subprocess.run(f"opt --targetlibinfo --tti --tbaa --scoped-noalias-aa --assumption-cache-tracker --profile-summary-info --called-value-propagation --domtree --basic-aa --aa --loops --lazy-branch-prob --lazy-block-freq --opt-remark-emitter --basiccg --memoryssa --early-cse-memssa --speculative-execution --lazy-value-info --correlated-propagation --libcalls-shrinkwrap --lcssa-verification --scalar-evolution --simple-loop-unswitch --memdep --postdomtree --loop-distribute --loop-load-elim --loop-sink --instsimplify --div-rem-pairs --verify --early-cse --lower-expect --elim-avail-extern --callsite-splitting {opt_flags} {non_optimized_file} -o {optimized_file}", shell=True)
    
    # Formulate the output executable file path
    executable_file = os.path.join(output_dir, f"{os.path.splitext(input_file)[0]}_{pass_id}")
    # Compile the optimized LLVM IR file into an executable
    subprocess.run(f"clang {optimized_file} -o {executable_file}", shell=True)
    
    # Measure execution time of the executable
    execution_time=timed_run(executable_file,True)

    #print(f"Execution time for {input_file} with {pass_id}: {execution_time:.8f} seconds")
    return [execution_time,pass_id]

def createDataset(directory):
    # Directory containing test files 
    test_directory = os.path.abspath(os.path.join(os.path.dirname(__file__), directory))
    # Fetch all C/C++ files in the test directory
    test_files = [file for file in os.listdir(test_directory) if file.endswith(('.c', '.cpp'))]

    optimization_permutations = []
    with open('optimization_permutations.txt', 'r') as file:
        for line in file:
            row = line.strip().split(',')  # Split each line by commas (or another delimiter)
            optimization_permutations.append(row)

    # List to store results
    results = []
    # Number of optimization passes to store
    store_size = 1
    #TODO: Fix this/refactor this

    # Get Best Optimization Patterns for each test case
    for input_file in test_files:
        times=[]
        # Create a directory based on the input file name
        print(f'Testing {input_file} ...')
        output_dir = os.path.join("output", os.path.splitext(input_file)[0])
        os.makedirs(output_dir, exist_ok=True)
        non_optimized_file = os.path.join(output_dir, f"{os.path.splitext(input_file)[0]}_0_non_optimized.ll")
        subprocess.run(f"clang -S -emit-llvm {os.path.join(test_directory, input_file)} -Xclang -disable-O0-optnone -o {non_optimized_file}", shell=True,stdout=subprocess.DEVNULL,stderr=subprocess.STDOUT)
        with Pool() as pool:
        # call the same function with different data in parallel
            for result in pool.starmap(compile_test_file_with_optimization, zip(repeat(input_file),optimization_permutations,repeat(test_directory),range(len(optimization_permutations)),repeat(non_optimized_file),repeat(output_dir))):
                times.append(result)
        
        times.sort()
        best_times=heapq.nsmallest(store_size,times)
        if(store_size==1):
            results.append([input_file, best_times[0][0],best_times[0][1] ])
            print(best_times)
        else:
            results.append([input_file, best_times[:][0],best_times[:][1]])  # Save a copy of best_opts to avoid mutation

    # Write optimization results to a CSV file
    with open("./temp/best_optimization_results.csv", mode='w', newline='') as file:
        writer = csv.writer(file)
        writer.writerow(["filename", f"Best {store_size} Times", f"Best {store_size} Opt Passes"])
        writer.writerows(results)
        
    # run_LLVM_pass_on_files(test_files, test_directory, test_directory)
if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    #Setup
    parser.add_argument('training_dir',help="realtive path to test directory")
    args = parser.parse_args()
    createDataset(args.training_dir)

