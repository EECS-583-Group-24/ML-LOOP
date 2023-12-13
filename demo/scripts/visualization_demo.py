import pandas as pd
import matplotlib.pyplot as plt
import os
import matplotlib.ticker as mtick
import subprocess
import glob

# Read the CSV file
path = os.path.join(os.getcwd(), 'results.csv')
df = pd.read_csv(path)
figsize = (10, 6)  # Define a variable for the figure size
include_opts = True  # Include optimization levels in the plots

# Set the index to 'Filename' for easier plotting
df.set_index('Filename', inplace=True)

# Plot with filenames as x-axis for raw times
plt.figure(figsize=figsize)  # Use the figure size variable
df.plot(kind='bar')
plt.xlabel('Filenames')
plt.ylabel('Raw Times')
plt.title('Raw Times of Files')
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Files_RawTimes.png', bbox_inches='tight')
plt.close()
with open('../figures/BarGraph_Files_RawTimes.md', 'w') as md_file:
    md_file.write(df.to_markdown())

# Calculate percent change compared to O0, O1, O2, O3 times
df_o0_o3 = (df.div(df[['O0', 'O1', 'O2', 'O3']].mean(axis=1), axis=0) - 1) * -1

# Calculate mean and median performance improvement for each model
# Remove the last 4 colums (O0, O1, O2, O3)
if include_opts:
    mean_improvement = df_o0_o3.iloc[:, :].mean() * 100
    median_improvement = df_o0_o3.iloc[:, :].median() * 100
else:
    mean_improvement = df_o0_o3.iloc[:, :-4].mean() * 100
    median_improvement = df_o0_o3.iloc[:, :-4].median() * 100

# Create a new DataFrame for the mean and median improvement
df_improvement = pd.DataFrame({'Mean': mean_improvement, 'Median': median_improvement})

# Optimization levels to compare against
optimization_levels = ['O3']
for opt_level in optimization_levels:
    # Calculate percent change compared to the optimization level
    df_opt = (df.div(df[opt_level], axis=0) - 1) * -1

    # Calculate percent change compared to O3 times
    plt.figure(figsize=figsize)  # Use the figure size variable
    df_o3 = df_opt * 100
    df_o3.plot(kind='bar')
    plt.xlabel('Filenames')
    plt.ylabel('Performance Improvement (%)')
    plt.title(f'Performance Improvement of Files Over {opt_level}')
    plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
    plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
    plt.savefig(f'../figures/BarGraph_Files_{opt_level}.png', bbox_inches='tight')
    plt.close()
    with open(f'../figures/BarGraph_Files_{opt_level}.md', 'w') as md_file:
        md_file.write(df_o3.to_markdown())

    
