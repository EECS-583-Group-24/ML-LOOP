import csv
import argparse
import random
from sklearn.preprocessing import StandardScaler
from sklearn.ensemble import RandomForestRegressor, GradientBoostingRegressor, AdaBoostRegressor
from sklearn.svm import SVR
from sklearn.neighbors import KNeighborsRegressor
training_file=''
output_file=''
test_file=''
def run_models():
    # Define a list of models to try
    models = [
        ('Random Forest', RandomForestRegressor(n_estimators=100, random_state=0)),
        ('SVR Linear', SVR(kernel='linear')),
        ('SVR Poly', SVR(kernel='poly')),
        ('SVR RBF', SVR(kernel='rbf')),
        ('KNN', KNeighborsRegressor(n_neighbors=1)),
        ('Gradient Boosting', GradientBoostingRegressor(random_state=0)),
        ('AdaBoost', AdaBoostRegressor(random_state=0)),
        ('Random Number', 'Random')  # Add a "model" that generates a random number between 0 and 120
    ]

    # Initialize empty lists to store features and target variable
    features = []

    # Read features from the CSV file
    with open(training_file, newline='') as csvfile:
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
        if model_name == 'Random Number':
            # Generate a random number between 0 and 120 for each test file
            for i in range(len(testing_features)):
                predicted_opt_sequence = random.randint(0, 119)
                filename = testing_features[i][0]
                if filename not in results:
                    results[filename] = {}
                results[filename][model_name] = predicted_opt_sequence
                print(f"Predicted Best Opt Sequence for the {testing_features[i][0]} using {model_name}: {predicted_opt_sequence}")
        else:
            print(f"\nTraining {model_name}...")
            model.fit(X_normalized, y)

            testing_features = []
            with open(test_file, newline='') as csvfile:
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
                # Ensure the predicted sequence is between 0 and 119
                predicted_opt_sequence = max(0, min(predicted_opt_sequence, 119))
                
                filename = testing_features[i][0]
                if filename not in results:
                    results[filename] = {}
                results[filename][model_name] = predicted_opt_sequence
                print(f"Predicted Best Opt Sequence for the {testing_features[i][0]} using {model_name}: {predicted_opt_sequence}")

    # Write the results to a CSV file
    with open(output_file, 'w', newline='') as csvfile:
        fieldnames = ['Filename'] + [model_name for model_name, _ in models]
        writer = csv.DictWriter(csvfile, fieldnames=fieldnames)

        writer.writeheader()
        for filename, predictions in results.items():
            row = {'Filename': filename}
            row.update(predictions)
            writer.writerow(row)

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    #Setup
    parser.add_argument('--training',default='../training/training.csv',help="realtive path to training file directory")
    parser.add_argument('--output',default='../predictions.csv',help="realtive path to output file directory")
    parser.add_argument('--test',default='../test/test_features.csv',help="realtive path to test files directory")
    args = parser.parse_args()
    training_file=args.training
    output_file=args.output
    test_file=args.test
    run_models()
        