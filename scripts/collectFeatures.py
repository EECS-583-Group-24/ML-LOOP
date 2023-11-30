import os
import subprocess
import csv

# Replace this path with the directory containing your C/C++ files
directory_path = os.path.abspath(os.path.join(os.path.dirname(__file__), '../files/simple'))

# List to store results
results = []

# Path to featurePass.so
PATH2LIB = os.path.abspath(os.path.join(os.path.dirname(__file__), '../featurePass/build/featurePass/FeaturePass.so'))
# Name of the pass
PASS = 'fp'

# Iterate through files in the directory
for filename in os.listdir(directory_path):
    if filename.endswith('.c') or filename.endswith('.cpp'):
        filepath = os.path.join(directory_path, filename)
        file_name_without_extension = os.path.splitext(filename)[0]  # Extract file name without extension
        os.chdir(directory_path)  # Change directory to the test directory
        
        # Delete outputs from previous runs
        subprocess.run(['rm', '-f', 'default.profraw', f'{file_name_without_extension}_prof', f'{file_name_without_extension}_fplicm', f'{file_name_without_extension}.bc', f'{file_name_without_extension}.profdata', f'{file_name_without_extension}_output', f'{file_name_without_extension}.ll', '*.in', '*.in.Z', 'words'], cwd=directory_path)

        # Convert source code to bitcode (IR)
        subprocess.run(['clang', '-emit-llvm', '-c', filepath, '-Xclang', '-disable-O0-optnone', '-o', f'{file_name_without_extension}.bc'], cwd=directory_path)
        # Print directory contents after creating .bc files
        print(f"Contents after creating .bc for {filename}:")
        subprocess.run(['ls', '-la'], cwd=directory_path)


        # Instrument profiler passes. Generates profile data.
        subprocess.run(['opt', '-passes=pgo-instr-gen,instrprof', f'{file_name_without_extension}.bc', '-o', f'{file_name_without_extension}.prof.bc'], cwd=directory_path)

        # Generate binary executable with profiler embedded
        subprocess.run(['clang', '-fprofile-instr-generate', f'{file_name_without_extension}.prof.bc', '-o', f'{file_name_without_extension}_prof'], cwd=directory_path)

        # When we run the profiler embedded executable, it generates a default.profraw file that contains the profile data.
        subprocess.run([f'./{file_name_without_extension}_prof'], cwd=directory_path, stdout=subprocess.PIPE)

        # Converting it to LLVM form. This step can also be used to combine multiple profraw files.
        subprocess.run(['llvm-profdata', 'merge', '-o', f'{file_name_without_extension}.profdata', 'default.profraw'], cwd=directory_path)

        # The "Profile Guided Optimization Instrumentation-Use" pass attaches the profile data to the bc file.
        subprocess.run(['opt', '-passes=pgo-instr-use', '-o', f'{file_name_without_extension}.profdata.bc', '-pgo-test-profile-file={file_name_without_extension}.profdata', f'< {file_name_without_extension}.bc'], cwd=directory_path)

        # Runs your pass on the instrumented code.
        subprocess.run(['opt', '--disable-output', f'-load-pass-plugin={PATH2LIB}', f'-passes={PASS}', f'{file_name_without_extension}.profdata.bc'], cwd=directory_path)

        # Cleanup
        subprocess.run(['rm', '-f', '*.in', '*.in.Z', 'default.profraw', f'{file_name_without_extension}_prof', f'{file_name_without_extension}_fplicm', f'{file_name_without_extension}.bc', f'{file_name_without_extension}.profdata', f'{file_name_without_extension}_output', f'{file_name_without_extension}.ll', 'words'], cwd=directory_path)

        # Store filename and output in results list
        results.append((filename, "Process Completed."))

# Write results to CSV file
output_csv = os.path.join(directory_path, "features.csv")
with open(output_csv, mode='w', newline='') as file:
    writer = csv.writer(file)
    writer.writerow(['Filename', 'Output'])
    for result in results:
        writer.writerow(result)
