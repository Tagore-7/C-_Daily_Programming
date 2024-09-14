#!/bin/bash
# Loop through all files in the directory except README.md and .sh files
for file in *; do
    # Check if it's not a directory and doesn't end with .cpp or .sh and isn't README.md
    if [[ -f $file && $file != *.cpp && $file != *.sh && $file != "README.md" ]]; then
        mv "$file" "$file.cpp"
    fi
done

