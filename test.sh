find . -type f -name "*.qml" | while read -r file; do
    echo "Running $file..."
    qmltestrunner -input ./"$file"
done