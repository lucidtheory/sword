#include <stdio.h>
#include "booknames.h" // Include your header file

#define NUM_LANGUAGES 34  // Number of languages

// Artist notes and Table of contents per language
const char* artist_notes[NUM_LANGUAGES] = {
    "Shënim nga Artisti", "အနုပညာရှင်ထံမှ မှတ်ချက်", "Pahinumdom gikan sa Artist",
    "藝術家的註釋", "艺术家的注释", "Napomena od umjetnika", "Notat fra kunstneren",
    "Taiteilijan huomautus", "Note de l'artiste", "Anmerkung des Künstlers", "Nòt Atis la",
    "Megjegyzés a művésztől", "Nota dell'artista", "アーティストからのメモ", "아티스트의 메모",
    "Mākslinieka piezīme", "കലാകാരൻ്റെ കുറിപ്പ്", "Fanamarihana avy amin'ny Mpanakanto",
    "Opmerking van de kunstenaar", "Opmerking van de kunstenaar", "Merknad fra kunstneren",
    "Notatka od Artysty", "Примечание от художника", "Nota del artista", "Белешка од уметника",
    "Белешка од уметника", "Anteckning från konstnären", "Paalala mula sa Artist", "Примітка від художника",
    "Lưu ý từ nghệ sĩ", "ملاحظة من الفنان", "הערה מהאמן", "یادداشت از هنرمند", "Nota do Artista"
};

const char* table_of_contents[NUM_LANGUAGES] = {
    "Tabela e Përmbajtjes", "မာတိကာ", "Talaan sa mga Sulod", "目錄", "目录", "Sadržaj",
    "Indhold", "Sisällys", "Table des matières", "Inhalts", "Tab la", "Tartalom", "Sommario",
    "目次", "목차", "Satura rādītājs", "ഉള്ളടക്ക പട്ടിക", "Fizahan-takelaka", "Inhoude",
    "Innhald", "Innhold", "Spis treści", "Оглавление", "Tabla de contenido", "Садржај",
    "Садржај", "Innehåll", "Talaan ng mga Nilalaman", "Зміст", "Mục lục", "جدول المحتويات",
    "תוֹכֶן הָעִניָנִים", "فهرست مطالب", "Índice"
};

// Function to write the CSV file
void writeCSV(const char* filename) {
    FILE* csvFile = fopen(filename, "w");
    if (!csvFile) {
        perror("Failed to open file");
        return;
    }

    // Check if bookNamesData is populated correctly
    if (sizeof(bookNamesData) / sizeof(bookNamesData[0]) != NUM_LANGUAGES) {
        fprintf(stderr, "Error: BookNames data size mismatch.\n");
        fclose(csvFile);
        return;
    }

    // Write numeric header row
    for (int j = 0; j < NUM_LANGUAGES; ++j) {
        fprintf(csvFile, "Language %d,", j + 1);
    }
    fprintf(csvFile, "\n");

    // Write the artist notes row
    for (int j = 0; j < NUM_LANGUAGES; ++j) {
        fprintf(csvFile, "%s,", artist_notes[j]);
    }
    fprintf(csvFile, "\n");

    // Write the table of contents row
    for (int j = 0; j < NUM_LANGUAGES; ++j) {
        fprintf(csvFile, "%s,", table_of_contents[j]);
    }
    fprintf(csvFile, "\n");

    // Write book names for each language
    for (int i = 0; i < 66; ++i) {
        const char* bookNames[NUM_LANGUAGES];
        // Initialize bookNames array
        for (int j = 0; j < NUM_LANGUAGES; ++j) {
            const BookNames* bookNamesEntry = &bookNamesData[j];
            if (bookNamesEntry == NULL) {
                fprintf(stderr, "Error: bookNamesEntry is NULL.\n");
                fclose(csvFile);
                return;
            }

            switch (i) {
                case 0: bookNames[j] = bookNamesEntry->books.Genesis; break;
                case 1: bookNames[j] = bookNamesEntry->books.Exodus; break;
                case 2: bookNames[j] = bookNamesEntry->books.Leviticus; break;
                case 3: bookNames[j] = bookNamesEntry->books.Numbers; break;
                case 4: bookNames[j] = bookNamesEntry->books.Deuteronomy; break;
                case 5: bookNames[j] = bookNamesEntry->books.Joshua; break;
                case 6: bookNames[j] = bookNamesEntry->books.Judges; break;
                case 7: bookNames[j] = bookNamesEntry->books.Ruth; break;
                case 8: bookNames[j] = bookNamesEntry->books.Samuel1; break;
                case 9: bookNames[j] = bookNamesEntry->books.Samuel2; break;
                case 10: bookNames[j] = bookNamesEntry->books.Kings1; break;
                case 11: bookNames[j] = bookNamesEntry->books.Kings2; break;
                case 12: bookNames[j] = bookNamesEntry->books.Chronicles1; break;
                case 13: bookNames[j] = bookNamesEntry->books.Chronicles2; break;
                case 14: bookNames[j] = bookNamesEntry->books.Ezra; break;
                case 15: bookNames[j] = bookNamesEntry->books.Nehemiah; break;
                case 16: bookNames[j] = bookNamesEntry->books.Esther; break;
                case 17: bookNames[j] = bookNamesEntry->books.Job; break;
                case 18: bookNames[j] = bookNamesEntry->books.Psalms; break;
                case 19: bookNames[j] = bookNamesEntry->books.Proverbs; break;
                case 20: bookNames[j] = bookNamesEntry->books.Ecclesiastes; break;
                case 21: bookNames[j] = bookNamesEntry->books.SongOfSolomon; break;
                case 22: bookNames[j] = bookNamesEntry->books.Isaiah; break;
                case 23: bookNames[j] = bookNamesEntry->books.Jeremiah; break;
                case 24: bookNames[j] = bookNamesEntry->books.Lamentations; break;
                case 25: bookNames[j] = bookNamesEntry->books.Ezekiel; break;
                case 26: bookNames[j] = bookNamesEntry->books.Daniel; break;
                case 27: bookNames[j] = bookNamesEntry->books.Hosea; break;
                case 28: bookNames[j] = bookNamesEntry->books.Joel; break;
                case 29: bookNames[j] = bookNamesEntry->books.Amos; break;
                case 30: bookNames[j] = bookNamesEntry->books.Obadiah; break;
                case 31: bookNames[j] = bookNamesEntry->books.Jonah; break;
                case 32: bookNames[j] = bookNamesEntry->books.Micah; break;
                case 33: bookNames[j] = bookNamesEntry->books.Nahum; break;
                case 34: bookNames[j] = bookNamesEntry->books.Habakkuk; break;
                case 35: bookNames[j] = bookNamesEntry->books.Zephaniah; break;
                case 36: bookNames[j] = bookNamesEntry->books.Haggai; break;
                case 37: bookNames[j] = bookNamesEntry->books.Zechariah; break;
                case 38: bookNames[j] = bookNamesEntry->books.Malachi; break;
                case 39: bookNames[j] = bookNamesEntry->books.Matthew; break;
                case 40: bookNames[j] = bookNamesEntry->books.Mark; break;
                case 41: bookNames[j] = bookNamesEntry->books.Luke; break;
                case 42: bookNames[j] = bookNamesEntry->books.John; break;
                case 43: bookNames[j] = bookNamesEntry->books.Acts; break;
                case 44: bookNames[j] = bookNamesEntry->books.Romans; break;
                case 45: bookNames[j] = bookNamesEntry->books.Corinthians1; break;
                case 46: bookNames[j] = bookNamesEntry->books.Corinthians2; break;
                case 47: bookNames[j] = bookNamesEntry->books.Galatians; break;
                case 48: bookNames[j] = bookNamesEntry->books.Ephesians; break;
                case 49: bookNames[j] = bookNamesEntry->books.Philippians; break;
                case 50: bookNames[j] = bookNamesEntry->books.Colossians; break;
                case 51: bookNames[j] = bookNamesEntry->books.Thessalonians1; break;
                case 52: bookNames[j] = bookNamesEntry->books.Thessalonians2; break;
                case 53: bookNames[j] = bookNamesEntry->books.Timothy1; break;
                case 54: bookNames[j] = bookNamesEntry->books.Timothy2; break;
                case 55: bookNames[j] = bookNamesEntry->books.Titus; break;
                case 56: bookNames[j] = bookNamesEntry->books.Philemon; break;
                case 57: bookNames[j] = bookNamesEntry->books.Hebrews; break;
                case 58: bookNames[j] = bookNamesEntry->books.James; break;
                case 59: bookNames[j] = bookNamesEntry->books.Peter1; break;
                case 60: bookNames[j] = bookNamesEntry->books.Peter2; break;
                case 61: bookNames[j] = bookNamesEntry->books.John1; break;
                case 62: bookNames[j] = bookNamesEntry->books.John2; break;
                case 63: bookNames[j] = bookNamesEntry->books.John3; break;
                case 64: bookNames[j] = bookNamesEntry->books.Jude; break;
                case 65: bookNames[j] = bookNamesEntry->books.Revelation; break;
                default: bookNames[j] = ""; break;
            }
        }

        // Write book names
        for (int j = 0; j < NUM_LANGUAGES; ++j) {
            fprintf(csvFile, "%s,", bookNames[j] ? bookNames[j] : ""); // Book Name
        }
        fprintf(csvFile, "\n");
    }

    fclose(csvFile);
}


