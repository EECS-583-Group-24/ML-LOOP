import subprocess
import os
import itertools
import timeit
import csv
import heapq
import argparse
from multiprocessing import Pool
from itertools import repeat
import json
import statistics

def get_last_decimal(file_path):
    try:
        with open(file_path, 'r') as file:
            lines = file.readlines()
            if lines:
                last_line = lines[-1].strip()
                decimals = re.findall(r'\d+\.\d+', last_line)
                if decimals:
                    return decimals[-1]
                else:
                    print("No decimal found in the last line.")
            else:
                print("The file is empty.")

        # Delete the file after reading
        os.remove(file_path)
        print(f"File '{file_path}' has been deleted.")

    except FileNotFoundError:
        print(f"File not found: {file_path}")
    except Exception as e:
        print(f"An error occurred: {str(e)}")
    return -1
def timed_run(executable_file, terminal:bool=False):
    if not terminal:
        start_time = timeit.default_timer()
        subprocess.run([executable_file])
        return timeit.default_timer() - start_time  
    else:
        timer=f"{{time {executable_file};}} 2> time_out.txt"
        subprocess.run(timer,shell=True)  # Execute the generated executable
        return get_last_decimal("time_out.txt")                     

# Function to compile test file with optimization sequence
def compile_test_file_with_optimization(input_file, opt_sequence,test_directory,pass_id, non_optimized_file, output_dir):
    print(f"Testing opt sequence #{pass_id} for {input_file} ...")
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
    execution_time=timed_run(executable_file,False)

    print(f"Execution time for {input_file} with {pass_id}: {execution_time:.8f} seconds")
    return [execution_time,pass_id]


def compile_test_file_with_optimization_level(input_file, optimization_level,test_directory):
    # Create a directory based on the input file name
    output_dir = os.path.join("output", os.path.splitext(input_file)[0])
    os.makedirs(output_dir, exist_ok=True)

    llvm_ir_file = os.path.join(output_dir, f"{os.path.splitext(input_file)[0]}.ll")

    # Compile the file using the given optimization level
    subprocess.run(f"clang -S -emit-llvm {os.path.join(test_directory, input_file)} -Xclang -disable-O0-optnone -o {llvm_ir_file}", shell=True)

    optimized_file = os.path.join(output_dir, f"{os.path.splitext(input_file)[0]}_O{optimization_level}.ll")

    subprocess.run(f"opt -O{optimization_level} {llvm_ir_file} -o {optimized_file}", shell=True)
    
    executable_file =  os.path.join(output_dir, f"{os.path.splitext(input_file)[0]}_O{optimization_level}")

    subprocess.run(f"clang {optimized_file} -o {executable_file}", shell=True)

    # Measure execution time of the compiled LLVM IR file
    execution_time=timed_run(executable_file,False)

    print(f"Execution time for {input_file} with -O{optimization_level}: {execution_time:.8f} seconds")
    return [execution_time,f'O{optimization_level}']

def createDataset(directory,file,n):
    # Directory containing test files 
    test_directory = os.path.abspath(os.path.join(os.path.dirname(__file__), directory))
    # Fetch all C/C++ files in the test directory
    input_file = file

    optimization_permutations = []
    with open('optimization_permutations.txt', 'r') as file:
        for line in file:
            row = line.strip().split(',')  # Split each line by commas (or another delimiter)
            optimization_permutations.append(row)

    # List to store results
    results = []
    # Number of optimization passes to store
    store_size = 120

    print(f"Processing {input_file}...")
    times={}
    # Create a directory based on the input file name
    output_dir = os.path.join("output", os.path.splitext(input_file)[0])
    os.makedirs(output_dir, exist_ok=True)
    non_optimized_file = os.path.join(output_dir, f"{os.path.splitext(input_file)[0]}_0_non_optimized.ll")
    subprocess.run(f"clang -S -emit-llvm {os.path.join(test_directory, input_file)} -Xclang -disable-O0-optnone -o {non_optimized_file}", shell=True)
    for i in range(n):
        original,trash=compile_test_file_with_optimization_level(input_file,3,test_directory)
        p=0
        for opt in optimization_permutations:
            result,pin=compile_test_file_with_optimization(input_file,opt,test_directory,p,non_optimized_file,output_dir)
            times.setdefault(pin, []).append((original-result)/original)
            p=p+1
        #with Pool() as pool:
        # call the same function with different data in parallel
            #for result,pin in pool.starmap(compile_test_file_with_optimization, zip(repeat(input_file),optimization_permutations,repeat(test_directory),range(len(optimization_permutations)),repeat(non_optimized_file),repeat(output_dir))):
            #    times.setdefault(pin, []).append((original-result)/original)

    #times.sort()
    #best_times=heapq.nsmallest(store_size,times)
    # Write optimization results to a CSV file
    r=[]
    for pin,key in times.items():
        good_count=0
        median=statistics.median(key)
        for run in key :
            if(run>=0):
                good_count=good_count+1
        r.append([median,pin])
        print(f'Run {pin} has {good_count} good counts with a median runtime of {median}')
    r.sort()
    print(*r, sep='\n')
    with open("./temp/best_optimization_results.csv", mode='w', newline='') as file:
        file.write(json.dumps(times))
        
    # run_LLVM_pass_on_files(test_files, test_directory, test_directory)

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    #Setup
    parser.add_argument('directory',help="realtive path to test dir")
    parser.add_argument('file',help="name of file")
    parser.add_argument('--n',required=False,default=1,help="realtive path to test file")
    args = parser.parse_args()
    createDataset(args.directory,args.file, args.n)

