import os
import re

# Define the path to the directory containing the configuration files
config_dir = './'

# Define the list of valid book names
valid_books = {
    "Genesis", "Exodus", "Leviticus", "Numbers", "Deuteronomy",
    "Joshua", "Judges", "Ruth", "I Samuel", "II Samuel",
    "I Kings", "II Kings", "I Chronicles", "II Chronicles",
    "Ezra", "Nehemiah", "Esther", "Job", "Psalms",
    "Proverbs", "Ecclesiastes", "Song of Solomon", "Isaiah",
    "Jeremiah", "Lamentations", "Ezekiel", "Daniel", "Hosea",
    "Joel", "Amos", "Obadiah", "Jonah", "Micah", "Nahum",
    "Habakkuk", "Zephaniah", "Haggai", "Zechariah", "Malachi",
    "Matthew", "Mark", "Luke", "John", "Acts", "Romans",
    "I Corinthians", "II Corinthians", "Galatians", "Ephesians",
    "Philippians", "Colossians", "I Thessalonians", "II Thessalonians",
    "I Timothy", "II Timothy", "Titus", "Philemon", "Hebrews",
    "James", "I Peter", "II Peter", "I John", "II John",
    "III John", "Jude", "Revelation of John"
}

# Initialize a list to hold the book names data
book_names_data = []

# Regular expression pattern to match book names in the config files
book_name_pattern = re.compile(r'([^=]+)=([^\n]+)')

# Iterate over all files in the config directory
for filename in os.listdir(config_dir):
    if filename.endswith('-utf8.conf'):
        # Extract the language code from the filename
        lang_code = filename.split('-')[0]
        
        # Initialize a list to hold the book names for the current language
        book_names = []
        inside_text_section = False
        
        # Open and read the current config file
        with open(os.path.join(config_dir, filename), 'r', encoding='utf-8', errors='ignore') as file:
            lines = file.readlines()
            for line in lines:
                line = line.strip()
                
                # Check if we've reached the [Text] section
                if line == '[Text]':
                    inside_text_section = True
                    continue
                
                # If we're in the [Text] section, process the book names
                if inside_text_section:
                    if line.startswith('['):  # End of [Text] section
                        break
                    
                    match = book_name_pattern.match(line)
                    if match:
                        # Extract and validate the book name
                        book_name = match.group(1).strip()
                        book_translation = match.group(2).strip()
                        
                        if book_name in valid_books:
                            book_names.append(book_translation)
        
        # Append the language code and book names to the book_names_data list
        if book_names:
            book_names_data.append((lang_code, book_names))

# Generate the C++ code
cpp_code = 'static BookNames bookNamesData[] = {\n'
for lang_code, book_names in book_names_data:
    cpp_code += f'    {{"{lang_code}", {{"'
    cpp_code += '", "'.join(book_names)
    cpp_code += '"}},\n'
cpp_code += '};'

# Print the generated C++ code
print(cpp_code)
