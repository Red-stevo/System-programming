#!/bin/bash

echo "Enter the directory to create:"
read dir

echo "Creating a directory named $dir..."
mkdir $dir

if [ $? -ne 0 ]; then
    echo "Failed to create directory. Exiting."
    exit 1
fi

echo "Moving into the created directory $dir"
cd $dir

echo "Enter the text to append to the file:"
read contents

echo "Enter the file name:"
read filename

echo "$contents" > $filename

echo "Listing the contents of the text file $filename..."
cat $filename

echo "Listing the directory path to our text file"
pwd
echo "Listing files in this directory"
ls
