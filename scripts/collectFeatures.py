import os
import subprocess

# Set the working directory
directory_path = os.path.join(os.path.dirname(__file__), '../files/simple/')
csv_file_path = os.path.join(directory_path, 'features.csv')
final_csv_file_path = os.path.join(directory_path, 'final_features.csv')
total_features = 33

# Run the Bash script from that location
script_path = os.path.join(directory_path, 'run.sh')
os.chdir(directory_path)
subprocess.run(script_path, shell=True)
os.chdir(os.path.dirname(__file__))

# Open the features.csv file for reading
with open(csv_file_path, 'r') as file:
    lines = file.readlines()

# Create a dictionary to store data for each file
file_data = {}
current_file = ''

# Process each line in the file
for line in lines:
    if line.startswith('Output for'):
        # Extract the filename
        current_file = line.split('Output for ')[1].strip().rstrip(':')
        file_data[current_file] = []
    else:
        # Split the line into individual integers
        integers = [int(num) for num in line.strip().split(',') if num.isdigit()]
        if integers:
            # If data exists, add it to the corresponding file entry in the dictionary
            if len(file_data[current_file]) == 0:
                file_data[current_file] = integers
            else:
                # Add corresponding integers together
                for i in range(len(integers)):
                    file_data[current_file][i] += integers[i]

# Write aggregated data to the final_features.csv file
with open(final_csv_file_path, 'w') as output_file:
    for file, data in file_data.items():
        output_file.write(f"{file},{','.join(map(str, data))}\n")