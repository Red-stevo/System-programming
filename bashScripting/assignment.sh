#!/bin/bash
# This script creates a directory, moves into it, and writes user-provided text to a file within that directory.

# Prompt the user to enter the name of the directory to create from the keyboard
echo "Enter the directory to create:"
read dir

# Inform the user that the directory is being created
echo "Creating a directory named $dir..."
# Create the directory with the specified name
mkdir $dir

# Check if the previous command (mkdir) was successful
if [ $? -ne 0 ]; then
    # If the directory creation failed, print an error message and exit the script with status 1
    echo "Failed to create directory. Exiting."
    exit 1
fi

# Inform the user that the script is moving into the newly created directory
echo "Moving into the created directory $dir"
# Change the current directory to the newly created directory
cd $dir

# Prompt the user to enter the text that will be written to a file
echo "Enter the text to append to the file:"
read contents

# Prompt the user to enter the name of the file to create
echo "Enter the file name:"
read filename

# Write the user-provided text to the specified file (creating the file if it doesn't exist)
echo "$contents" > $filename

# Inform the user that the contents of the file are being listed
echo "Listing the contents of the text file $filename..."
# Display the contents of the file
cat $filename
