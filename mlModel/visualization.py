import pandas as pd
import matplotlib.pyplot as plt
import os
import matplotlib.ticker as mtick

# Read the CSV file
path = os.path.join(os.getcwd(), 'results.csv')
df = pd.read_csv(path)

# Set the index to 'Filename' for easier plotting
df.set_index('Filename', inplace=True)

# Plot with filenames as x-axis for raw times
df.plot(kind='bar')
plt.xlabel('Filenames')
plt.ylabel('Raw Times')
plt.title('Raw Times of Files')
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Files_RawTimes.png', bbox_inches='tight')

# Plot with ML models as x-axis for raw times
df.transpose().plot(kind='bar')
plt.xlabel('ML Models')
plt.ylabel('Raw Times')
plt.title('Raw Times of ML Models')
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Models_RawTimes.png', bbox_inches='tight')

# Calculate percent change compared to O3 times
df_o3 = (df.div(df['O3'], axis=0) - 1) * 100
df_o3.plot(kind='bar')
plt.xlabel('Filenames')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of Files Over O3')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Files_O3.png', bbox_inches='tight')

# Plot with ML models as x-axis for percent change compared to O3 times
df_o3.transpose().plot(kind='bar')
plt.xlabel('ML Models')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of ML Models Over O3')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Models_O3.png', bbox_inches='tight')

# Calculate percent change compared to O2 times
df_o2 = (df.div(df['O2'], axis=0) -1) * 100
df_o2.plot(kind='bar')
plt.xlabel('Filenames')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of Files Over O2')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Files_O2.png', bbox_inches='tight')

# Plot with ML models as x-axis for percent change compared to O2 times
df_o2.transpose().plot(kind='bar')
plt.xlabel('ML Models')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of ML Models Over O2')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Models_O2.png', bbox_inches='tight')

# Calculate percent change compared to O1 times
df_o1 = (df.div(df['O1'], axis=0) -1) * 100
df_o1.plot(kind='bar')
plt.xlabel('Filenames')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of Files Over O1')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Files_O1.png', bbox_inches='tight')

# Plot with ML models as x-axis for percent change compared to O1 times
df_o1.transpose().plot(kind='bar')
plt.xlabel('ML Models')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of ML Models Over O1')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Models_O1.png', bbox_inches='tight')

# Calculate percent change compared to O0 times
df_o0 = (df.div(df['O0'], axis=0) -1) * 100
df_o0.plot(kind='bar')
plt.xlabel('Filenames')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of Files Over O0')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Files_O0.png', bbox_inches='tight')

# Plot with ML models as x-axis for percent change compared to O0 times
df_o0.transpose().plot(kind='bar')
plt.xlabel('ML Models')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of ML Models Over O0')
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))
plt.savefig('../figures/BarGraph_Models_O0.png', bbox_inches='tight')