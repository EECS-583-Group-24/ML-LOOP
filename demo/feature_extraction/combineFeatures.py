import csv
import argparse
import os

def script(directory,type,optimal,output):
    # Merge All Datasets (Final_features.csv, final_loop_features.csv, best_optimization_pass.csv)
    with open(os.path.join(directory, f'{type}_final_features.csv'), 'r') as f:
        reader = csv.reader(f)
        df1 = list(reader)
    with open(os.path.join(directory, f'{type}_final_loop_features.csv'), 'r') as f:
        reader = csv.reader(f)
        df2 = list(reader)
    if optimal!=None:
        with open(os.path.join(directory,optimal), 'r') as f:
            reader = csv.reader(f)
            df3 = list(reader)
        # Merge the data based on the 'filename' column
        mergeddf = [df1[0] + df2[0][1:] + df3[0][1:]]  # Start with the headers
        for row1 in df1[1:]:
            for row2 in df2[1:]:
                for row3 in df3[1:]:
                    if row1[0] == row2[0] and row2[0] == row3[0] and row1[0] == row3[0]:  # If the 'filename' values match
                        mergeddf.append(row1 + row2[1:] + row3[1:])  # Merge the rows
    else:
        # Merge the data based on the 'filename' column
        mergeddf = [df1[0] + df2[0][1:]]  # Start with the headers
        for row1 in df1[1:]:
            for row2 in df2[1:]:
                    if row1[0] == row2[0]:  # If the 'filename' values match
                        mergeddf.append(row1 + row2[1:])  # Merge the rows

    # Write the merged data to a new CSV file
    with open(output, 'w', newline='') as f:
        writer = csv.writer(f)
        writer.writerows(mergeddf)


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument('type', help='test, training, etc.')
    parser.add_argument('--dir',required=False, default='./temp/',help='directory')
    parser.add_argument('output',help='target directory')
    parser.add_argument('--training_opt',required=False, help='optimization results for training file path')
   
    args = parser.parse_args()
    script(args.dir,args.type,args.training_opt,args.output)