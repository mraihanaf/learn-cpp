#!/bin/bash

# Check if nodemon is installed
command -v nodemon >/dev/null 2>&1 || { echo >&2 "nodemon is required but not installed. Aborting. (npm install -g nodemon)"; exit 1; }

folder="./bin"

# Check if the bin folder exists
if [ ! -d "$folder" ]; then
    # If not, create the folder
    mkdir "$folder"
    echo "Folder $folder telah dibuat."
fi

# Get a list of subfolders in ./src
subfolders=( ./src/*/ )
echo "Silakan pilih folder yang ingin dijalankan:"

select subfolder in "${subfolders[@]}"; do
    if [[ -n $subfolder ]]; then
        echo "Mengolah folder: $subfolder"
        
        # Get .cpp files in the selected subfolder
        files=( "$subfolder"*.cpp )
        
        # Check if there are any .cpp files
        if [ ${#files[@]} -eq 0 ]; then
            echo "Tidak ada file .cpp di folder ini."
            break
        fi
        
        echo "Silakan pilih file latihan yang ingin dijalankan:"
        select filename in "${files[@]}"; do
            if [[ -n $filename ]]; then
                echo "Running Nodemon on $(basename "$filename")..."
                base=$(basename "$filename" .cpp)
                # Run nodemon with g++ to compile and execute the C++ program
                nodemon --ext cpp --exec "g++ \"$filename\" -o \"$folder/$base\" && \"$folder/$base\""
                break
            else
                echo "Pilihan tidak valid."
            fi
        done
        
        break  # Exit the folder selection loop
    else
        echo "Pilihan tidak valid."
    fi
done
