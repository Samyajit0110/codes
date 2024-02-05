import pandas as pd

# Replace 'your_dataset.csv' with the actual path or URL of your dataset
dataset_path = 'your_dataset.csv'

# Read the dataset into a pandas DataFrame
df = pd.read_csv(dataset_path)

# Find the maximum and minimum values in the DataFrame
max_value = df.max().max()
min_value = df.min().min()

print(f"Maximum value: {max_value}")
print(f"Minimum value: {min_value}")