int main() {
    writeCSV("books.csv");
    return 0;
}
// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <vector>
// #include <string>
// #include <map>
// #include <swmgr.h>
// #include <swmodule.h>
// #include <swfilter.h>
// #include <versekey.h>
// #include <localemgr.h>
// #include <swlocale.h>
// #include <markupfiltmgr.h>
// #include <regex>
// #include "booknames.h"
// #include "makecsv.h"

// using sword::SWMgr;
// using sword::SWModule;
// using sword::VerseKey;
// using sword::LocaleMgr;
// using sword::MarkupFilterMgr;

// using namespace sword;

// std::string stripHtml(const std::string& html) {
//     // Remove HTML tags
//     std::regex htmlTagRegex("<[^>]*>");
//     std::string text = std::regex_replace(html, htmlTagRegex, "");

//     // Remove excess white space and new lines
//     std::regex multipleSpacesRegex("\\s+");
//     text = std::regex_replace(text, multipleSpacesRegex, " ");

//     // Trim leading and trailing white spaces
//     text.erase(text.find_last_not_of(" \t\n\r\f\v") + 1);
//     text.erase(0, text.find_first_not_of(" \t\n\r\f\v"));

//     return text;
// }

// const char* getBookName(const char* langCode, const char* englishBookName) {
//     for (const auto& entry : bookNamesData) {
//         if (strcmp(entry.lang, langCode) == 0) {
//             // Return the book name from the appropriate struct field
//             if (strcmp(englishBookName, "Genesis") == 0) return entry.books.Genesis;
//             if (strcmp(englishBookName, "Exodus") == 0) return entry.books.Exodus;
//             if (strcmp(englishBookName, "Leviticus") == 0) return entry.books.Leviticus;
//             if (strcmp(englishBookName, "Numbers") == 0) return entry.books.Numbers;
//             if (strcmp(englishBookName, "Deuteronomy") == 0) return entry.books.Deuteronomy;
//             if (strcmp(englishBookName, "Joshua") == 0) return entry.books.Joshua;
//             if (strcmp(englishBookName, "Judges") == 0) return entry.books.Judges;
//             if (strcmp(englishBookName, "Ruth") == 0) return entry.books.Ruth;
//             if (strcmp(englishBookName, "I Samuel") == 0) return entry.books.Samuel1;
//             if (strcmp(englishBookName, "II Samuel") == 0) return entry.books.Samuel2;
//             if (strcmp(englishBookName, "I Kings") == 0) return entry.books.Kings1;
//             if (strcmp(englishBookName, "II Kings") == 0) return entry.books.Kings2;
//             if (strcmp(englishBookName, "I Chronicles") == 0) return entry.books.Chronicles1;
//             if (strcmp(englishBookName, "II Chronicles") == 0) return entry.books.Chronicles2;
//             if (strcmp(englishBookName, "Ezra") == 0) return entry.books.Ezra;
//             if (strcmp(englishBookName, "Nehemiah") == 0) return entry.books.Nehemiah;
//             if (strcmp(englishBookName, "Esther") == 0) return entry.books.Esther;
//             if (strcmp(englishBookName, "Job") == 0) return entry.books.Job;
//             if (strcmp(englishBookName, "Psalms") == 0) return entry.books.Psalms;
//             if (strcmp(englishBookName, "Proverbs") == 0) return entry.books.Proverbs;
//             if (strcmp(englishBookName, "Ecclesiastes") == 0) return entry.books.Ecclesiastes;
//             if (strcmp(englishBookName, "Song of Solomon") == 0) return entry.books.SongOfSolomon;
//             if (strcmp(englishBookName, "Isaiah") == 0) return entry.books.Isaiah;
//             if (strcmp(englishBookName, "Jeremiah") == 0) return entry.books.Jeremiah;
//             if (strcmp(englishBookName, "Lamentations") == 0) return entry.books.Lamentations;
//             if (strcmp(englishBookName, "Ezekiel") == 0) return entry.books.Ezekiel;
//             if (strcmp(englishBookName, "Daniel") == 0) return entry.books.Daniel;
//             if (strcmp(englishBookName, "Hosea") == 0) return entry.books.Hosea;
//             if (strcmp(englishBookName, "Joel") == 0) return entry.books.Joel;
//             if (strcmp(englishBookName, "Amos") == 0) return entry.books.Amos;
//             if (strcmp(englishBookName, "Obadiah") == 0) return entry.books.Obadiah;
//             if (strcmp(englishBookName, "Jonah") == 0) return entry.books.Jonah;
//             if (strcmp(englishBookName, "Micah") == 0) return entry.books.Micah;
//             if (strcmp(englishBookName, "Nahum") == 0) return entry.books.Nahum;
//             if (strcmp(englishBookName, "Habakkuk") == 0) return entry.books.Habakkuk;
//             if (strcmp(englishBookName, "Zephaniah") == 0) return entry.books.Zephaniah;
//             if (strcmp(englishBookName, "Haggai") == 0) return entry.books.Haggai;
//             if (strcmp(englishBookName, "Zechariah") == 0) return entry.books.Zechariah;
//             if (strcmp(englishBookName, "Malachi") == 0) return entry.books.Malachi;
//             if (strcmp(englishBookName, "Matthew") == 0) return entry.books.Matthew;
//             if (strcmp(englishBookName, "Mark") == 0) return entry.books.Mark;
//             if (strcmp(englishBookName, "Luke") == 0) return entry.books.Luke;
//             if (strcmp(englishBookName, "John") == 0) return entry.books.John;
//             if (strcmp(englishBookName, "Acts") == 0) return entry.books.Acts;
//             if (strcmp(englishBookName, "Romans") == 0) return entry.books.Romans;
//             if (strcmp(englishBookName, "I Corinthians") == 0) return entry.books.Corinthians1;
//             if (strcmp(englishBookName, "II Corinthians") == 0) return entry.books.Corinthians2;
//             if (strcmp(englishBookName, "Galatians") == 0) return entry.books.Galatians;
//             if (strcmp(englishBookName, "Ephesians") == 0) return entry.books.Ephesians;
//             if (strcmp(englishBookName, "Philippians") == 0) return entry.books.Philippians;
//             if (strcmp(englishBookName, "Colossians") == 0) return entry.books.Colossians;
//             if (strcmp(englishBookName, "I Thessalonians") == 0) return entry.books.Thessalonians1;
//             if (strcmp(englishBookName, "II Thessalonians") == 0) return entry.books.Thessalonians2;
//             if (strcmp(englishBookName, "I Timothy") == 0) return entry.books.Timothy1;
//             if (strcmp(englishBookName, "II Timothy") == 0) return entry.books.Timothy2;
//             if (strcmp(englishBookName, "Titus") == 0) return entry.books.Titus;
//             if (strcmp(englishBookName, "Philemon") == 0) return entry.books.Philemon;
//             if (strcmp(englishBookName, "Hebrews") == 0) return entry.books.Hebrews;
//             if (strcmp(englishBookName, "James") == 0) return entry.books.James;
//             if (strcmp(englishBookName, "I Peter") == 0) return entry.books.Peter1;
//             if (strcmp(englishBookName, "II Peter") == 0) return entry.books.Peter2;
//             if (strcmp(englishBookName, "I John") == 0) return entry.books.John1;
//             if (strcmp(englishBookName, "II John") == 0) return entry.books.John2;
//             if (strcmp(englishBookName, "III John") == 0) return entry.books.John3;
//             if (strcmp(englishBookName, "Jude") == 0) return entry.books.Jude;
//             if (strcmp(englishBookName, "Revelation") == 0) return entry.books.Revelation;
//         }
//     }
//     return englishBookName;  // Fallback to the English name if no translation found
// }

