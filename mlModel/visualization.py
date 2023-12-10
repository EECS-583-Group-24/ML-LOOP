import pandas as pd
import matplotlib.pyplot as plt
import os
import matplotlib.ticker as mtick

# Read the CSV file
path = os.path.join(os.getcwd(), 'results.csv')
df = pd.read_csv(path)

# Set the index to 'Filename' for easier plotting
df.set_index('Filename', inplace=True)

# Plot with filenames as x-axis
df = -((df - 1) * 100)
df.plot(kind='bar')

# Add labels and title
plt.xlabel('Filenames')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of Files Over O3')

# Show the legend outside the plot area
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))

# Format y-axis as percentage
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())

# Save the plot to an image file
plt.savefig('BarGraph_Files.png', bbox_inches='tight')

# Plot with models as x-axis
df.transpose().plot(kind='bar')

# Add labels and title
plt.xlabel('Models')
plt.ylabel('Performance Improvement (%)')
plt.title('Performance Improvement of Models Over O3')

# Show the legend outside the plot area
plt.legend(loc='center left', bbox_to_anchor=(1.0, 0.5))

# Format y-axis as percentage
plt.gca().yaxis.set_major_formatter(mtick.PercentFormatter())

# Save the plot to an image file
plt.savefig('BarGraph_Models.png', bbox_inches='tight')