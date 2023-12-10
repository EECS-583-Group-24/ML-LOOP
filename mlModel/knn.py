import csv
from sklearn.preprocessing import StandardScaler
from sklearn.neighbors import KNeighborsRegressor



# Initialize empty lists to store features and target variable
features = [] # [Function Name, Total Dynamic Operations, Integer ALU Ratio, Floating-point ALU Ratio, Memory Ratio, Biased Branch Ratio, Unbiased Branch Ratio, Other Operations Ratio, Best Opt Passes]

# Read features from the CSV file
with open('training.csv', newline='') as csvfile:
    reader = csv.reader(csvfile)
    headers = next(reader)  # Skip header row
    for row in reader:
        features.append(row)

# Extract features and target variable (Best Opt Passes)
X = [list(map(float, row[1:-2])) for row in features]  # Features (excluding Function Name, Best Times, and Best Opt Passes)
y = [int(row[-1]) for row in features]  # Target variable (Best Opt Passes)

# print(len(X[0]))

# Normalize/Scale features
scaler = StandardScaler()
X_normalized = scaler.fit_transform(X)

# Initialize k-NN model
k = 1  # Number of neighbors
knn_model = KNeighborsRegressor(n_neighbors=k, metric='cosine')  # Use 'euclidean' distance by default

# Train the k-NN model
knn_model.fit(X_normalized, y)


testing_features = []
with open('test.csv', newline='') as csvfile:
    reader = csv.reader(csvfile)
    headers = next(reader)  # Skip header row
    for row in reader:
        testing_features.append(row)

# Extract features and target variable (Best Opt Passes)
X = [list(map(float, row[1:])) for row in testing_features]  # Features
# Predict the best optimization sequence for a new code file (new_file_features is a list of features for the new code file)
for i in range(len(testing_features)):
    new_file_features = X[i]  # Example features for the new code file
    normalized_new_file_features = scaler.transform([new_file_features])  # Normalize the new file features

    predicted_opt_sequence = int(round(knn_model.predict(normalized_new_file_features)[0]))
    print(f"Predicted Best Opt Sequence for the {testing_features[i][0]}: {predicted_opt_sequence}")


