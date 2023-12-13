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
output_dir='.'
model='./multiModel.py'
training_files="../temp/best_optimization_results.csv"
optimization_permutations_source='../optimization_permutations.txt'
model_output='./predictions.csv'
input_passes={"random":"./opts/random_pass.csv","one_pass":"./opts/one_pass.csv","full_tree":"./opts/full_tree_pass.csv",'119':"./opts/119_pass.csv",'ten times':"./opts/five.csv"}
'''
    FUNCTION TO GENERATE COMPILED CODE
'''
'''Times executation of n runs and returns average'''
def run_time_executable(executable,n):
    times = []
    return timeit.timeit(stmt = f"subprocess.call([\'{executable}\'],stdout=subprocess.DEVNULL,stderr=subprocess.STDOUT)", setup = "import subprocess", number=n)
    #for _ in range(n):
    #    start_time = timeit.default_timer()
    #    subprocess.run([executable])  # Execute the generated executable
    #    execution_time = timeit.default_timer() - start_time
    #    times.append(execution_time)
    #    median_time = statistics.median(times)
    #return median_time
'''Generates llvm_ir and output directory from c file'''
def generate_bytecode(test_directory, filename):
    # Create a directory based on the input file name
    output_dir = os.path.join("./temp/output", os.path.splitext(filename)[0])
    os.makedirs(output_dir, exist_ok=True)
    
    llvm_ir = os.path.join(output_dir, f"{os.path.splitext(filename)[0]}_0_non_optimized.ll")
    subprocess.run(f"clang -S -emit-llvm {os.path.join(test_directory, filename)} -o {llvm_ir}", shell=True,stdout=subprocess.DEVNULL,stderr=subprocess.STDOUT)
    return llvm_ir,output_dir

'''Compiles and tests files with a optimization sequence'''
def compile_test_file_with_optimization(output_dir, bytecode, opt_sequence,n):
     
    # Join the list elements into a single string
    opt_flags = ' '.join(opt_sequence)
    optimized_file = os.path.join(output_dir, "optimized.ll")
    executable_file = os.path.join(output_dir, "exec")

    # Execute the opt command and place the output file in the directory
    subprocess.run(f"opt {opt_flags} {bytecode} -o {optimized_file}", shell=True)
    subprocess.run(f"clang {optimized_file} -o {executable_file}", shell=True)
    
    # Measure execution time of the executable
    return run_time_executable(executable_file,n)

'''Compiles and tests files with a optimization level'''
def compile_test_file_with_optimization_level(output_dir,bytecode, optimization_level,n):

    optimized_file = os.path.join(output_dir, f"opt_{optimization_level}.ll")
    executable_file =  os.path.join(output_dir, f"exec_{optimization_level}")
    
    subprocess.run(f"opt -O{optimization_level} {bytecode} -o {optimized_file}", shell=True)
    subprocess.run(f"clang {optimized_file} -o {executable_file}", shell=True)

    return run_time_executable(executable_file,n) 
'''
    FUNCTIONS FOR FUNCTIONALITY
'''

'''Takes model inference and profiles output from each model and each file relative to O3'''
def profile(test_directory,training_data, n):
    #Gathers optimization permutations
    optimization_permutations = []
    with open(optimization_permutations_source, 'r') as file:
        for line in file:
            row = line.strip().split(',') 
            optimization_permutations.append(row)
    #Gathers performance Output
    output=[]
    filenames=[]                   
    with open(training_data, newline='') as csvfile:
        reader = csv.reader(csvfile)
        headers = next(reader)  # Skip header row
        for row in reader:
            filename = row[0]
            filenames.append(filename)
            #times=[filename]
            print(f'Testing {filename} ...')
            # Profile each optimization sequence
            llvm_ir,output_dir=generate_bytecode(test_directory,filename)
            opt_sequence = optimization_permutations[int(row[2])]
            time=compile_test_file_with_optimization(output_dir,llvm_ir, opt_sequence,n)
            # Iterate from 0-3 for optimization levels
            #for i in range(4):
            O3=compile_test_file_with_optimization_level(output_dir,llvm_ir, 3,n)
            #Convert to percentage
            output.append((O3-time)/O3)
    print(statistics.median(output))
    #output.append(['average',statistics.median([times[:][1]]),statistics.median([times[:][2]]),statistics.median([times[:][3]])])
    #Print Results
    '''with open('results.csv', 'w', newline='') as csvfile:
        writer = csv.writer(csvfile)
        writer.writerow(['Filename'] + [headers[2]] + ['O0'] + ['O1'] + ['O2'] + ['O3'])  # Write header row
        for i, out in enumerate(output):
            out.insert(0,filenames[i])
            writer.writerow(out)
    '''
    return statistics.median(output)

def multi_profile(n):
    results={}
    for name,file in input_passes.items():
        results[name]=time=profile('../../files/simple',file,n)
    for name,time in results.items():
        print(f'{name} has an improvment of {time}')
    
'''
    COMMAND LINE INPUTS
'''
if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    #Setup
    #parser.add_argument('test_files',help="realtive path to test directory")
    args = parser.parse_args()
    #profile('../../files/simple',"../temp/best_optimization_results.csv",20)
    multi_profile(50)