// void writeToCSV(const std::string& baseDir, const std::string& bookName, const Queries& queries, SWMgr& manager, int bookNumber) {
//     // Loop through all module names
//     for (const auto& moduleName : moduleNames) {
//         SWModule *target = manager.getModule(moduleName);
//         if (!target) {
//             std::cerr << "Could not find module [" << moduleName << "]. Skipping...\n";
//             continue;
//         }

//         // Get the language code of the module
//         const char* langCode = target->getLanguage(); // Placeholder for actual method to get language code
//         std::cout << "Lang code: " << langCode << '\n';
//         // Get book names for the module's language
//         const char* bookNameInLang = getBookName(langCode, bookName.c_str()); // Function to get BookNames based on language

//         if (!bookNameInLang) {
//             std::cerr << "Could not get book names for language [" << langCode << "]. Skipping...\n";
//             continue;
//         }

//         std::ostringstream csvFilePath;
//         csvFilePath << baseDir << "/" << bookNumber << ". " << bookName << ".csv";
//         std::ofstream outFile(csvFilePath.str(), std::ios::app);  // Open in append mode

//         if (!outFile) {
//             std::cerr << "Could not open file for writing: " << csvFilePath.str() << "\n";
//             continue;
//         }

//         // Initialize vector for verse content
//         std::vector<std::string> verseContents(25, ""); // Initialize with empty strings

