import pandas as pd
import matplotlib.pyplot as plt
import os
import matplotlib.ticker as mtick

# Read the CSV file
path = os.path.join(os.getcwd(), 'results.csv')
df = pd.read_csv(path)
figsize = (10, 6)  # Define a variable for the figure size

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

# Plot with ML models as x-axis for raw times
plt.figure(figsize=figsize)  # Use the figure size variable
df.transpose().plot(kind='bar')
plt.xlabel('ML Models')
plt.ylabel('Raw Times')
plt.title('Raw Times of ML Models')
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Models_RawTimes.png', bbox_inches='tight')
plt.close()

# Calculate percent change compared to O3 times
plt.figure(figsize=figsize)  # Use the figure size variable
df_o3 = (df.div(df['O3'], axis=0) - 1) * 100
df_o3.plot(kind='bar')
plt.xlabel('Filenames')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of Files Over O3')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Files_O3.png', bbox_inches='tight')
plt.close()

# Plot with ML models as x-axis for percent change compared to O3 times
plt.figure(figsize=figsize)  # Use the figure size variable
df_o3.transpose().plot(kind='bar')
plt.xlabel('ML Models')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of ML Models Over O3')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Models_O3.png', bbox_inches='tight')
plt.close()

# Calculate percent change compared to O2 times
plt.figure(figsize=figsize)  # Use the figure size variable
df_o2 = (df.div(df['O2'], axis=0) -1) * 100
df_o2.plot(kind='bar')
plt.xlabel('Filenames')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of Files Over O2')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Files_O2.png', bbox_inches='tight')
plt.close()

# Plot with ML models as x-axis for percent change compared to O2 times
plt.figure(figsize=figsize)  # Use the figure size variable
df_o2.transpose().plot(kind='bar')
plt.xlabel('ML Models')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of ML Models Over O2')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Models_O2.png', bbox_inches='tight')
plt.close()

# Calculate percent change compared to O1 times
plt.figure(figsize=figsize)  # Use the figure size variable
df_o1 = (df.div(df['O1'], axis=0) -1) * 100
df_o1.plot(kind='bar')
plt.xlabel('Filenames')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of Files Over O1')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Files_O1.png', bbox_inches='tight')
plt.close()

# Plot with ML models as x-axis for percent change compared to O1 times
plt.figure(figsize=figsize)  # Use the figure size variable
df_o1.transpose().plot(kind='bar')
plt.xlabel('ML Models')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of ML Models Over O1')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Models_O1.png', bbox_inches='tight')
plt.close()

# Calculate percent change compared to O0 times
plt.figure(figsize=figsize)  # Use the figure size variable
df_o0 = (df.div(df['O0'], axis=0) -1) * 100
df_o0.plot(kind='bar')
plt.xlabel('Filenames')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of Files Over O0')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Files_O0.png', bbox_inches='tight')
plt.close()

# Plot with ML models as x-axis for percent change compared to O0 times
plt.figure(figsize=figsize)  # Use the figure size variable
df_o0.transpose().plot(kind='bar')
plt.xlabel('ML Models')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of ML Models Over O0')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Models_O0.png', bbox_inches='tight')
plt.close()

# Calculate percent change compared to O0, O1, O2, O3 times
df_o0_o3 = df.div(df[['O0', 'O1', 'O2', 'O3']].mean(axis=1), axis=0) - 1

# Calculate mean and median performance improvement for each model
# Remove the last 4 colums (O0, O1, O2, O3)
mean_improvement = df_o0_o3.iloc[:, :-4].mean() * 100
median_improvement = df_o0_o3.iloc[:, :-4].median() * 100

# Create a new DataFrame for the mean and median improvement
df_improvement = pd.DataFrame({'Mean': mean_improvement, 'Median': median_improvement})

# Plot with ML models as x-axis for mean and median performance improvement
plt.figure(figsize=figsize)  # Use the figure size variable
df_improvement.plot(kind='bar')
plt.xlabel('ML Models')
plt.ylabel('Performance Improvement (%)')
plt.title('Mean and Median Performance Improvement of ML Models Over O0, O1, O2, O3')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/Total_Models_Improvement.png', bbox_inches='tight')
plt.close()

# Optimization levels to compare against
optimization_levels = ['O1', 'O2', 'O3']
for opt_level in optimization_levels:
    # Calculate percent change compared to the optimization level
    df_opt = df.div(df[opt_level], axis=0) - 1

    # Replace negative values with zero
    # df_opt = df_opt.clip(lower=0)
    
    # Remove the optimization level column (O0, O1, O2, O3)
    # Calculate mean and median performance improvement for each model
    mean_improvement = df_opt.iloc[:, :-4].mean() * 100
    median_improvement = df_opt.iloc[:, :-4].median() * 100

    # Create a new DataFrame for the mean and median improvement
    df_improvement = pd.DataFrame({'Mean': mean_improvement, 'Median': median_improvement})

    # Plot with ML models as x-axis for mean and median performance improvement
    plt.figure(figsize=figsize)  # Use the figure size variable
    df_improvement.plot(kind='bar')
    plt.xlabel('ML Models')
    plt.ylabel('Performance Improvement (%)')
    plt.title(f'Mean and Median Performance Improvement of ML Models Over {opt_level}')
    plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter()) # Add percent sign to y-axis
    plt.gca().yaxis.set_minor_locator(mtick.AutoMinorLocator()) # Add minor ticks without labels
    #plt.grid(True, which='major', axis='y', linestyle='-', color='gray')
    #plt.gca().set_axisbelow(True)
    plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5)) # Move legend outside of plot
    plt.savefig(f'../figures/Total_Models_Improvement_{opt_level}.png', bbox_inches='tight')
    plt.close() # Close the figure to save memory

# Calculate percent change compared to the O3 optimization level
df_opt = df.div(df['O3'], axis=0) - 1
min_improvement = df_opt.iloc[:, :-4].min() * 100
max_improvement = df_opt.iloc[:, :-4].max() * 100
df_min_max_improvement = pd.DataFrame({'Min': min_improvement, 'Max': max_improvement})
plt.figure(figsize=figsize)  # Use the figure size variable
ax = df_min_max_improvement.plot(kind='bar')
plt.xlabel('ML Models')
plt.ylabel('Performance Improvement (%)')
plt.title('Min and Max Performance Improvement of ML Models Over O3')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.gca().yaxis.set_minor_locator(mtick.AutoMinorLocator())
plt.savefig('../figures/Min_Max_Models_Improvement_O3.png', bbox_inches='tight')
plt.close()

# Calculate mean and median performance improvement for each test file
mean_improvement = df_opt.iloc[:, :-4].mean(axis=1) * 100
median_improvement = df_opt.iloc[:, :-4].median(axis=1) * 100
df_improvement = pd.DataFrame({'Mean': mean_improvement, 'Median': median_improvement})
plt.figure(figsize=figsize)  # Use the figure size variable
ax = df_improvement.plot(kind='bar')
plt.xlabel('Test Files')
plt.ylabel('Performance Improvement (%)')
plt.title('Mean and Median Performance Improvement of Test Files Over O3')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.gca().yaxis.set_minor_locator(mtick.AutoMinorLocator())
plt.savefig('../figures/TestFiles_Improvement_O3.png', bbox_inches='tight')
plt.close()