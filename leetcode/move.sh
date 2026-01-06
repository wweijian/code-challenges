#!/bin/zsh

# Check if an argument was provided
if [[ -z "$1" ]]; then
    echo "Usage: $0 <destination_path>"
    exit 1
fi

DEST="$1"

# Create destination directories if they don't exist
mkdir -p "$DEST/cpp" "$DEST/py"

# Move .cpp files
for file in *.cpp(N); do   # (N) prevents errors if no match
    mv "$file" "$DEST/cpp/"
done

# Move .py files
for file in *.py(N); do
    mv "$file" "$DEST/py/"
done

echo "Files moved successfully."

