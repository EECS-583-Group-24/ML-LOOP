import json
import statistics
y = json.loads('temp/best_optimization_results.csv')
for pin,key in y.items():
    good_count=0
    median=statistics.median(key)
    for run in key :
        if(run>=0):
            good_count+good_count+1
    print(f'Run {pin} has {good_count} good counts with a median runtime of {median}')

