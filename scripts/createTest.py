import csv

# Merge All Datasets (Final_features.csv, final_loop_features.csv, best_optimization_pass.csv)
with open('./temp/final_test_features.csv', 'r') as f:
    reader = csv.reader(f)
    df1 = list(reader)

with open('./temp/final_test_loop_features.csv', 'r') as f:
    reader = csv.reader(f)
    df2 = list(reader)

# Merge the data based on the 'filename' column
mergeddf = [df1[0] + df2[0][1:]]  # Start with the headers
for row1 in df1[1:]:
    for row2 in df2[1:]:
            if row1[0] == row2[0]:  # If the 'filename' values match
                mergeddf.append(row1 + row2[1:])  # Merge the rows

# Write the merged data to a new CSV file
with open('../mlModel/test.csv', 'w', newline='') as f:
    writer = csv.writer(f)
    writer.writerows(mergeddf)