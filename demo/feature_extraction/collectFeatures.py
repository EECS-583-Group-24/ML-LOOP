import os
import subprocess
import csv
import argparse
def script(type,directory,output_directory):
    # Set the working directory
    directory_path = os.path.join(os.path.dirname(__file__), directory)
    output_directory_path = os.path.join(os.path.dirname(__file__), output_directory)
    csv_file_path = os.path.join(directory_path, 'features.csv')
    loop_csv_file_path = os.path.join(directory_path, 'loop_features.csv')
    final_csv_file_path = os.path.join(output_directory_path, f'{type}_final_features.csv')
    final_loop_csv_file_path = os.path.join(output_directory_path, f'{type}_final_loop_features.csv')

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
            file_data[current_file] = [0] * 30
        else:
            # Split the line into individual floats
            integers = [float(num) for num in line.strip().split(',') if num != '']
            if integers:
                # If data exists, add it to the corresponding file entry in the dictionary
                if len(file_data[current_file]) == 0:
                    file_data[current_file] = integers
                else:
                    # Add corresponding integers together
                    for i in range(len(integers)):
                        # Store old total inst for average calc
                        if i == 0:
                            oldTotalInstBB = file_data[current_file][1] * file_data[current_file][0]
                        # Store old loop count for average calc
                        if i == 21:
                            oldLoopBB = file_data[current_file][21] * file_data[current_file][22]
                            oldLoopIntALU = file_data[current_file][21] * file_data[current_file][24]
                            oldLoopFpALU = file_data[current_file][21] * file_data[current_file][25]
                            oldLoopMem = file_data[current_file][21] * file_data[current_file][26]
                            oldLoopBranch = file_data[current_file][21] * file_data[current_file][27]
                            oldLoopOther = file_data[current_file][21] * file_data[current_file][28]

                        if i == 1: # AverageInstPerBB
                            newTotalInstPerBB = oldTotalInstBB + (integers[1] * integers[0])
                            file_data[current_file][1] = newTotalInstPerBB / file_data[current_file][0]
                        elif i == 22:
                            newLoopBB = oldLoopBB + (integers[21] * integers[22])
                            if newLoopBB == 0:
                                file_data[current_file][22] = 0
                            else:
                                file_data[current_file][22] = newLoopBB / file_data[current_file][21]
                                
                        elif i == 24:
                            newLoopIntALU = oldLoopIntALU + (integers[21] * integers[24])
                            if newLoopIntALU == 0:
                                file_data[current_file][24] = 0
                            else:
                                file_data[current_file][24] = newLoopIntALU / file_data[current_file][21]
                        elif i == 25:
                            newLoopFpALU = oldLoopFpALU + (integers[21] * integers[25])
                            if newLoopFpALU == 0:
                                file_data[current_file][25] = 0
                            else:
                                file_data[current_file][25] = newLoopFpALU / file_data[current_file][21]
                        elif i == 26:
                            newLoopMem = oldLoopMem + (integers[21] * integers[26])
                            if newLoopMem == 0:
                                file_data[current_file][26] = 0
                            else:
                                file_data[current_file][26] = newLoopMem / file_data[current_file][21]
                        elif i == 27:
                            newLoopBranch = oldLoopBranch + (integers[21] * integers[27])
                            if newLoopBranch == 0:
                                file_data[current_file][27] = 0
                            else:
                                file_data[current_file][27] = newLoopBranch / file_data[current_file][21]
                        elif i == 28:
                            newLoopOther = oldLoopOther + (integers[21] * integers[28])
                            if newLoopOther == 0:
                                file_data[current_file][28] = 0
                            else:
                                file_data[current_file][28] = newLoopOther / file_data[current_file][21]
                        else:
                            file_data[current_file][i] += integers[i]    


    # Write aggregated data to the final_features.csv file
    with open(final_csv_file_path, 'w') as output_file:
        output_file.write("filename,totalBBs,averageInstPerBB,totalDynInstCount,dynIntALUCount,dynFpALUCount,dynMemCount,dynBranchCount,dynOtherCount,totalStaticInstCount,staticIntALUCont,staticFpALUCount,staticMemCount,staticBranchCount,staticOtherCount,dynStatIntALU,dynStatFpALU,dynStatMem,dynStatBranch,dynStatOther,biasBranch,unbiasBranch,loopCount,averageBBPerLoop,loopTotalStaticInstCount,averageLoopIntALU,averageLoopFpALU,averageLoopMem,averageLoopBranch,averageLoopOther,recursiveCount\n")
        for file, data in file_data.items():
            output_file.write(f"{file},{','.join(map(str, data))}\n")

    script_path = os.path.join(directory_path, 'loop.sh')
    os.chdir(directory_path)
    subprocess.run(script_path, shell=True)
    os.chdir(os.path.dirname(__file__))

    # Open the features.csv file for reading
    with open(loop_csv_file_path, 'r') as file:
        lines = file.readlines()

    # Create a dictionary to store data for each file
    file_data = {}
    current_file = ''

    # Process each line in the file
    for line in lines:
        if line.startswith('Output for'):
            # Extract the filename
            current_file = line.split('Output for ')[1].strip().rstrip(':')
            file_data[current_file] = [0] * 5
        else:
            # Split the line into individual floats
            integers = [float(num) for num in line.strip().split(',') if num != '']
            if integers:
                # If data exists, add it to the corresponding file entry in the dictionary
                if len(file_data[current_file]) == 0:
                    file_data[current_file] = integers
                else:
                    # Add corresponding integers together
                    for i in range(len(integers)):
                        file_data[current_file][i] = integers[i]

    # Write aggregated data to the final_features.csv file
    with open(final_loop_csv_file_path, 'w') as output_file:
        output_file.write("filename,numNestedLoops,numOuterNestedLoops,averageLoopDepth,averageOuterLoopDef,deepestDepth\n")
        for file, data in file_data.items():
            output_file.write(f"{file},{','.join(map(str, data))}\n")
    os.remove(csv_file_path)
    os.remove(loop_csv_file_path)

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument('type',help="training/test")
    parser.add_argument('input_directory', help='target directory')
    parser.add_argument('--output_directory',required=False,default='./temp/', help='output directory')
    args = parser.parse_args()
    os.makedirs(args.output_directory,exist_ok=True)  
    script(args.type,args.input_directory,args.output_directory)