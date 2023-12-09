import csv
from sklearn.preprocessing import StandardScaler
from sklearn.ensemble import RandomForestRegressor, GradientBoostingRegressor, AdaBoostRegressor
from sklearn.svm import SVR
from sklearn.neighbors import KNeighborsRegressor

# Define a list of models to try
models = [
    ('Random Forest', RandomForestRegressor(n_estimators=100, random_state=0)),
    ('SVR Linear', SVR(kernel='linear')),
    ('SVR Poly', SVR(kernel='poly')),
    ('SVR RBF', SVR(kernel='rbf')),
    ('KNN', KNeighborsRegressor(n_neighbors=1)),
    ('Gradient Boosting', GradientBoostingRegressor(random_state=0)),
    ('AdaBoost', AdaBoostRegressor(random_state=0))
]

# Initialize empty lists to store features and target variable
features = []

# Read features from the CSV file
with open('training.csv', newline='') as csvfile:
    reader = csv.reader(csvfile)
    headers = next(reader)  # Skip header row
    for row in reader:
        features.append(row)

# Extract features and target variable (Best Opt Passes)
X = [list(map(float, row[1:-2])) for row in features]  # Features (excluding Function Name, Best Times, and Best Opt Passes)
y = [int(row[-1]) for row in features]  # Target variable (Best Opt Passes)

# Normalize/Scale features
scaler = StandardScaler()
X_normalized = scaler.fit_transform(X)

# Prepare the results dictionary
results = {}

# Train each model and make predictions
for model_name, model in models:
    print(f"\nTraining {model_name}...")
    model.fit(X_normalized, y)

    testing_features = []
    with open('test.csv', newline='') as csvfile:
        reader = csv.reader(csvfile)
        headers = next(reader)  # Skip header row
        for row in reader:
            testing_features.append(row)

    # Extract features and target variable (Best Opt Passes)
    X = [list(map(float, row[1:])) for row in testing_features]  # Features

    # Predict the best optimization sequence for a new code file
    for i in range(len(testing_features)):
        new_file_features = X[i]  # Example features for the new code file
        normalized_new_file_features = scaler.transform([new_file_features])  # Normalize the new file features

        predicted_opt_sequence = int(round(model.predict(normalized_new_file_features)[0]))
        filename = testing_features[i][0]
        if filename not in results:
            results[filename] = {}
        results[filename][model_name] = predicted_opt_sequence
        print(f"Predicted Best Opt Sequence for the {testing_features[i][0]} using {model_name}: {predicted_opt_sequence}")

# Write the results to a CSV file
with open('predictions.csv', 'w', newline='') as csvfile:
    fieldnames = ['Filename'] + [model_name for model_name, _ in models]
    writer = csv.DictWriter(csvfile, fieldnames=fieldnames)

    writer.writeheader()
    for filename, predictions in results.items():
        row = {'Filename': filename}
        row.update(predictions)
        writer.writerow(row)