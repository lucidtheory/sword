#!/bin/bash

# List of books in the Bible in order
books=(
    "Genesis" "Exodus" "Leviticus" "Numbers" "Deuteronomy"
    "Joshua" "Judges" "Ruth" "I Samuel" "II Samuel"
    "I Kings" "II Kings" "I Chronicles" "II Chronicles" "Ezra"
    "Nehemiah" "Esther" "Job" "Psalms" "Proverbs"
    "Ecclesiastes" "Song of Solomon" "Isaiah" "Jeremiah" "Lamentations"
    "Ezekiel" "Daniel" "Hosea" "Joel" "Amos"
    "Obadiah" "Jonah" "Micah" "Nahum" "Habakkuk"
    "Zephaniah" "Haggai" "Zechariah" "Malachi" "Matthew"
    "Mark" "Luke" "John" "Acts" "Romans"
    "I Corinthians" "II Corinthians" "Galatians" "Ephesians" "Philippians"
    "Colossians" "I Thessalonians" "II Thessalonians" "I Timothy" "II Timothy"
    "Titus" "Philemon" "Hebrews" "James" "I Peter"
    "II Peter" "I John" "II John" "III John" "Jude"
    "Revelation"
)

# Iterate over the array and rename files
for i in "${!books[@]}"; do
    book=${books[$i]}
    file="${book}.csv"
    new_name=$(printf "%d. %s.csv" $((i+1)) "$book")
    if [[ -f "$file" ]]; then
        mv "$file" "$new_name"
    else
        echo "File $file does not exist."
    fi
done
