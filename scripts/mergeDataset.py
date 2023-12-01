import pandas as pd

df1 = pd.read_csv('final_features.csv')
df2 = pd.read_csv('best_optimization_results.csv')

mergeddf = pd.merge(df1, df2, on='filename')

mergeddf.to_csv('training.csv', index=False)