//         // Process each verse
//         int index = 0;
//         for (const auto& verse : queries.at(bookName)) {
//             VerseKey *vk = dynamic_cast<VerseKey *>(target->getKey());
//             if (vk) {
//                 vk->setIntros(true);
//                 target->setKey((bookName + " " + verse).c_str());

//                 SWBuf contentBuf = target->renderText();  // Get the content as SWBuf
//                 std::string content(contentBuf.c_str());   // Convert SWBuf to std::string
//                 std::string cleanedContent = stripHtml(content);

//                 // Log the index and verse content to the terminal
//                 std::cout << "Index: " << index << ", Verse: " << verse << ", Content: " << cleanedContent << " " << bookNameInLang << " " << verse << "\n";

//                 // Store the verse content at the correct index
//                 if (index >= 0 && index < 25) {
//                     std::stringstream ss;
//                     ss << cleanedContent << "#" << bookNameInLang << " " << verse;
//                     verseContents[index] = ss.str();
//                 } else {
//                     std::cerr << "Index out of range: " << index << "\n";
//                 }

//                 ++index;
//             } else {
//                 std::cerr << "Failed to get VerseKey from module [" << moduleName << "].\n";
//             }
//         }

//         // Write the row with content for each verse
//         outFile << bookNameInLang;
//         for (const auto& content : verseContents) {
//             outFile << "@" << content;
//         }
//         outFile << "\n";

//         outFile.close();
//     }
// }

// int main() {
//     SWMgr manager(new MarkupFilterMgr(sword::FMT_XHTML));

//     // Iterate through each book and generate CSV files
//     std::vector<std::string> bookNames = {
//         "Genesis", "Exodus", "Leviticus", "Numbers", "Deuteronomy", "Joshua", "Judges", "Ruth",
//         "I Samuel", "II Samuel", "I Kings", "II Kings", "I Chronicles", "II Chronicles", "Ezra", "Nehemiah",
//         "Esther", "Job", "Psalms", "Proverbs", "Ecclesiastes", "Song of Solomon", "Isaiah", "Jeremiah",
//         "Lamentations", "Ezekiel", "Daniel", "Hosea", "Joel", "Amos", "Obadiah", "Jonah", "Micah",
//         "Nahum", "Habakkuk", "Zephaniah", "Haggai", "Zechariah", "Malachi", "Matthew", "Mark", "Luke",
//         "John", "Acts", "Romans", "I Corinthians", "II Corinthians", "Galatians", "Ephesians", "Philippians",
//         "Colossians", "I Thessalonians", "II Thessalonians", "I Timothy", "II Timothy", "Titus", "Philemon",
//         "Hebrews", "James", "I Peter", "II Peter", "I John", "II John", "III John", "Jude", "Revelation"
//     };
//     int bookNumber = 1;
//     for (const std::string& bookName : bookNames) {
//         writeToCSV("csv", bookName, queries, manager, bookNumber);
//         bookNumber++;
//     }

//     return 0;
// }


/******************************************************************************
 *
 *  lookup.cpp -	Simple example of how to retrieve an entry from a
 *			SWORD module
 *
 * $Id: lookup.cpp 3820 2020-10-24 20:27:30Z scribe $
 *
 * Copyright 1997-2013 CrossWire Bible Society (http://www.crosswire.org)
 *	CrossWire Bible Society
 *	P. O. Box 2528
 *	Tempe, AZ  85280-2528
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation version 2.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 */
// #include <fstream>
// #include <array>
// #include <string>
// #include <stdio.h>
// #include <iostream>
// #include <stdlib.h>
// #include <swmgr.h>
// #include <swmodule.h>
// #include <swfilter.h>
// #include <markupfiltmgr.h>
// #include <osiswordjs.h>
// #include <versekey.h>
// #include <cstring>
// #include <regex>
// #include <sstream>
// #include <booknames.h>
// //#include "../../bindings/corba/orbitcpp/webmgr.hpp"


// using sword::SWMgr;
// using sword::MarkupFilterMgr;
// using sword::SWModule;
// using sword::FMT_WEBIF;
// using sword::FMT_HTMLHREF;
// using sword::FMT_XHTML;
// using sword::FMT_OSIS;
// using sword::FMT_RTF;
// using sword::FMT_LATEX;
// using sword::ModMap;
// using sword::AttributeTypeList;
// using sword::AttributeList;
// using sword::AttributeValue;
// using sword::VerseKey;
// using sword::FilterList;
// using sword::OSISWordJS;

// void writeBookNamesToCSV(const std::string& filename) {
//     std::ofstream csvFile(filename);

//     if (!csvFile.is_open()) {
//         std::cerr << "Failed to open file for writing: " << filename << std::endl;
//         return;
//     }

//     // Write the header
//     csvFile << "Genesis,Exodus,Leviticus,Numbers,Deuteronomy,Joshua,Judges,Ruth,"
//                "Samuel1,Samuel2,Kings1,Kings2,Chronicles1,Chronicles2,Ezra,"
//                "Nehemiah,Esther,Job,Psalms,Proverbs,Ecclesiastes,SongOfSolomon,"
//                "Isaiah,Jeremiah,Lamentations,Ezekiel,Daniel,Hosea,Joel,Amos,"
//                "Obadiah,Jonah,Micah,Nahum,Habakkuk,Zephaniah,Haggai,Zechariah,"
//                "Malachi,Matthew,Mark,Luke,John,Acts,Romans,Corinthians1,"
//                "Corinthians2,Galatians,Ephesians,Philippians,Colossians,"
//                "Thessalonians1,Thessalonians2,Timothy1,Timothy2,Titus,"
//                "Philemon,Hebrews,James,Peter1,Peter2,John1,John2,John3,Jude,"
//                "Revelation\n";

