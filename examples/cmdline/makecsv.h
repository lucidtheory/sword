#ifndef MAKECSV_H
#define MAKECSV_H

#include <array>
#include <map>
#include <vector>
#include <string>

// Define the number of modules
constexpr size_t NUM_MODULES = 35;

// Define the module names
static const std::array<const char*, NUM_MODULES> moduleNames = {
    "Alb",            // 1 Albanian Bible (sq)
    "BurJudson",      // 2 1835 Judson Burmese Bible (my)
    "CebPinadayag",   // 3 Cebuano Pinadayag (ceb)
    "ChiUn",          // 4 和合本 (繁體字) (zh-Hant)
    "ChiUns",         // 5 和合本 (简体字) (zh-Hans)
    "CroSaric",       // 6 Hrvatska Biblija Ivana Šarića (hr)
    "DaOT1931NT1907", // 7 Danish OT193I + NT1907 with original orthography (da)
    "FinPR",          // 8 Finnish Pyhä Raamattu (1933/1938) (fi)
    "FreJND",         // 9 Bible J.N. Darby in French with Strong's numbers (fr)
    "GerMenge",       // 10 Menge-Bibel (1939) (de)
    "Haitian",        // 11 Haitian Creole Bible (ht)
    "HunKar",         // 12 Revideált Károli Biblia 1908 (hu)
    "ItaRive",        // 13 Italian Riveduta Bibbia (1927) (it)
    "JapKougo",       // 14 Japanese Kougo-yaku 口語訳「聖書」(1954/1955年版) (ja)
    "KorRV",          // 15 개역성경 (ko)
    "LvGluck8",       // 16 Latvian Glück 8th edition (lv)
    "Mal1910",        // 17 Sathyavedapusthakam (Malayalam Bible) published in 1910 (ml)
    "Mg1865",         // 18 Baiboly Malagasy (1865) (mg)
    "NlCanisius1939", // 19 Petrus Canisius Translation (nl)
    "NorSMB",         // 20 Studentmållagsbibelen frå 1921 (ny)
    "Norsk",          // 21 Bibelen på Norsk (1930) (no)
    "PolGdanska",     // 22 Polish Biblia Gdanska (1881) (pl)
    "RusSynodal",     // 23 Синодального Перевода Библии (ru)
    "SpaPlatense",    // 24 Biblia Platense (Straubinger) (es)
    "SrKDEkavski",    // 25 Serbian Bible Daničić-Karadžić Ekavski (sr)
    "SrKDIjekav",     // 26 Serbian Bible Daničić-Karadžić Ijekavski (sr)
    "Swe1917",        // 27 Swedish Bible (1917) (sv)
    "TagAngBiblia",   // 28 Philippine Bible Society (1905) (tl)
    "UkrOgienko",     // 29 Українська Біблія. Переклад Івана Огієнка. (uk)
    "Viet",           // 30 Kinh Thánh Tiếng Việt (1934) (vi)
    "NHEB",           // 31 New Heart English Bible (en)
    "arbVDeb",	      // 32 الكتاب المقدس باللغة العربية، فان دايك (ar)
    "hebmodeb",	      // 33 תנ ך עברי מודרני (he)
    "pesOPV1895eb",   // 34 ترجمه قدیم (fa)
    "porbrbsl2022eb", // 35 Bíblia Portuguesa Mundial (pt)
};


// Define the structure for storing verses
using VerseList = std::vector<std::string>;

// Define the structure for storing queries by book
using Queries = std::map<std::string, VerseList>;

