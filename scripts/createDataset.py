import subprocess
import os
import itertools
import timeit
import csv

# Directory containing test files 
test_directory = "/home/cbangera/EECS583/EECS583Project/files/simple"

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
    
# Function to profile test file and collect timing results
def profile_test_file(input_file, opt_sequence):
    pass

# List to store results
results = []

# Get Best Optimization Pattern for each test case
for input_file in test_files:
    print(f"Processing {input_file}...")
    best_opt = ""
    second_best_opt = ""
    lowest_time = float('inf')
    second_lowest_time = float('inf')

    for opt_sequence in optimization_permutations:
        print(f"Testing opt sequence #{optimization_permutations.index(opt_sequence)+1}...")
        compile_test_file_with_optimization(input_file, opt_sequence)
        timing = 0#profile_test_file(input_file, opt_sequence)

        if timing < lowest_time:
            second_lowest_time = lowest_time
            second_best_opt = best_opt
            lowest_time = timing
            best_opt = opt_sequence
        elif timing < second_lowest_time:
            second_lowest_time = timing
            second_best_opt = opt_sequence

    results.append([input_file, best_opt, second_best_opt])

# Write optimization results to a CSV file
with open("best_optimization_results.csv", mode='w', newline='') as file:
    writer = csv.writer(file)
    writer.writerow(["Testcase name", "Best opt pass", "Second Best Opt Pass"])
    writer.writerows(results)