//     // Write the data for each language
//     for (const auto& bookNames : bookNamesData) {
//         csvFile << bookNames.books.Genesis << ",";
//         csvFile << bookNames.books.Exodus << ",";
//         csvFile << bookNames.books.Leviticus << ",";
//         csvFile << bookNames.books.Numbers << ",";
//         csvFile << bookNames.books.Deuteronomy << ",";
//         csvFile << bookNames.books.Joshua << ",";
//         csvFile << bookNames.books.Judges << ",";
//         csvFile << bookNames.books.Ruth << ",";
//         csvFile << bookNames.books.Samuel1 << ",";
//         csvFile << bookNames.books.Samuel2 << ",";
//         csvFile << bookNames.books.Kings1 << ",";
//         csvFile << bookNames.books.Kings2 << ",";
//         csvFile << bookNames.books.Chronicles1 << ",";
//         csvFile << bookNames.books.Chronicles2 << ",";
//         csvFile << bookNames.books.Ezra << ",";
//         csvFile << bookNames.books.Nehemiah << ",";
//         csvFile << bookNames.books.Esther << ",";
//         csvFile << bookNames.books.Job << ",";
//         csvFile << bookNames.books.Psalms << ",";
//         csvFile << bookNames.books.Proverbs << ",";
//         csvFile << bookNames.books.Ecclesiastes << ",";
//         csvFile << bookNames.books.SongOfSolomon << ",";
//         csvFile << bookNames.books.Isaiah << ",";
//         csvFile << bookNames.books.Jeremiah << ",";
//         csvFile << bookNames.books.Lamentations << ",";
//         csvFile << bookNames.books.Ezekiel << ",";
//         csvFile << bookNames.books.Daniel << ",";
//         csvFile << bookNames.books.Hosea << ",";
//         csvFile << bookNames.books.Joel << ",";
//         csvFile << bookNames.books.Amos << ",";
//         csvFile << bookNames.books.Obadiah << ",";
//         csvFile << bookNames.books.Jonah << ",";
//         csvFile << bookNames.books.Micah << ",";
//         csvFile << bookNames.books.Nahum << ",";
//         csvFile << bookNames.books.Habakkuk << ",";
//         csvFile << bookNames.books.Zephaniah << ",";
//         csvFile << bookNames.books.Haggai << ",";
//         csvFile << bookNames.books.Zechariah << ",";
//         csvFile << bookNames.books.Malachi << ",";
//         csvFile << bookNames.books.Matthew << ",";
//         csvFile << bookNames.books.Mark << ",";
//         csvFile << bookNames.books.Luke << ",";
//         csvFile << bookNames.books.John << ",";
//         csvFile << bookNames.books.Acts << ",";
//         csvFile << bookNames.books.Romans << ",";
//         csvFile << bookNames.books.Corinthians1 << ",";
//         csvFile << bookNames.books.Corinthians2 << ",";
//         csvFile << bookNames.books.Galatians << ",";
//         csvFile << bookNames.books.Ephesians << ",";
//         csvFile << bookNames.books.Philippians << ",";
//         csvFile << bookNames.books.Colossians << ",";
//         csvFile << bookNames.books.Thessalonians1 << ",";
//         csvFile << bookNames.books.Thessalonians2 << ",";
//         csvFile << bookNames.books.Timothy1 << ",";
//         csvFile << bookNames.books.Timothy2 << ",";
//         csvFile << bookNames.books.Titus << ",";
//         csvFile << bookNames.books.Philemon << ",";
//         csvFile << bookNames.books.Hebrews << ",";
//         csvFile << bookNames.books.James << ",";
//         csvFile << bookNames.books.Peter1 << ",";
//         csvFile << bookNames.books.Peter2 << ",";
//         csvFile << bookNames.books.John1 << ",";
//         csvFile << bookNames.books.John2 << ",";
//         csvFile << bookNames.books.John3 << ",";
//         csvFile << bookNames.books.Jude << ",";
//         csvFile << bookNames.books.Revelation << "\n";
//     }

//     csvFile.close();
//     std::cout << "CSV file created: " << filename << std::endl;
// }

// int main() {
//     writeBookNamesToCSV("BookNames.csv");
//     return 0;
// }

// std::string stripHtml(const std::string& html) {
//     // Remove HTML tags
//     std::regex htmlTagRegex("<[^>]*>");
//     std::string text = std::regex_replace(html, htmlTagRegex, "");

//     // Remove excess white space and new lines
//     std::regex multipleSpacesRegex("\\s+");
//     text = std::regex_replace(text, multipleSpacesRegex, " ");

//     // Trim leading and trailing white spaces
//     text.erase(text.find_last_not_of(" \t\n\r\f\v") + 1);
//     text.erase(0, text.find_first_not_of(" \t\n\r\f\v"));

//     return text;
// }