// Initialize the queries structure
const Queries queries = {
    {"Genesis", {
        "1:1", "1:2", "1:3", "1:9", "1:11", "1:20", "1:24", "1:27", "1:28",
        "2:3", "2:7", "2:8", "3:24", "4:7", "5:7", "5:24", "7:9", "7:11",
        "9:16", "12:2", "12:3", "14:18", "15:1", "15:6", "50:20"
    }},
    {"Exodus", {
        "2:3", "3:2", "3:11", "3:14", "4:12", "5:2", "6:11", "9:29", "10:24",
        "11:9", "13:14", "13:21", "14:14", "14:21", "14:22", "15:2", "15:11",
        "15:18", "15:20", "19:5", "19:6", "20:2", "20:6", "20:12", "34:29"
    }},
        {"Leviticus", {
        "6:7", "6:13", "8:10", "9:6", "9:22", "9:24", "16:30", "18:2",
        "18:5", "19:2", "19:11", "19:12", "19:15", "19:17", "19:30",
        "19:32", "19:34", "19:36", "20:24", "20:26", "22:32", "23:32",
        "25:2", "25:23", "26:4"
    }},
    {"Numbers", {
        "6:24", "6:25", "6:26", "7:1", "11:9", "12:6", "14:24", "15:41",
        "17:8", "18:29", "20:8", "20:11", "21:9", "22:28", "22:31", "23:8",
        "23:19", "23:26", "24:5", "25:12", "25:13", "29:39", "31:23", "33:53",
        "35:34"
    }},
    {"Deuteronomy", {
        "1:10", "1:11", "1:30", "1:31", "4:13", "5:10", "6:4", "6:5",
        "6:6", "6:12", "7:6", "7:7", "7:8", "7:12", "7:21", "8:5",
        "8:7", "10:12", "10:14", "10:16", "10:18", "11:14", "12:7",
        "31:6", "32:4"
    }},
    {"Joshua", {
        "1:5", "1:7", "1:8", "1:9", "3:5", "4:14", "5:15", "6:20",
        "13:33", "21:43", "21:44", "21:45", "22:5", "22:29", "22:34",
        "23:6", "23:8", "23:10", "23:11", "23:14", "24:13", "24:15",
        "24:17", "24:23", "24:24"
    }},
    {"Judges", {
        "2:6", "2:7", "2:18", "3:9", "5:3", "5:5", "5:9", "5:10",
        "5:11", "5:31", "6:8", "6:12", "6:13", "6:14", "6:15",
        "6:16", "6:24", "7:14", "8:23", "10:15", "13:5", "13:20",
        "13:24", "18:6", "20:26"
    }},
        {"Ruth", {
        "1:8", "1:14", "1:15", "1:16", "1:18", "1:21", "1:22",
        "2:4", "2:10", "2:11", "2:12", "2:13", "2:19", "2:20",
        "3:5", "3:10", "3:11", "4:9", "4:10", "4:11", "4:12",
        "4:14", "4:15", "4:16", "4:17"
    }},
    {"I Samuel", {
        "1:5", "1:15", "1:17", "1:20", "1:22", "1:27", "1:28",
        "2:4", "2:6", "2:7", "2:8", "2:10", "3:4", "3:8",
        "3:9", "3:10", "4:5", "11:13", "12:14", "12:16",
        "12:18", "12:24", "15:17", "15:22", "16:7"
    }},
    {"II Samuel", {
        "6:5", "7:8", "7:10", "7:18", "7:22", "7:24", "7:28", "7:29",
        "10:12", "14:14", "22:3", "22:4", "22:23", "22:26", "22:27",
        "22:29", "22:30", "22:31", "22:32", "22:33", "22:36", "22:37",
        "22:47", "23:5", "24:14"
    }},
    {"I Kings", {
        "2:3", "4:20", "4:29", "5:4", "6:13", "6:19", "6:29",
        "8:23", "8:27", "8:34", "8:36", "8:39", "8:56", "8:60",
        "8:65", "9:3", "17:22", "18:21", "18:36", "18:37", "18:38",
        "18:39", "19:12", "20:13", "22:19"
    }},
    {"II Kings", {
        "2:8", "2:9", "2:11", "3:17", "4:33", "4:43", "6:16",
        "6:17", "6:27", "8:19", "13:23", "17:28", "17:36", "17:39",
        "18:5", "18:6", "19:15", "19:19", "19:30", "19:31", "20:3",
        "22:2", "22:19", "23:2", "23:3"
    }},
    {"I Chronicles", {
        "4:10", "11:3", "11:9", "12:22", "13:14", "14:17", "15:16",
        "15:28", "16:8", "16:23", "16:24", "16:25", "16:29", "16:30",
        "16:34", "17:19", "17:20", "17:21", "17:22", "17:24", "17:26",
        "17:27", "29:10", "29:11", "29:12"
    }},
    {"II Chronicles", {
        "2:5", "2:6", "5:7", "5:12", "5:13", "6:7", "6:12", "6:14",
        "6:19", "7:1", "7:3", "7:14", "7:15", "7:16", "11:16", "12:6",
        "14:11", "15:12", "19:6", "19:7", "20:6", "20:20", "20:21",
        "26:5", "29:30"
    }},
    {"Ezra", {
        "1:2", "1:5", "1:6", "3:3", "3:5", "3:6", "3:10", "3:11",
        "3:12", "5:8", "5:11", "6:7", "6:14", "6:16", "6:22", "7:6",
        "7:10", "8:22", "8:23", "8:31", "9:8", "9:9", "9:13", "9:15",
        "10:1"
    }},
    {"Nehemiah", {
        "1:6", "1:9", "1:10", "2:5", "4:6", "4:14", "4:15", "5:19",
        "6:9", "6:16", "8:3", "8:5", "8:6", "8:9", "8:10", "8:18",
        "9:3", "9:5", "9:6", "9:12", "9:13", "9:15", "9:19", "9:20",
        "9:21"
    }},
    {"Esther", {
        "2:7", "2:17", "2:18", "4:16", "5:3", "7:3", "8:3", "8:4",
        "8:5", "8:6", "8:7", "8:11", "8:15", "8:16", "8:17", "9:1",
        "9:2", "9:3", "9:18", "9:22", "9:23", "9:27", "9:28", "9:30",
        "10:3"
    }},
    {"Job", {
        "1:20", "1:21", "1:22", "5:11", "5:17", "6:14", "8:21", "9:8",
        "9:9", "12:10", "12:13", "12:22", "16:19", "19:25", "22:21", "23:10",
        "23:12", "25:2", "26:7", "26:10", "26:14", "32:8", "33:4", "36:26",
        "42:12"
    }},
    {"Psalms", {
        "12:6", "19:7", "23:1", "23:4", "24:1", "27:1", "27:4", "27:14",
        "34:1", "34:8", "37:4", "42:1", "46:1", "46:10", "51:10", "91:1",
        "91:11", "100:1", "103:1", "111:10", "119:11", "119:105", "127:1",
        "133:1", "139:14"
    }},
    {"Proverbs", {
        "3:5", "3:6", "3:9", "3:12", "4:6", "4:18", "4:23", "8:11",
        "9:10", "9:11", "11:18", "12:14", "12:16", "15:16", "15:17",
        "16:3", "16:9", "16:19", "16:20", "17:22", "18:24", "22:1",
        "23:24", "28:13", "31:8"
    }},
    {"Ecclesiastes", {
        "1:5", "1:9", "3:11", "3:12", "3:14", "3:20", "4:6", "4:13",
        "5:2", "5:19", "7:8", "7:9", "7:11", "7:12", "8:12", "8:15",
        "9:1", "9:17", "9:18", "10:10", "10:12", "11:5", "11:7",
        "12:10", "12:13"
    }},
        {"Song of Solomon", {
        "1:5", "1:15", "2:1", "2:3", "2:5", "2:7", "2:9", "2:12",
        "2:14", "2:16", "4:3", "4:7", "4:11", "4:16", "5:8", "5:10",
        "5:12", "5:14", "5:15", "5:16", "7:5", "7:6", "7:10", "8:6",
        "8:7"
    }},
    {"Isaiah", {
        "1:18", "2:2", "7:14", "9:6", "11:6", "14:12", "26:3", "40:8",
        "40:28", "40:31", "41:10", "42:1", "43:1", "44:6", "48:17", "52:7",
        "53:4", "53:5", "53:6", "55:1", "55:8", "58:6", "59:1", "61:1",
        "65:17"
    }},
    {"Jeremiah", {
        "1:5", "1:8", "1:9", "1:19", "2:2", "7:23", "9:24", "10:12",
        "15:16", "17:7", "17:10", "17:14", "23:5", "23:24", "24:7", "29:11",
        "29:13", "30:17", "31:3", "31:12", "31:13", "31:31", "31:33", "32:17",
        "32:27"
    }},
    {"Lamentations", {
        "1:14", "1:15", "1:18", "2:1", "2:6", "2:10", "2:13", "2:18",
        "2:19", "3:1", "3:17", "3:22", "3:23", "3:24", "3:25", "3:26",
        "3:32", "3:37", "3:38", "3:40", "3:57", "3:58", "3:59", "5:19",
        "5:21"
    }},
    {"Ezekiel", {
        "1:27", "1:28", "2:6", "3:12", "10:4", "11:17", "11:19", "11:20",
        "11:22", "17:23", "17:24", "18:22", "18:23", "18:27", "18:32", 
        "20:12", "21:26", "34:11", "34:26", "36:24", "36:26", "36:27",
        "37:26", "39:29", "43:2"
    }},
    {"Daniel", {
        "2:22", "3:26", "3:28", "4:2", "4:3", "5:29", "6:3", "6:4",
        "6:11", "6:16", "6:22", "6:23", "6:26", "6:27", "7:13", 
        "7:18", "9:4", "9:9", "9:17", "9:18", "9:19", "10:6", 
        "10:12", "12:3", "12:13"
    }},
    {"Hosea", {
        "1:7", "1:10", "2:19", "2:23", "3:1", "3:5", "6:1", "6:2",
        "6:3", "6:6", "7:6", "8:2", "10:12", "11:1", "11:4", "12:5",
        "12:6", "12:9", "12:13", "13:4", "13:5", "14:2", "14:4", 
        "14:5", "14:9"
    }},
    {"Joel", {
        "1:6", "1:9", "1:10", "1:12", "1:13", "1:14", "1:16", "1:17",
        "1:18", "1:20", "2:1", "2:12", "2:13", "2:18", "2:21", "2:23",
        "2:26", "2:27", "2:28", "2:29", "2:32", "3:16", "3:17", "3:18",
        "3:20"
    }},
        {"Amos", {
        "2:6", "3:7", "4:6", "4:8", "4:12", "4:13", "5:4", "5:6",
        "5:8", "5:13", "5:14", "5:15", "5:20", "5:23", "5:24", "6:12",
        "7:4", "7:5", "7:6", "8:2", "8:11", "8:12", "9:6", "9:11",
        "9:15"
    }},
    {"Obadiah", {
        "1:1", "1:2", "1:3", "1:4", "1:5", "1:6", "1:7", "1:8",
        "1:9", "1:10", "1:11", "1:12", "1:13", "1:14", "1:15", "1:16",
        "1:17", "1:18", "1:19", "1:20", "1:21"
    }},
    {"Jonah", {
        "1:1", "1:2", "1:3", "1:9", "1:12", "1:13", "1:14", "1:15",
        "1:16", "1:17", "2:1", "2:2", "2:6", "2:7", "3:2", "3:3",
        "3:8", "3:9", "3:10", "4:2", "4:3", "4:4", "4:6", "4:7", "4:10"
    }},
    {"Micah", {
        "1:3", "2:1", "2:2", "2:7", "2:13", "4:1", "4:2", "4:4",
        "4:5", "4:7", "4:13", "5:2", "5:4", "5:15", "6:2", "6:4",
        "6:7", "6:8", "7:3", "7:7", "7:8", "7:15", "7:18", "7:19", "7:20"
    }},
    {"Nahum", {
        "1:1", "1:2", "1:3", "1:4", "1:5", "1:6", "1:7", "1:8",
        "1:9", "1:10", "1:11", "1:12", "1:13", "1:14", "1:15", "2:1",
        "2:2", "2:3", "2:4", "2:5", "2:6", "2:7", "2:8", "2:9", "2:10"
    }},
    {"Habakkuk", {
        "1:1", "1:3", "1:4", "1:5", "1:12", "1:13", "1:14", "2:3",
        "2:4", "2:9", "2:10", "2:14", "2:20", "3:1", "3:2", "3:3",
        "3:4", "3:5", "3:6", "3:7", "3:8", "3:9", "3:13", "3:18", "3:19"
    }},
    {"Zephaniah", {
        "1:2", "1:3", "1:4", "1:7", "1:12", "1:14", "1:15", "1:18",
        "2:3", "2:7", "2:9", "2:10", "2:11", "2:15", "3:5", "3:8",
        "3:9", "3:11", "3:12", "3:13", "3:14", "3:15", "3:17", "3:19", "3:20"
    }},
    {"Haggai", {
        "1:1", "1:2", "1:3", "1:4", "1:5", "1:6", "1:7", "1:8", "1:9", "1:10",
        "1:11", "1:12", "1:13", "1:14", "1:15", "2:3", "2:4", "2:5", "2:6", "2:7",
        "2:8", "2:9", "2:13", "2:14", "2:17"
    }},
    {"Zechariah", {
        "1:3", "1:4", "1:12", "1:14", "1:15", "1:16", "1:17", "2:5", "2:10", "3:5",
        "3:7", "3:9", "4:6", "7:9", "7:10", "8:9", "8:11", "8:12", "8:13", "9:9",
        "9:12", "9:16", "9:17", "10:12", "14:9"
    }},
    {"Malachi", {
        "1:5", "1:8", "1:10", "1:11", "1:14", "2:5", "2:6", "2:10", "2:16", "3:1",
        "3:4", "3:6", "3:8", "3:9", "3:10", "3:11", "3:12", "3:14", "3:15", "3:16",
        "3:17", "3:18", "4:1", "4:2", "4:5"
    }},
    {"Matthew", {
        "1:18", "1:21", "4:1", "5:3", "5:7", "5:13", "5:14", "5:16", "5:17", "6:9",
        "6:19", "6:25", "6:33", "7:1", "7:7", "7:8", "7:13", "7:21", "11:28", "16:18",
        "18:15", "22:37", "25:31", "28:18", "28:19"
    }},
    {"Mark", {
        "1:10", "1:15", "2:27", "7:21", "8:31", "8:34", "8:36", "9:1", "9:2", "9:23",
        "9:43", "10:45", "11:22", "11:23", "11:24", "11:25", "12:30", "13:32", "14:22", "15:34",
        "16:15", "16:16", "16:17", "16:18", "16:19"
    }},
    {"Luke", {
        "1:14", "1:32", "1:35", "1:37", "2:52", "4:18", "6:20", "6:27", "6:31", "6:38",
        "6:46", "9:1", "9:23", "10:27", "11:13", "12:15", "12:32", "19:10", "22:19", "23:34",
        "23:43", "24:39", "24:44", "24:47", "24:49"
    }},
    {"John", {
        "1:1", "1:3", "1:9", "1:12", "1:14", "1:29", "2:15", "3:3", "3:5", "3:16",
        "3:18", "4:24", "5:24", "8:58", "10:10", "11:25", "13:34", "14:1", "14:6", "14:15",
        "14:16", "14:26", "15:5", "16:13", "17:3"
    }},
        {"Acts", {
        "1:5", "1:8", "2:4", "2:17", "2:21", "2:22", "2:23", "2:36", "2:38", "2:41",
        "2:42", "3:19", "4:12", "4:32", "5:29", "10:34", "10:38", "16:31", "17:24", "17:26",
        "17:28", "17:30", "20:24", "20:28", "20:35"
    }},
        {"Romans", {
        "1:6", "1:16", "1:20", "3:10", "3:23", "5:1", "5:6", "5:8", "6:4", "6:23",
        "8:1", "8:9", "8:14", "8:16", "8:18", "8:26", "8:28", "8:29", "8:31", "10:9",
        "12:1", "12:2", "12:3", "13:1", "15:4"
    }},
    {"I Corinthians", {
        "1:10", "1:18", "2:9", "2:14", "3:11", "6:7", "6:19", "8:6", "8:9", "9:24",
        "10:13", "10:31", "11:1", "11:3", "11:12", "12:4", "12:12", "12:13", "13:1", "13:4",
        "13:12", "13:13", "15:20", "15:51", "15:58"
    }},
    {"II Corinthians", {
        "1:2", "1:3", "3:4", "3:17", "3:18", "4:16", "5:1", "5:7", "5:10", "5:14",
        "5:17", "5:19", "5:20", "5:21", "6:14", "7:1", "8:9", "9:6", "9:7", "9:10",
        "10:4", "10:5", "12:9", "13:5", "13:14"
    }},
    {"Galatians", {
        "1:10", "2:16", "2:20", "3:10", "3:13", "3:16", "3:24", "3:26", "3:27", "3:28",
        "4:6", "4:7", "5:1", "5:6", "5:13", "5:14", "5:16", "5:17", "5:22", "6:1",
        "6:2", "6:7", "6:9", "6:10", "6:14"
    }},
    {"Ephesians", {
        "1:3", "1:4", "1:7", "1:13", "1:17", "2:8", "2:10", "2:14", "2:19", "3:16",
        "4:1", "4:2", "4:3", "4:29", "4:32", "5:8", "5:18", "5:19", "5:21", "5:25",
        "6:10", "6:11", "6:12", "6:17", "6:18"
    }},
    {"Philippians", {
        "1:3", "1:6", "1:9", "1:10", "1:21", "2:3", "2:4", "2:5", "2:10", "2:15",
        "3:3", "3:8", "3:14", "3:20", "3:21", "4:1", "4:4", "4:5", "4:6", "4:7",
        "4:8", "4:11", "4:13", "4:19", "4:20"
    }},
    {"Colossians", {
        "1:9", "1:15", "1:16", "1:17", "1:18", "1:28", "2:2", "2:6", "2:8", "2:9",
        "2:11", "3:1", "3:2", "3:5", "3:8", "3:11", "3:12", "3:13", "3:15", "3:16",
        "3:17", "3:23", "4:2", "4:5", "4:6"
    }},
    {"I Thessalonians", {
        "2:4", "2:12", "3:7", "3:9", "3:13", "4:1", "4:4", "4:7", "4:8", "4:13",
        "4:15", "4:16", "4:17", "5:6", "5:8", "5:9", "5:10", "5:11", "5:14", "5:15",
        "5:18", "5:19", "5:23", "5:24", "5:28"
    }},
    {"II Thessalonians", {
        "1:3", "1:4", "1:5", "1:6", "1:8", "1:11", "2:3", "2:7", "2:9", "2:13",
        "2:15", "3:1", "3:3", "3:5", "3:6", "3:7", "3:8", "3:9", "3:10", "3:11",
        "3:12", "3:13", "3:14", "3:15", "3:16"
    }},
    {"I Timothy", {
        "1:5", "1:12", "1:16", "1:17", "2:1", "2:5", "2:8", "3:5", "3:13", "3:16",
        "4:1", "4:8", "4:12", "4:16", "5:8", "5:21", "5:22", "5:25", "6:6", "6:7",
        "6:10", "6:11", "6:12", "6:17", "6:18"
    }},
    {"II Timothy", {
        "1:6", "1:7", "1:8", "2:1", "2:3", "2:5", "2:8", "2:9", "2:14", "2:15",
        "2:16", "2:19", "2:22", "2:24", "3:1", "3:5", "3:10", "3:11", "3:12", "3:16",
        "4:5", "4:7", "4:8", "4:18", "4:22"
    }},
    {"Titus", {
        "1:2", "1:7", "1:8", "1:15", "1:16", "2:2", "2:7", "2:8", "2:9", "2:10",
        "2:11", "2:12", "2:13", "2:14", "2:15", "3:1", "3:2", "3:3", "3:4", "3:5",
        "3:6", "3:7", "3:9", "3:10", "3:14"
    }},
    {"Philemon", {
        "1:1", "1:2", "1:3", "1:4", "1:5", "1:6", "1:7", "1:8", "1:9", "1:10",
        "1:11", "1:12", "1:13", "1:14", "1:15", "1:16", "1:17", "1:18", "1:19",
        "1:20", "1:21", "1:22", "1:23", "1:24", "1:25"
    }},
    {"Hebrews", {
        "1:2", "1:3", "1:8", "2:9", "4:12", "4:14", "4:15", "4:16", "6:1",
        "7:25", "9:28", "10:24", "10:25", "11:1", "11:3", "11:6", "12:1",
        "12:2", "12:14", "12:22", "13:1", "13:2", "13:5", "13:8", "13:15"
    }},
    {"James", {
        "1:2", "1:5", "1:7", "1:12", "1:19", "1:22", "1:25", "1:26", "1:27",
        "2:1", "2:8", "2:14", "2:19", "2:26", "3:1", "3:13", "3:17", "4:3",
        "4:4", "4:7", "4:8", "5:7", "5:13", "5:14", "5:16"
    }},
    {"I Peter", {
        "1:3", "1:8", "1:13", "1:15", "1:17", "1:22", "1:23", "2:2", "2:5",
        "2:9", "2:12", "2:24", "3:8", "3:15", "3:18", "4:1", "4:8", "4:10",
        "4:11", "4:12", "5:2", "5:5", "5:6", "5:7", "5:8"
    }},
    {"II Peter", {
        "1:1", "1:2", "1:3", "1:4", "1:5", "1:6", "1:7", "1:8", "1:9",
        "1:10", "1:11", "1:16", "1:17", "1:20", "1:21", "3:1", "3:8",
        "3:9", "3:10", "3:11", "3:12", "3:13", "3:15", "3:17", "3:18"
    }},
    {"I John", {
        "1:1", "1:3", "1:5", "1:7", "1:8", "1:9", "2:1", "2:2", "2:15",
        "2:28", "3:1", "3:2", "3:16", "3:18", "4:1", "4:4", "4:7", "4:8",
        "4:9", "4:10", "4:16", "4:18", "4:19", "5:11", "5:14"
    }},
        {"II John", {
        "1:1", "1:2", "1:3", "1:4", "1:5", "1:6", "1:7", "1:8", "1:9",
        "1:10", "1:11", "1:12", "1:13"
    }},
    {"III John", {
        "1:1", "1:2", "1:3", "1:4", "1:5", "1:6", "1:7", "1:8", "1:9",
        "1:10", "1:11", "1:12", "1:13", "1:14"
    }},
    {"Jude", {
        "1:1", "1:2", "1:3", "1:4", "1:5", "1:6", "1:7", "1:8", "1:9",
        "1:10", "1:11", "1:12", "1:13", "1:14", "1:15", "1:16", "1:17",
        "1:18", "1:19", "1:20", "1:21", "1:22", "1:23", "1:24", "1:25"
    }},
    {"Revelation", {
        "1:3", "1:7", "1:8", "2:10", "3:20", "4:11", "5:9", "7:9", 
        "11:15", "12:7", "12:9", "14:6", "19:11", "20:4", "20:10", 
        "20:11", "20:15", "21:1", "21:2", "21:3", "21:4", "21:8", 
        "21:22", "22:12", "22:17"
    }},
};


#endif
