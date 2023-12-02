import csv
import pickle
from sklearn.preprocessing import StandardScaler
from sklearn.neighbors import KNeighborsRegressor
import os
import subprocess



loaded_model = pickle.load(open('knnpickle_file', 'rb'))


# Initialize empty lists to store features and target variable
features = [] # [Function Name, Total Dynamic Operations, Integer ALU Ratio, Floating-point ALU Ratio, Memory Ratio, Biased Branch Ratio, Unbiased Branch Ratio, Other Operations Ratio, Best Opt Passes]

# Read features from the CSV file
with open('test_features.csv', newline='') as csvfile:
    reader = csv.reader(csvfile)
    headers = next(reader)  # Skip header row
    for row in reader:
        features.append(row)

# Extract features and target variable (Best Opt Passes)
X = [list(map(float, row[1:])) for row in features]  # Features (excluding Function Name, Best Times, and Best Opt Passes)

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