// std::map<int, std::string> moduleMap = {
//     {1, "Alb"},            // Albanian Bible
//     {2, "BurJudson"},      // 1835 Judson Burmese Bible
//     {3, "CebPinadayag"},   // Cebuano Pinadayag
//     {4, "ChiUn"},          // 和合本 (繁體字)
//     {5, "ChiUns"},         // 和合本 (简体字)
//     {6, "CroSaric"},       // Hrvatska Biblija Ivana Šarića
//     {7, "DaOT1931NT1907"}, // Danish OT193I + NT1907 with original orthography
//     {8, "FinPR"},          // Finnish Pyhä Raamattu (1933/1938)
//     {9, "FreJND"},         // Bible J.N. Darby in French with Strong's numbers
//     {10, "GerMenge"},      // Menge-Bibel (1939)
//     {11, "Haitian"},       // Haitian Creole Bible
//     {12, "HunKar"},        // Revideált Károli Biblia 1908
//     {13, "ItaRive"},       // Italian Riveduta Bibbia (1927)
//     {14, "JapKougo"},      // Japanese Kougo-yaku 口語訳「聖書」(1954/1955年版)
//     {15, "KorRV"},         // 개역성경
//     {16, "LvGluck8"},      // Latvian Glück 8th edition
//     {17, "Mal1910"},       // Sathyavedapusthakam (Malayalam Bible) published in 1910
//     {18, "Mg1865"},        // Baiboly Malagasy (1865)
//     {19, "NlCanisius1939"},// Petrus Canisius Translation
//     {20, "NorSMB"},        // Studentmållagsbibelen frå 1921
//     {21, "Norsk"},         // Bibelen på Norsk (1930)
//     {22, "PolGdanska"},    // Polish Biblia Gdanska (1881)
//     {23, "RusSynodal"},    // Синодального Перевода Библии
//     {24, "SpaPlatense"},   // Biblia Platense (Straubinger)
//     {25, "SrKDEkavski"},   // Serbian Bible Daničić-Karadžić Ekavski
//     {26, "SrKDIjekav"},    // Serbian Bible Daničić-Karadžić Ijekavski
//     {27, "Swe1917"},       // Swedish Bible (1917)
//     {28, "TagAngBiblia"},  // Philippine Bible Society (1905)
//     {29, "UkrOgienko"},    // Українська Біблія. Переклад Івана Огієнка.
//     {30, "Viet"},          // Kinh Thánh Tiếng Việt (1934)
//     {31, "NHEB"},          // New Heart English Bible
//     {32, "arbVDeb"},       // الكتاب المقدس باللغة العربية، فان دايك
//     {33, "hebmodeb"},      // תנ ך עברי מודרני
//     {34, "pesOPV1895eb"},  // ترجمه قدیم
//     {35, "porbrbsl2022eb"} // Bíblia Portuguesa Mundial
// };


// void lookupVerse(const std::string &moduleName, const std::string &verseKey) {
//     sword::SWMgr manager;
//     SWModule *target = manager.getModule(moduleName.c_str());

//     if (!target) {
//         std::cerr << "Could not find module [" << moduleName << "].\n";
//         return;
//     }

//         sword::VerseKey vk;
//         vk.setText(verseKey.c_str());
//         target->setKey(&vk);

//         // Log the verse key and module name
//         std::cout << moduleName << " - " << vk.getText() << " \n";

//         // Force an entry lookup to resolve the key
//         target->renderText();

//         // Get the rendered text and strip HTML
//         sword::SWBuf renderedTextBuf = target->renderText();  // Get SWBuf
//         std::string renderedText = renderedTextBuf.c_str();   // Convert to std::string
//         std::string strippedText = stripHtml(renderedText);
//         std::cout << strippedText << "\n";
	
// }

// void lookupVerse(const std::vector<std::string>& moduleNumbers, const std::string& verseKey) {
//     for (const std::string& mod : moduleNumbers) {
//         sword::SWModule* target = manager.getModule(mod.c_str());
//         if (!target) {
//             std::cerr << "Module " << mod << " not found." << std::endl;
//             continue;
//         }

//         sword::VerseKey vk;
//         vk.setText(verseKey.c_str());
//         target->setKey(&vk);

//         // Log the verse key and module name
//         std::cout << mod << " - " << vk.getText() << " \n";

//         // Force an entry lookup to resolve the key
//         target->renderText();

//         // Get the rendered text and strip HTML
//         sword::SWBuf renderedTextBuf = target->renderText();  // Get SWBuf
//         std::string renderedText = renderedTextBuf.c_str();   // Convert to std::string
//         std::string strippedText = stripHtml(renderedText);
//         std::cout << strippedText << "\n";
//     }
// }


// std::vector<int> parseModuleNumbers(const std::string &moduleNumbers) {
//     std::vector<int> result;
//     std::stringstream ss(moduleNumbers);
//     std::string item;
//     while (std::getline(ss, item, ',')) {
//         result.push_back(std::stoi(item));
//     }
//     return result;
// }

// int main(int argc, char **argv) {
//     if (argc != 3) {
//         std::cerr << "Usage: " << argv[0] << " <module_numbers> <\"verse_key\">\n";
//         std::cerr << "Example: " << argv[0] << " \"1,2,4\" \"Hosea 1:1\"\n";
//         return 1;
//     }

//     std::string moduleNumbersStr = argv[1];
//     std::string verseKey = argv[2];
//     std::vector<int> moduleNumbers = parseModuleNumbers(moduleNumbersStr);

//     for (int num : moduleNumbers) {
//         auto it = moduleMap.find(num);
//         if (it != moduleMap.end()) {
//             lookupVerse(it->second, verseKey);
//         } else {
//             std::cerr << "Module number " << num << " not found.\n";
//         }
//     }

//     return 0;
// }


// int main(int argc, char **argv)
// {
// 	    // Check if the verse reference is provided as an argument
//     if (argc != 2) {
//         std::cerr << "Usage: " << argv[0] << " <verse_reference>" << std::endl;
//         std::cerr << "Example: " << argv[0] << " \"Numbers 17:9\"" << std::endl;
//         return -1;
//     }

//     SWMgr manager(new MarkupFilterMgr(FMT_XHTML));

//     // Set the verse reference from the command line argument
//     VerseKey vk(argv[1]);

//     for (const auto& mod : modules) {
//         SWModule *target = manager.getModule(mod.c_str());
//         if (!target) {
//             std::cerr << "Could not find module [" << mod << "]." << std::endl;
//             continue;
//         }

//         target->setKey(&vk);

//         // Log the verse key and module name
//         std::cout << mod << " - " << vk.getText() << " \n";

//         // Force an entry lookup to resolve the key
//         target->renderText(); 

//         // Get the rendered text and strip HTML
//         sword::SWBuf renderedTextBuf = target->renderText();  // Get SWBuf
//         std::string renderedText = renderedTextBuf.c_str();   // Convert to std::string
//         std::string strippedText = stripHtml(renderedText);
//         std::cout << strippedText << "\n";
//     }

//     return 0;
	
