import subprocess
import os
import itertools
import timeit
import csv

# Directory containing test files 
test_directory = os.path.abspath(os.path.join(os.path.dirname(__file__), '../files/test'))

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
    csv_file_path = os.path.join(output_directory, "features.csv")
    with open(csv_file_path, mode='w', newline='') as csvfile:
        writer = csv.writer(csvfile)
        writer.writerow([
            "Function Name",
            "Total Dynamic Operations",
            "Integer ALU Ratio",
            "Floating-point ALU Ratio",
            "Memory Ratio",
            "Biased Branch Ratio",
            "Unbiased Branch Ratio",
            "Other Operations Ratio"
        ])

        # Compile LLVM pass and generate .so file
        pass_compile_command = "clang++ -shared -fPIC pass.cpp -o HW1Pass.so"
        subprocess.run(pass_compile_command, shell=True)
        
        # Run LLVM pass on each test file
        for input_file in test_files:
            print(f"Processing {input_file}...")
            
            # Compile the LLVM pass and run it on the test file
            command = f"clang -S -emit-llvm {os.path.join(test_directory, input_file)} -o {os.path.splitext(input_file)[0]}.ll"
            subprocess.run(command, shell=True)
            
            pass_command = f"opt -load ./HW1Pass.so -passes=hw1 {os.path.splitext(input_file)[0]}.ll -o {os.path.splitext(input_file)[0]}_output.ll"
            subprocess.run(pass_command, shell=True)
            
            # Extract the output from benchmark.opcstats and append it to the CSV file
            with open("benchmark.opcstats") as benchmark_file:
                lines = benchmark_file.readlines()  # Process lines as needed for CSV writing
                # Write results to CSV

def compile_test_file_with_optimization_level(input_file, optimization_level):
    # Create a directory based on the input file name
    output_dir = os.path.join("output", os.path.splitext(input_file)[0])
    os.makedirs(output_dir, exist_ok=True)

    llvm_ir_file = os.path.join(output_dir, f"{os.path.splitext(input_file)[0]}_{optimization_level}.ll")

    # Compile the file using the given optimization level
    subprocess.run(f"clang -S -emit-llvm -O{optimization_level} {os.path.join(test_directory, input_file)} -o {llvm_ir_file}", shell=True)

    # Measure execution time of the compiled LLVM IR file
    start_time = timeit.default_timer()
    subprocess.run(f"opt -S {llvm_ir_file} -o {llvm_ir_file}", shell=True)
    execution_time = timeit.default_timer() - start_time
    print(f"Execution time for {input_file} with -O{optimization_level}: {execution_time:.8f} seconds")
    return execution_time

filename = input("Filename: ")
predicted_opt_sequence = int(input("Sequence: "))
print(f"Running opt sequence for {filename}: {predicted_opt_sequence}")

print(f"Processing {filename}...")

pass_id = predicted_opt_sequence-1
print(f"Testing opt sequence #{predicted_opt_sequence} for {filename} ...")
timing = compile_test_file_with_optimization(filename, optimization_permutations[pass_id])
print(f"{filename}: pass {predicted_opt_sequence}", timing)


print(f"Comparing opt sequence #1 for {filename} ...")
timing = compile_test_file_with_optimization(filename, optimization_permutations[0])
print(f"{filename}: pass {predicted_opt_sequence}", timing)

    
# Compile test file with different optimization levels (O1, O2, O3)
for opt_level in range(1, 4):
    timing = compile_test_file_with_optimization_level(filename, opt_level)
    # Update the results list with the timings for O1, O2, and O3
    print(f"{filename}: -O{opt_level}", timing)