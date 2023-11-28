import os

# Directory containing test files 
test_directory = os.path.abspath(os.path.join(os.path.dirname(__file__), '../files/simple'))

# Fetch all C/C++ files in the test directory
test_files = [file for file in os.listdir(test_directory) if file.endswith(('.c', '.cpp'))]

def delete_compiled_files(input_file):
    current_dir = os.path.dirname(__file__)
    output_dir = os.path.join(current_dir, "output", os.path.splitext(input_file)[0])
    # Check if the output directory exists before attempting to delete files
    if os.path.exists(output_dir):
        compiled_files = [f for f in os.listdir(output_dir)]
        for file in compiled_files:
            file_path = os.path.join(output_dir, file)
            if os.path.exists(file_path):
                os.remove(file_path)
    else:
        print(f"Output directory {output_dir} does not exist.")

# Test the function with an example file
if __name__ == "__main__":
    for input_file in test_files:
        delete_compiled_files(input_file)