// // for testing webmgr
// //	WebMgr manager((const char *)0);
// //	manager.setJavascript(true);
// //
// 	SWMgr manager(new MarkupFilterMgr(FMT_XHTML));
// //	SWMgr manager(new MarkupFilterMgr(FMT_WEBIF));

// 	SWModule *target;

// 	if (argc != 3) {
// 		fprintf(stderr, "\nusage: %s <modname> <\"lookup key\">\n"
// 							 "\tExample: lookup KJV \"James 1:19\"\n\n", argv[0]);
 
// 		exit(-1);
// 	}

// 	target = manager.getModule(argv[1]);
// 	if (!target) {
// 		fprintf(stderr, "Could not find module [%s].  Available modules:\n", argv[1]);
// 		ModMap::iterator it;
// 		for (it = manager.Modules.begin(); it != manager.Modules.end(); ++it) {
// 			fprintf(stderr, "[%s]\t - %s\n", (*it).second->getName(), (*it).second->getDescription());
// 		}
// 		exit(-1);
// 	}

// 	if (target->getMarkup() == FMT_OSIS) {
// 		OSISWordJS *osisWordJS = new OSISWordJS();
// 		osisWordJS->setMgr(&manager);
// 		target->addOptionFilter(osisWordJS);
// 		osisWordJS->setOptionValue("On");
// 	}
// 	// turn all filters to default values
// 	manager.setGlobalOption("Headings", "On");
// 	manager.setGlobalOption("Strong's Numbers", "Off");
// 	manager.setGlobalOption("Lemmas", "Off");
// //	manager.setGlobalOption("Greek Accents", "Off");
// 	manager.setGlobalOption("Footnotes", "On");
// 	manager.setGlobalOption("Cross-references", "On");

// 	VerseKey *vk = dynamic_cast<VerseKey *>(target->getKey());

// 	if (vk) {
// 	//	vk->AutoNormalize(false);
// 		vk->setIntros(true);
// 		vk->setText(argv[2]);
// 	}
// 	else {
// 		target->setKey(argv[2]);
// 	}

// 	target->renderText();		// force an entry lookup to resolve key to something in the index

//     // Strip HTML and log the stripped text
//     sword::SWBuf renderedTextBuf = target->renderText();  // Get SWBuf
//     std::string renderedText = renderedTextBuf.c_str();  // Convert to std::string
//     std::string strippedText = stripHtml(renderedText);
    
//     std::cout << "==Stripped=Entry==========\n";
//     std::cout << strippedText;
//     std::cout << "\n";
// 	std::cout << std::endl;

// 	return 0;
// }
// #include <iostream>
// #include <vector>
// #include <cstring>
// #include "booknames.h"

// // Convert arrays to vectors
// std::vector<BookNames> bookNamesDataVector(std::begin(bookNamesData), std::end(bookNamesData));
// std::vector<BookNames> generatedNamesDataVector(std::begin(generatedNamesData), std::end(generatedNamesData));

// // The list of book names in order
// const char* book_names[] = {
//     "Genesis", "Exodus", "Leviticus", "Numbers", "Deuteronomy",
//     "Joshua", "Judges", "Ruth", "I Samuel", "II Samuel",
//     "I Kings", "II Kings", "I Chronicles", "II Chronicles",
//     "Ezra", "Nehemiah", "Esther", "Job", "Psalms",
//     "Proverbs", "Ecclesiastes", "Song of Solomon", "Isaiah",
//     "Jeremiah", "Lamentations", "Ezekiel", "Daniel", "Hosea",
//     "Joel", "Amos", "Obadiah", "Jonah", "Micah", "Nahum",
//     "Habakkuk", "Zephaniah", "Haggai", "Zechariah", "Malachi",
//     "Matthew", "Mark", "Luke", "John", "Acts", "Romans",
//     "I Corinthians", "II Corinthians", "Galatians", "Ephesians",
//     "Philippians", "Colossians", "I Thessalonians", "II Thessalonians",
//     "I Timothy", "II Timothy", "Titus", "Philemon", "Hebrews",
//     "James", "I Peter", "II Peter", "I John", "II John",
//     "III John", "Jude", "Revelation of John"
// };

// // Compare given and generated book names
// void compareBookNames(const std::vector<BookNames>& given, const std::vector<BookNames>& generated) {
//     for (const auto& lang : given) {
//         bool found = false;
//         for (const auto& gen : generated) {
//             if (strcmp(lang.lang, gen.lang) == 0) {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found) {
//             std::cout << ">>> " << lang.lang << " not included <<<" << std::endl;
//         }
//     }

//     for (const auto& lang : given) {
//         for (size_t i = 0; i < sizeof(book_names)/sizeof(book_names[0]); ++i) {
//             const char* given_book = nullptr;
//             const char* generated_book = nullptr;

