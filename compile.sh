#!/bin/bash

# Check if the user provided a source file
if [ -z "$1" ]; then
    echo "Usage: ./compile.sh <source_file.cpp>"
    exit 1
fi

# Extract the filename without extension
filename=$(basename -- "$1")
filename="${filename%.*}"

# Compile the provided source file with the arrayFunctions library
g++ "$1" -IarrayLibrary -LarrayLibrary -lmyArrayLib -o "$filename"

# Run the compiled program
./"$filename"
