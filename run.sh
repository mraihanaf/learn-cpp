#!/bin/bash
folder="./bin"

if [ ! -d "$folder" ]; then
    # Jika tidak ada, maka buat folder
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
                echo "Compiling and executing $(basename "$filename")..."
                base=$(basename "$filename" .cpp)
                g++ "$filename" -o "$folder/$base" && time "$folder/$base"
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

read -p "Apakah kamu ingin menjalankan file dari folder lain? (y/n): " choice
if [[ $choice =~ ^[Yy]$ ]]; then
    exec "$0"  # Restart the script
fi