//             // Access the book names dynamically
//             switch (i) {
//                 case 0: given_book = lang.books.Genesis; generated_book = generated[0].books.Genesis; break;
//                 case 1: given_book = lang.books.Exodus; generated_book = generated[0].books.Exodus; break;
//                 case 2: given_book = lang.books.Leviticus; generated_book = generated[0].books.Leviticus; break;
//                 case 3: given_book = lang.books.Numbers; generated_book = generated[0].books.Numbers; break;
//                 case 4: given_book = lang.books.Deuteronomy; generated_book = generated[0].books.Deuteronomy; break;
//                 case 5: given_book = lang.books.Joshua; generated_book = generated[0].books.Joshua; break;
//                 case 6: given_book = lang.books.Judges; generated_book = generated[0].books.Judges; break;
//                 case 7: given_book = lang.books.Ruth; generated_book = generated[0].books.Ruth; break;
//                 case 8: given_book = lang.books.Samuel1; generated_book = generated[0].books.Samuel1; break;
//                 case 9: given_book = lang.books.Samuel2; generated_book = generated[0].books.Samuel2; break;
//                 case 10: given_book = lang.books.Kings1; generated_book = generated[0].books.Kings1; break;
//                 case 11: given_book = lang.books.Kings2; generated_book = generated[0].books.Kings2; break;
//                 case 12: given_book = lang.books.Chronicles1; generated_book = generated[0].books.Chronicles1; break;
//                 case 13: given_book = lang.books.Chronicles2; generated_book = generated[0].books.Chronicles2; break;
//                 case 14: given_book = lang.books.Ezra; generated_book = generated[0].books.Ezra; break;
//                 case 15: given_book = lang.books.Nehemiah; generated_book = generated[0].books.Nehemiah; break;
//                 case 16: given_book = lang.books.Esther; generated_book = generated[0].books.Esther; break;
//                 case 17: given_book = lang.books.Job; generated_book = generated[0].books.Job; break;
//                 case 18: given_book = lang.books.Psalms; generated_book = generated[0].books.Psalms; break;
//                 case 19: given_book = lang.books.Proverbs; generated_book = generated[0].books.Proverbs; break;
//                 case 20: given_book = lang.books.Ecclesiastes; generated_book = generated[0].books.Ecclesiastes; break;
//                 case 21: given_book = lang.books.SongOfSolomon; generated_book = generated[0].books.SongOfSolomon; break;
//                 case 22: given_book = lang.books.Isaiah; generated_book = generated[0].books.Isaiah; break;
//                 case 23: given_book = lang.books.Jeremiah; generated_book = generated[0].books.Jeremiah; break;
//                 case 24: given_book = lang.books.Lamentations; generated_book = generated[0].books.Lamentations; break;
//                 case 25: given_book = lang.books.Ezekiel; generated_book = generated[0].books.Ezekiel; break;
//                 case 26: given_book = lang.books.Daniel; generated_book = generated[0].books.Daniel; break;
//                 case 27: given_book = lang.books.Hosea; generated_book = generated[0].books.Hosea; break;
//                 case 28: given_book = lang.books.Joel; generated_book = generated[0].books.Joel; break;
//                 case 29: given_book = lang.books.Amos; generated_book = generated[0].books.Amos; break;
//                 case 30: given_book = lang.books.Obadiah; generated_book = generated[0].books.Obadiah; break;
//                 case 31: given_book = lang.books.Jonah; generated_book = generated[0].books.Jonah; break;
//                 case 32: given_book = lang.books.Micah; generated_book = generated[0].books.Micah; break;
//                 case 33: given_book = lang.books.Nahum; generated_book = generated[0].books.Nahum; break;
//                 case 34: given_book = lang.books.Habakkuk; generated_book = generated[0].books.Habakkuk; break;
//                 case 35: given_book = lang.books.Zephaniah; generated_book = generated[0].books.Zephaniah; break;
//                 case 36: given_book = lang.books.Haggai; generated_book = generated[0].books.Haggai; break;
//                 case 37: given_book = lang.books.Zechariah; generated_book = generated[0].books.Zechariah; break;
//                 case 38: given_book = lang.books.Malachi; generated_book = generated[0].books.Malachi; break;
//                 case 39: given_book = lang.books.Matthew; generated_book = generated[0].books.Matthew; break;
//                 case 40: given_book = lang.books.Mark; generated_book = generated[0].books.Mark; break;
//                 case 41: given_book = lang.books.Luke; generated_book = generated[0].books.Luke; break;
//                 case 42: given_book = lang.books.John; generated_book = generated[0].books.John; break;
//                 case 43: given_book = lang.books.Acts; generated_book = generated[0].books.Acts; break;
//                 case 44: given_book = lang.books.Romans; generated_book = generated[0].books.Romans; break;
//                 case 45: given_book = lang.books.Corinthians1; generated_book = generated[0].books.Corinthians1; break;
//                 case 46: given_book = lang.books.Corinthians2; generated_book = generated[0].books.Corinthians2; break;
//                 case 47: given_book = lang.books.Galatians; generated_book = generated[0].books.Galatians; break;
//                 case 48: given_book = lang.books.Ephesians; generated_book = generated[0].books.Ephesians; break;
//                 case 49: given_book = lang.books.Philippians; generated_book = generated[0].books.Philippians; break;
//                 case 50: given_book = lang.books.Colossians; generated_book = generated[0].books.Colossians; break;
//                 case 51: given_book = lang.books.Thessalonians1; generated_book = generated[0].books.Thessalonians1; break;
//                 case 52: given_book = lang.books.Thessalonians2; generated_book = generated[0].books.Thessalonians2; break;
//                 case 53: given_book = lang.books.Timothy1; generated_book = generated[0].books.Timothy1; break;
//                 case 54: given_book = lang.books.Timothy2; generated_book = generated[0].books.Timothy2; break;
//                 case 55: given_book = lang.books.Titus; generated_book = generated[0].books.Titus; break;
//                 case 56: given_book = lang.books.Philemon; generated_book = generated[0].books.Philemon; break;
//                 case 57: given_book = lang.books.Hebrews; generated_book = generated[0].books.Hebrews; break;
//                 case 58: given_book = lang.books.James; generated_book = generated[0].books.James; break;
//                 case 59: given_book = lang.books.Peter1; generated_book = generated[0].books.Peter1; break;
//                 case 60: given_book = lang.books.Peter2; generated_book = generated[0].books.Peter2; break;
//                 case 61: given_book = lang.books.John1; generated_book = generated[0].books.John1; break;
//                 case 62: given_book = lang.books.John2; generated_book = generated[0].books.John2; break;
//                 case 63: given_book = lang.books.John3; generated_book = generated[0].books.John3; break;
//                 case 64: given_book = lang.books.Jude; generated_book = generated[0].books.Jude; break;
//                 case 65: given_book = lang.books.Revelation; generated_book = generated[0].books.Revelation; break;
//                 default: continue; // Skip if out of range
//             }

//             if (strcmp(given_book, generated_book) != 0) {
//                 std::cout << "Discrepancy in " << lang.lang << " for " << book_names[i] << std::endl;
//                 std::cout << "Given: " << given_book << std::endl;
//                 std::cout << "Generated: " << generated_book << std::endl;
//             }
//         }
//     }
// }

// int main() {
//     compareBookNames(bookNamesDataVector, generatedNamesDataVector);
//     return 0;
// }