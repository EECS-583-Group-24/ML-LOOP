import subprocess
import os
import itertools
import timeit
import csv

# Directory containing test files 
test_directory = os.path.abspath(os.path.join(os.path.dirname(__file__), '../files/simple'))

# Fetch all C/C++ files in the test directory
test_files = [file for file in os.listdir(test_directory) if file.endswith(('.c', '.cpp'))]

optimization_permutations = []
with open('optimization_permutations.txt', 'r') as file:
    for line in file:
        row = line.strip().split(',')  # Split each line by commas (or another delimiter)
        optimization_permutations.append(row)


# Function to compile test file with optimization sequence
def compile_test_file_with_optimization(input_file, opt_sequence):
    
    # Create a directory based on the input file name
    output_dir = os.path.join("output", os.path.splitext(input_file)[0])
    os.makedirs(output_dir, exist_ok=True)
    
    non_optimized_file = os.path.join(output_dir, f"{os.path.splitext(input_file)[0]}_0_non_optimized.ll")
    subprocess.run(f"clang -S -emit-llvm {os.path.join(test_directory, input_file)} -o {non_optimized_file}", shell=True)
    
    # Join the list elements into a single string
    opt_flags = ' '.join(opt_sequence)
    
    # Formulate the output file path within the directory
    optimized_file = os.path.join(output_dir, f"{os.path.splitext(input_file)[0]}_{optimization_permutations.index(opt_sequence)+1}.ll")

    # Execute the opt command and place the output file in the directory
    subprocess.run(f"opt {opt_flags} {non_optimized_file} -o {optimized_file}", shell=True)
    
    # Formulate the output executable file path
    executable_file = os.path.join(output_dir, f"{os.path.splitext(input_file)[0]}_{optimization_permutations.index(opt_sequence)+1}")
    # Compile the optimized LLVM IR file into an executable
    subprocess.run(f"clang {optimized_file} -o {executable_file}", shell=True)
    
    # Measure execution time of the executable
    start_time = timeit.default_timer()
    subprocess.run([executable_file])  # Execute the generated executable
    execution_time = timeit.default_timer() - start_time
    print(f"Execution time for {input_file} with {optimization_permutations.index(opt_sequence)+1}: {execution_time:.8f} seconds")
    return execution_time

    
# Function to profile test file and collect timing results
def profile_test_file(input_file, opt_sequence):
    pass

# Function to run LLVM pass on multiple files and collect features
def run_LLVM_pass_on_files(test_files, test_directory, output_directory):
    pass

# List to store results
results = []
# Number of optimization passes to store
store_size = 5

# Get Best Optimization Patterns for each test case
for input_file in test_files:
    print(f"Processing {input_file}...")
    best_opts = [0] * store_size  # Store the best five optimization passes for each file
    lowest_times = [float('inf')] * store_size  # Keep track of the lowest times for the best five passes

    for opt_sequence in optimization_permutations:
        pass_id = optimization_permutations.index(opt_sequence) + 1
        print(f"Testing opt sequence #{pass_id} for {input_file} ...")
        timing = compile_test_file_with_optimization(input_file, opt_sequence)

        # Update the best five passes and their execution times
        for i, time in enumerate(lowest_times):
            if timing < time:
                lowest_times[i] = timing
                best_opts[i] = pass_id
                break

    results.append([input_file, lowest_times, best_opts[:]])  # Save a copy of best_opts to avoid mutation

# Write optimization results to a CSV file
with open("best_optimization_results.csv", mode='w', newline='') as file:
    writer = csv.writer(file)
    writer.writerow(["Testcase name", f"Best {store_size} Times", f"Best {store_size} Opt Passes"])
    writer.writerows(results)
    
run_LLVM_pass_on_files(test_files, test_directory, test_directory)
