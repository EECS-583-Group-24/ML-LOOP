import csv
import pickle
from sklearn.preprocessing import StandardScaler
from sklearn.neighbors import KNeighborsRegressor
import os
import subprocess



loaded_model = pickle.load(open('knnpickle_file', 'rb'))


# Set the working directory
directory_path = os.path.join(os.path.dirname(__file__), '../files/test/')
output_directory_path = os.path.join(os.path.dirname(__file__))
csv_file_path = os.path.join(directory_path, 'features.csv')
final_csv_file_path = os.path.join(output_directory_path, 'test_features.csv')
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

# Write aggregated data to the test_features.csv file
with open(final_csv_file_path, 'w') as output_file:
    output_file.write("filename,total_count,br_count,switch_count,indirectbr_count,add_count,sub_count,mul_count,udiv_count,sdiv_count,urem_count,shl_count,lshr_count,ashr_count,and_count,or_count,xor_count,icmp_count,srem_count,fadd_count,fsub_count,fmul_count,fdiv_count,frem_count,fcmp_count,alloca_count,load_count,store_count,getelementptr_count,fence_count,atomiccmpxchg_count,atomicrmw_count,other_count,biased_branch_count,unbiased_branch_count\n")
    for file, data in file_data.items():
        output_file.write(f"{file},{','.join(map(str, data))}\n")


# Initialize empty lists to store features and target variable
features = [] # [Function Name, Total Dynamic Operations, Integer ALU Ratio, Floating-point ALU Ratio, Memory Ratio, Biased Branch Ratio, Unbiased Branch Ratio, Other Operations Ratio, Best Opt Passes]

# Read features from the CSV file
with open('test_features.csv', newline='') as csvfile:
    reader = csv.reader(csvfile)
    headers = next(reader)  # Skip header row
    for row in reader:
        features.append(row)

# Extract features and target variable (Best Opt Passes)
X = [list(map(float, row[1:-2])) for row in features]  # Features (excluding Function Name, Best Times, and Best Opt Passes)
y = [row[-1] for row in features]  # Target variable (Best Opt Passes)

# Normalize/Scale features
scaler = StandardScaler()
X_normalized = scaler.fit_transform(X)

# Use the k-NN model
prediction = loaded_model.predict(X_normalized)
print(prediction)


# Predict the best optimization sequence for a new code file (new_file_features is a list of features for the new code file)
# new_file_features = [2000, 0.2, 0.3, 0.1, 0.15, 0.1, 0.2]  # Example features for the new code file
# normalized_new_file_features = scaler.transform([new_file_features])  # Normalize the new file features

# predicted_opt_sequence = int(round(knn_model.predict(normalized_new_file_features)[0]))
# print(f"Predicted Best Opt Sequence for the new file: {predicted_opt_sequence}")
