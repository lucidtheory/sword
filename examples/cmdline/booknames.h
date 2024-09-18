#ifndef BOOKNAMES_H
#define BOOKNAMES_H

#define NUM_BOOKS 66

typedef struct {
    const char* lang;
    struct {
        const char* Genesis;
        const char* Exodus;
        const char* Leviticus;
        const char* Numbers;
        const char* Deuteronomy;
        const char* Joshua;
        const char* Judges;
        const char* Ruth;
        const char* Samuel1;
        const char* Samuel2;
        const char* Kings1;
        const char* Kings2;
        const char* Chronicles1;
        const char* Chronicles2;
        const char* Ezra;
        const char* Nehemiah;
        const char* Esther;
        const char* Job;
        const char* Psalms;
        const char* Proverbs;
        const char* Ecclesiastes;
        const char* SongOfSolomon;
        const char* Isaiah;
        const char* Jeremiah;
        const char* Lamentations;
        const char* Ezekiel;
        const char* Daniel;
        const char* Hosea;
        const char* Joel;
        const char* Amos;
        const char* Obadiah;
        const char* Jonah;
        const char* Micah;
        const char* Nahum;
        const char* Habakkuk;
        const char* Zephaniah;
        const char* Haggai;
        const char* Zechariah;
        const char* Malachi;
        const char* Matthew;
        const char* Mark;
        const char* Luke;
        const char* John;
        const char* Acts;
        const char* Romans;
        const char* Corinthians1;
        const char* Corinthians2;
        const char* Galatians;
        const char* Ephesians;
        const char* Philippians;
        const char* Colossians;
        const char* Thessalonians1;
        const char* Thessalonians2;
        const char* Timothy1;
        const char* Timothy2;
        const char* Titus;
        const char* Philemon;
        const char* Hebrews;
        const char* James;
        const char* Peter1;
        const char* Peter2;
        const char* John1;
        const char* John2;
        const char* John3;
        const char* Jude;
        const char* Revelation;
    } books;
} BookNames;

static BookNames bookNamesData[] = {
    {
    "sq", {
        "Krijimi", "Eksodi", "Levitiku", "Numrat", "Ligji i Përsëritur", 
        "Jozue", "Gjyqtarët", "Ruth", "1 Samuili", "2 Samuili", 
        "1 Mbretërit", "2 Mbretërit", "1 Kronikave", "2 Kronikave", 
        "Ezra", "Nehemia", "Esther", "Jobi", "Psalmet", 
        "Fjalët e Urta", "Predikuesi", "Kënga e Këngëve", "Isaia", 
        "Jeremia", "Lamentimet", "Ezekieli", "Danieli", 
        "Osea", "Joel", "Amosi", "Obadia", "Jona", 
        "Mika", "Nahumi", "Habakuku", "Sefania", "Aggjeu", 
        "Zakaria", "Malakia", "Mateu", "Marku", "Luka", 
        "Gjoni", "Veprat e Apostujve", "Romakëve", "1 Korintasve", 
        "2 Korintasve", "Galatasve", "Efesianëve", "Filipasve", 
        "Kolosasve", "1 Selanikasve", "2 Selanikasve", "1 Timoteut", 
        "2 Timoteut", "Titi", "Filemonit", "Hebrenjve", 
        "Jakobi", "1 Pjetrit", "2 Pjetrit", "1 Gjonit", 
        "2 Gjonit", "3 Gjonit", "Juda", "Zbulesa"
    }
},
{
"my", {
    "ကမ္ဘာဦးကျမ်း",
    "ထွက်မြောက်ရာ",
    "၀တ်ပြုရာ",
    "တောလည်ရာ",
    "တရားဟောရာ",
    "ယောရှု",
    "တရားသူကြီး",
    "ရုသ",
    "ဓမ္မရာဇ၀င်၁",
    "ဓမ္မရာဇ၀င်၂",
    "ဓမ္မရာဇ၀င်၃",
    "ဓမ္မရာဇ၀င်၄",
    "ရာဇ၀င်ချုပ်၁",
    "ရာဇ၀င်ချုပ်၂",
    "ဧဇရ",
    "နေဟမိ",
    "ဧသတာ",
    "ယောဘ",
    "ဆာလံး",
    "ပညာအလိမ္မာ",
    "ဒေသနာ",
    "ရှောလမုန်သီချင်း",
    "ဟေရှာယ",
    "ယေရမိ",
    "ယေရမိမြည်တမ်း",
    "ယေဇကျေလ",
    "ဒံယေလ",
    "ဟောရှေ",
    "ယောလ",
    "အာမုတ်",
    "ဩဗဒိ",
    "ယောန",
    "မိက္ခာ",
    "နာဟုံး",
    "ဟဗက္ကုက်",
    "ဇေဖနိ",
    "ဟဂ္ဂဲ",
    "ဇာခရိ",
    "မာလခိ",
    "ရှင်မာတေး",
    "ရှင်မာကု",
    "ရှင်လုကာ",
    "ရှင်ယောဟန်",
    "တမန်တော်",
    "ရောမ",
    "ကော်ရိန်သု၁",
    "ကော်ရိန်သု၂",
    "ဂါလားတိ",
    "ဧဖက်",
    "ဖိလိပ္ပိ",
    "ကော်လောဆေ",
    "သက်ဆာလောနိက၁",
    "သက်ဆာလောနိက၂",
    "တီမောသီ၁",
    "တီမောသီ၂",
    "တိတု",
    "ဖိလေမုန်",
    "ဟေဗြေ",
    "ရှင်ယာကုပ်",
    "ရှင်ပေတရု၁",
    "ရှင်ပေတရု၂",
    "ရှင်ယောဟန်၁",
    "ရှင်ယောဟန်၂",
    "ရှင်ယောဟန်၃",
    "ရှင်ဂျုဒ",
    "ဗျာဒိတ်"
}
},
{"ceb", {
    "Genesis", "Exodus", "Leviticus", "Mga Numero", "Deuteronomio", 
    "Josue", "Mga Huhukom", "Ruth", "1 Samuel", "2 Samuel", 
    "1 Hari", "2 Hari", "1 Mga Cronica", "2 Mga Cronica", "Ezra", 
    "Nehemias", "Ester", "Job", "Mga Salmo", "Mga Proberbio", 
    "Ecclesiastes", "Awit ni Solomon", "Isaias", "Jeremias", 
    "Mga Panaghoy", "Ezekiel", "Daniel", "Hosea", "Joel", 
    "Amos", "Obadias", "Jonas", "Mikas", "Nahum", 
    "Habakkuk", "Zephaniah", "Haggai", "Zechariah", "Malakias", 
    "Mateo", "Marcos", "Lucas", "Juan", "Mga Buhat", 
    "Mga Taga-Roma", "1 Mga Taga-Corinto", "2 Mga Taga-Corinto", 
    "Mga Taga-Galacia", "Mga Taga-Efeso", "Mga Taga-Filipos", 
    "Mga Taga-Colosas", "1 Mga Taga-Tesalonica", "2 Mga Taga-Tesalonica", 
    "1 Timoteo", "2 Timoteo", "Tito", "Filemon", 
    "Mga Hebreo", "Santiago", "1 Pedro", "2 Pedro", 
    "1 Juan", "2 Juan", "3 Juan", "Judas", "Rebelasyon"
}},
{
    "zh-Hant", {
        "創世紀", "出埃及記", "利未記", "民數記", "申命記", 
        "約書亞記", "士師記", "路得記", "撒母耳記上", "撒母耳記下", 
        "列王紀上", "列王紀下", "歷代志上", "歷代志下", 
        "以斯拉記", "尼希米記", "以斯帖記", "約伯記", "詩篇", 
        "箴言", "傳道書", "雅歌", "以賽亞書", 
        "耶利米書", "耶利米哀歌", "以西結書", "但以理書", 
        "何西阿書", "約珥書", "阿摩司書", "俄巴底亞書", "約拿書", 
        "彌迦書", "那鴻書", "哈巴谷書", "西番雅書", "哈該書", 
        "撒迦利亞書", "瑪拉基書", "馬太福音", "馬可福音", "路加福音", 
        "約翰福音", "使徒行傳", "羅馬書", "哥林多前書", 
        "哥林多後書", "加拉太書", "以弗所書", "腓立比書", 
        "歌羅西書", "帖撒羅尼迦前書", "帖撒羅尼迦後書", "提摩太前書", 
        "提摩太後書", "提多書", "腓利門書", "希伯來書", 
        "雅各書", "彼得前書", "彼得後書", "約翰一書", 
        "約翰二書", "約翰三書", "猶大書", "啟示錄"
    }
},
{
    "zh-Hans", {
        "创世纪", "出埃及记", "利未记", "民数记", "申命记", 
        "约书亚记", "士师记", "路得记", "撒母耳记上", "撒母耳记下", 
        "列王纪上", "列王纪下", "历代志上", "历代志下", 
        "以斯拉记", "尼希米记", "以斯帖记", "约伯记", "诗篇", 
        "箴言", "传道书", "雅歌", "以赛亚书", 
        "耶利米书", "耶利米哀歌", "以西结书", "但以理书", 
        "何西阿书", "约珥书", "阿摩司书", "俄巴底亚书", "约拿书", 
        "弥迦书", "那鸿书", "哈巴谷书", "西番雅书", "哈该书", 
        "撒迦利亚书", "玛拉基书", "马太福音", "马可福音", "路加福音", 
        "约翰福音", "使徒行传", "罗马书", "哥林多前书", 
        "哥林多后书", "加拉太书", "以弗所书", "腓立比书", 
        "歌罗西书", "帖撒罗尼迦前书", "帖撒罗尼迦后书", "提摩太前书", 
        "提摩太后书", "提多书", "腓利门书", "希伯来书", 
        "雅各书", "彼得前书", "彼得后书", "约翰一书", 
        "约翰二书", "约翰三书", "犹大书", "启示录"
    }
},
{
    "hr", {
        "Postanak", "Izlazak", "Levitski zakonik", "Brojevi", "Ponovljeni zakon", 
        "Jošua", "Suci", "Ruth", "1 Samuelova", "2 Samuelova", 
        "1 Kraljevska", "2 Kraljevska", "1 Ljetopisa", "2 Ljetopisa", 
        "Ezra", "Nehemija", "Estera", "Job", "Psalam", 
        "Izreke", "Propovjednik", "Pjesma nad pjesmama", "Isaija", "Jeremija", 
        "Plač", "Ezekiel", "Daniel", "Hošea", "Jošua", 
        "Amos", "Obadija", "Jona", "Mihej", "Nahum", 
        "Habakuk", "Sefanija", "Hagaj", "Zaharija", "Malahija", 
        "Matej", "Marko", "Luka", "Ivan", "Djela apostolska", 
        "Rimljanima", "1 Korinćanima", "2 Korinćanima", "Galaćanima", "Efežanima", 
        "Filipljanima", "Kolosanima", "1 Solunjanima", "2 Solunjanima", 
        "1 Timoteju", "2 Timoteju", "Titu", "Filemonu", 
        "Hebrejima", "Jakov", "1 Petar", "2 Petar", 
        "1 Ivan", "2 Ivan", "3 Ivan", "Juda", "Otkrivenje"
    }
},
    {
    "da", {
        "Genesis", "2. Mosebog", "3. Mosebog", "4. Mosebog", "5. Mosebog", 
        "Josva", "Dommerne", "Rut", "1. Samuelsbog", "2. Samuelsbog", 
        "1. Kongebog", "2. Kongebog", "1. Krønikebog", "2. Krønikebog", 
        "Ezra", "Nehemias", "Esther", "Job", "Salmernes Bog", 
        "Ordsprogene", "Prædikerens Bog", "Højsangen", "Esajas", "Jeremias", 
        "Klagesangene", "Ezekiel", "Daniel", "Hoseas", "Joel", 
        "Amos", "Obadja", "Jona", "Mika", "Nahum", 
        "Habakkuk", "Sefanias", "Haggai", "Zacharias", "Malakias", 
        "Matthæus", "Markus", "Lukas", "Johannes", "Apostlenes Gerninger", 
        "Romerbrevet", "1. Korintherbrev", "2. Korintherbrev", "Galaterbrevet", 
        "Efeserne", "Filipperne", "Kolossenserne", "1. Thessalonikerbrev", 
        "2. Thessalonikerbrev", "1. Timotheusbrev", "2. Timotheusbrev", 
        "Titusbrev", "Filemon", "Hebræerne", "Jakob", "1. Petersbrev", 
        "2. Petersbrev", "1. Johannesbrev", "2. Johannesbrev", "3. Johannesbrev", 
        "Judas", "Åbenbaringen"
    }
},
{
    "fi", {
        "1. Mooseksen kirja", "2. Mooseksen kirja", "3. Mooseksen kirja", "4. Mooseksen kirja", "5. Mooseksen kirja", 
        "Joosua", "Tuomarien kirja", "Ruth", "1. Samuelin kirja", "2. Samuelin kirja", 
        "1. Kuninkaiden kirja", "2. Kuninkaiden kirja", "1. Aikakirja", "2. Aikakirja", 
        "Esra", "Neemia", "Esther", "Job", "Psalmit", 
        "Sananlaskut", "Saarnaja", "Laulujen laulu", "Jesaja", "Jeremia", 
        "Valitusvirret", "Hesekiel", "Daniel", "Hosea", "Joel", 
        "Amos", "Obadja", "Joona", "Miika", "Nahum", 
        "Habakuk", "Sefanja", "Haggai", "Sakaria", "Malakia", 
        "Matteus", "Markus", "Luukas", "Johannes", "Apostolien teot", 
        "Roomalaiskirje", "1. Korinttilaiskirje", "2. Korinttilaiskirje", "Galatalaiskirje", "Efesolaiskirje", 
        "Filippiläiskirje", "Kolosalaiskirje", "1. Tessalonikalaiskirje", "2. Tessalonikalaiskirje", 
        "1. Timoteuskirje", "2. Timoteuskirje", "Titus", "Filemon", 
        "Heprealaiskirje", "Jaakobin kirje", "1. Pietarin kirje", "2. Pietarin kirje", 
        "1. Johanneksen kirje", "2. Johanneksen kirje", "3. Johanneksen kirje", "Jude", "Ilmestyskirja"
    }
},
{
    "fr", {
        "Genèse", "Exode", "Lévitique", "Nombres", "Deutéronome", 
        "Josué", "Juges", "Ruth", "1 Samuel", "2 Samuel", 
        "1 Rois", "2 Rois", "1 Chroniques", "2 Chroniques", 
        "Esdras", "Néhémie", "Esther", "Job", "Psaumes", 
        "Proverbes", "Ecclésiaste", "Cantique des cantiques", "Ésaïe", "Jérémie", 
        "Lamentations", "Ézéchiel", "Daniel", "Osée", "Joël", 
        "Amos", "Obadia", "Jonas", "Michée", "Nahum", 
        "Habacuc", "Sophonie", "Aggée", "Zacharie", "Malachie", 
        "Matthieu", "Marc", "Luc", "Jean", "Actes des apôtres", 
        "Romains", "1 Corinthiens", "2 Corinthiens", "Galates", "Éphésiens", 
        "Philippiens", "Colossiens", "1 Thessaloniciens", "2 Thessaloniciens", 
        "1 Timothée", "2 Timothée", "Tite", "Philemon", 
        "Hébreux", "Jacques", "1 Pierre", "2 Pierre", 
        "1 Jean", "2 Jean", "3 Jean", "Jude", "Apocalypse"
    }
},
{
    "de", {
        "Genesis", "2. Mose", "3. Mose", "4. Mose", "5. Mose", 
        "Josua", "Richter", "Ruth", "1. Samuel", "2. Samuel", 
        "1. Könige", "2. Könige", "1. Chronik", "2. Chronik", 
        "Esra", "Nehemia", "Esther", "Hiob", "Psalmen", 
        "Sprüche", "Prediger", "Hohelied", "Jesaja", "Jeremia", 
        "Klagelieder", "Hesekiel", "Daniel", "Hosea", "Joel", 
        "Amos", "Obadja", "Jona", "Micha", "Nahum", 
        "Habakuk", "Zephanja", "Haggai", "Sacharja", "Maleachi", 
        "Matthäus", "Markus", "Lukas", "Johannes", "Apostelgeschichte", 
        "Römer", "1. Korinther", "2. Korinther", "Galater", "Epheser", 
        "Philipper", "Kolosser", "1. Thessalonicher", "2. Thessalonicher", 
        "1. Timotheus", "2. Timotheus", "Titus", "Philemon", 
        "Hebräer", "Jakobus", "1. Petrus", "2. Petrus", 
        "1. Johannes", "2. Johannes", "3. Johannes", "Judas", "Offenbarung"
    }
},
{
    "ht", {
        "Jenèz", "Egzòd", "Levitik", "Nimewo", "Deteronòm", 
        "Jozye", "Jij", "Rout", "1 Samyèl", "2 Samyèl", 
        "1 Wa", "2 Wa", "1 Kwonik", "2 Kwonik", 
        "Ezra", "Nehemi", "Ester", "Job", "Sòm", 
        "Pwovèb", "Eklesiastik", "Kanta kantik", "Ezayi", "Jeremi", 
        "Kondoleyans", "Ezekyèl", "Daniel", "Ozea", "Jòl", 
        "Amòs", "Obadya", "Jona", "Mika", "Nahòm", 
        "Habakouk", "Sefani", "Agay", "Zekarya", "Malaki", 
        "Matye", "Mark", "Lik", "Jan", "Travay Apot", 
        "Woman", "1 Korentyen", "2 Korentyen", "Galat", "Efezyen", 
        "Filipyen", "Kolosyen", "1 Tesaloniken", "2 Tesaloniken", 
        "1 Timote", "2 Timote", "Tit", "Filemon", 
        "Ebre", "Jak", "1 Pyè", "2 Pyè", 
        "1 Jan", "2 Jan", "3 Jan", "Jida", "Revelasyon"
    }
},
{
    "hu", {
        "1. Mózes", "2. Mózes", "3. Mózes", "4. Mózes", "5. Mózes", 
        "Józsué", "Bírák", "Ruth", "1. Sámuel", "2. Sámuel", 
        "1. Királyok", "2. Királyok", "1. Krónikák", "2. Krónikák", 
        "Ezrá", "Nehemiás", "Eszter", "Jób", "Zsoltárok", 
        "Példabeszédek", "Prédikátor", "Énekek éneke", "Ézsaiás", "Jeremiás", 
        "Jeremiás siralmai", "Ezekiel", "Dániel", "Hóseás", "Joel", 
        "Amós", "Obádia", "Jónás", "Miká", "Nahum", 
        "Habakuk", "Szefánia", "Haggai", "Zakariás", "Malakiás", 
        "Máté", "Márk", "Lukács", "János", "Apostolok cselekedetei", 
        "Rómaiakhoz", "1. Korinthusiakhoz", "2. Korinthusiakhoz", "Galatákhoz", 
        "Efezusiakhoz", "Filippiekhez", "Kolosséiakhoz", "1. Thesszalonikaiakhoz", 
        "2. Thesszalonikaiakhoz", "1. Timóteushoz", "2. Timóteushoz", 
        "Titushoz", "Filemónhoz", "Zsidókhoz", "Jakab", "1. Péterhez", 
        "2. Péterhez", "1. Jánoshoz", "2. Jánoshoz", "3. Jánoshoz", 
        "Júdás", "Jelenések könyve"
    }
},
{
    "it", {
        "Genesi", "Esodo", "Levitico", "Numeri", "Deuteronomio", 
        "Giosuè", "Giudici", "Rut", "1 Samuele", "2 Samuele", 
        "1 Re", "2 Re", "1 Cronache", "2 Cronache", 
        "Esdra", "Neemia", "Esther", "Giobbe", "Salmi", 
        "Proverbi", "Ecclesiaste", "Cantico dei Cantici", "Isaia", 
        "Geremia", "Lamentazioni", "Ezechiele", "Daniele", 
        "Osea", "Gioele", "Amos", "Obadia", "Giona", 
        "Michea", "Naum", "Abacuc", "Sofonia", "Aggèo", 
        "Zaccaria", "Malachia", "Matteo", "Marco", "Luca", 
        "Giovanni", "Atti degli Apostoli", "Romani", "1 Corinzi", 
        "2 Corinzi", "Galati", "Efesini", "Filippesi", 
        "Colossesi", "1 Tessalonicesi", "2 Tessalonicesi", 
        "1 Timoteo", "2 Timoteo", "Tito", "Filemone", 
        "Ebrei", "Giacomo", "1 Pietro", "2 Pietro", 
        "1 Giovanni", "2 Giovanni", "3 Giovanni", "Giuda", "Apocalisse"
    }
},
{
    "ja", {
        "創世記", "出エジプト記", "レビ記", "民数記", "申命記", 
        "ヨシュア記", "士師記", "ルツ記", "サムエル記Ⅰ", "サムエル記Ⅱ", 
        "列王記Ⅰ", "列王記Ⅱ", "歴代誌Ⅰ", "歴代誌Ⅱ", 
        "エズラ記", "ネヘミヤ記", "エステル記", "ヨブ記", "詩篇", 
        "箴言", "伝道の書", "雅歌", "イザヤ書", "エレミヤ書", 
        "哀歌", "エゼキエル書", "ダニエル書", "ホセア書", "ヨエル書", 
        "アモス書", "オバデヤ書", "ヨナ書", "ミカ書", "ナホム書", 
        "ハバクク書", "ゼファニヤ書", "ハガイ書", "ゼカリヤ書", "マラキ書", 
        "マタイによる福音書", "マルコによる福音書", "ルカによる福音書", "ヨハネによる福音書", "使徒言行録", 
        "ローマの信徒への手紙", "コリントの信徒への手紙Ⅰ", "コリントの信徒への手紙Ⅱ", "ガラテヤの信徒への手紙", 
        "エフェソの信徒への手紙", "ピリピの信徒への手紙", "コロサイの信徒への手紙", "テサロニケの信徒への手紙Ⅰ", 
        "テサロニケの信徒への手紙Ⅱ", "ティモテへの手紙Ⅰ", "ティモテへの手紙Ⅱ", "テトスへの手紙", "フィレモンへの手紙", 
        "ヘブライ人への手紙", "ヤコブの手紙", "ペトロの手紙Ⅰ", "ペトロの手紙Ⅱ", 
        "ヨハネの手紙Ⅰ", "ヨハネの手紙Ⅱ", "ヨハネの手紙Ⅲ", "ユダの手紙", "ヨハネの黙示録"
    }
},
{
    "ko", {
        "창세기", "출애굽기", "레위기", "민수기", "신명기", 
        "여호수아", "사사기", "룻기", "사무엘상", "사무엘하", 
        "열왕기상", "열왕기하", "역대상", "역대하", 
        "에스라", "느헤미야", "에스더", "욥기", "시편", 
        "잠언", "전도서", "아가", "이사야", "예레미야", 
        "예레미야 애가", "에스겔", "다니엘", "호세아", "요엘", 
        "아모스", "오바댜", "요나", "미가", "나훔", 
        "하박국", "스바냐", "학개", "스가랴", "말라기", 
        "마태복음", "마가복음", "누가복음", "요한복음", "사도행전", 
        "로마서", "고린도전서", "고린도후서", "갈라디아서", 
        "에베소서", "빌립보서", "골로새서", "데살로니가전서", 
        "데살로니가후서", "디모데전서", "디모데후서", "디도서", "빌레몬서", 
        "히브리서", "야고보서", "베드로전서", "베드로후서", 
        "요한일서", "요한이서", "요한삼서", "유다서", "요한계시록"
    }
},
{
    "lv", {
        "1. Mozus", "2. Mozus", "3. Mozus", "4. Mozus", "5. Mozus", 
        "Jošua", "Sodi", "Ruth", "1. Samuēla", "2. Samuēla", 
        "1. Ķēnišu", "2. Ķēnišu", "1. Laiku", "2. Laiku", 
        "Ezra", "Nehemija", "Estere", "Ījaba", "Psalmi", 
        "Sakāmvārdi", "Ecēziasts", "Sānu dziesma", "Jesaja", "Jeremija", 
        "Sēras", "Ezekiels", "Daniēls", "Hozija", "Joēls", 
        "Amoss", "Abadija", "Jona", "Mihas", "Nahums", 
        "Habakuks", "Sefanija", "Hagajs", "Zaharija", "Malahija", 
        "Matejs", "Markuss", "Lūka", "Jānis", "Apustuļu darbi", 
        "Romiešiem", "1. Korintiešiem", "2. Korintiešiem", "Galatiešiem", 
        "Efeziešiem", "Filipiešiem", "Kolosiešiem", "1. Tesaloniķiešiem", 
        "2. Tesaloniķiešiem", "1. Timotejam", "2. Timotejam", 
        "Titam", "Filemons", "Ebrejiem", "Jēkabs", "1. Pētera", 
        "2. Pētera", "1. Jāņa", "2. Jāņa", "3. Jāņa", 
        "Juda", "Atklāsmes grāmata"
    }
},
{
"mlf", {
    "ആദികാംഷം", "എക്സോഡസ്", "ലേവിയക്കോശം", "സംഖ്യാകാനോശം", "ദ്വിതീയോത്തരനം", 
    "യോഷുവ", "ന്യായാധികരണമാർ", "റൂത്ത്", "1. സമുവേൽ", "2. സമുവേൽ", 
    "1. രാജാക്കന്മാർ", "2. രാജാക്കന്മാർ", "1. ക്രോണിക്കലുകൾ", "2. ക്രോണിക്കലുകൾ",
    "എസ്ര", "നേഹെമ്യ", "എസ്റ്റർ", "യോബ്", "സങ്കീർത്തനങ്ങൾ", 
    "സൂത്രവാക്യങ്ങൾ", "പ്രാസംഗികം", "ശ്രേഷ്ഠസംഗീതം", "ഇശയ", "യിരെമ്യ", 
    "വിപത്തിക്കാരണം", "ഏസേക്കീല്", "ദാനിയേൽ", "ഹോസെയ", "യോവേല്", 
    "ആമോസ്", "ഒബദ്യാ", "യോന", "മിക്ക", "നാഹും", 
    "ഹബക്കൂക്ക്", "സെഫന്യ", "ഹഗ്ഗായി", "സഖര്യ", "മലാചി", 
    "മത്തായി", "മർക്കോസ്", "ലൂക്കാ", "യോഹന്നാൻ", "അപസ്തോലരുടെ പ്രവർത്തികൾ", 
    "റോമ", "1. കൊറിന്ത്യർ", "2. കൊറിന്ത്യർ", "ഗലാത്ത്യർ", 
    "എഫസ്യർ", "ഫിലിപ്പ്യർ", "കൊളസ്സ്യർ", "1. തെസ്സലോണിക്ക", 
    "2. തെസ്സലോണിക്ക", "1. തീമോതെ", "2. തീമോതെ", "ടിറ്റസ്", "ഫിലേമോൻ", 
    "എബ്രയർ", "ജാക്കോബ്ബ്", "1. പീറ്റർ", "2. പീറ്റർ", 
    "1. ജോൺ", "2. ജോൺ", "3. ജോൺ", "ജുഡ", "അപോകലിപ്സ്"
}
},
{
    "mg", {
        "Genesis", "Eksodosy", "Levitikosy", "Nomery", "Deoteronomia", 
        "Josoa", "Mpitsara", "Rota", "1 Samoela", "2 Samoela", 
        "1 Mpanjaka", "2 Mpanjaka", "1 Tantara", "2 Tantara", 
        "Ezra", "Nehemi", "Estera", "Joba", "Salamo", 
        "Ohabolana", "Mpitoriteny", "Hira lehibe", "Isaia", "Jeremia", 
        "Fakamoivoizana", "Ezekiela", "Daniel", "Ose", "Joela", 
        "Amosa", "Obadia", "Jona", "Mika", "Nahoma", 
        "Habakoka", "Sefania", "Hagaia", "Zakaria", "Malakia", 
        "Matie", "Marka", "Luka", "Jaona", "Asan'ny Apostoly", 
        "Romana", "1 Korintiana", "2 Korintiana", "Galatiana", 
        "Efesiana", "Filipiana", "Kolosa", "1 Tesaloniana", 
        "2 Tesaloniana", "1 Timoty", "2 Timoty", "Titosa", "Filemona", 
        "Hebreo", "Jakoba", "1 Petera", "2 Petera", 
        "1 Jaona", "2 Jaona", "3 Jaona", "Joda", "Apokalypsy"
    }
},
{
    "nl", {
        "Genesis", "Exodus", "Leviticus", "Numeri", "Deuteronomium", 
        "Jozua", "Richteren", "Ruth", "1 Samuel", "2 Samuel", 
        "1 Koningen", "2 Koningen", "1 Kronieken", "2 Kronieken", 
        "Ezra", "Nehemia", "Esther", "Job", "Psalmen", 
        "Spreuken", "Prediker", "Hooglied", "Jesaja", "Jeremia", 
        "Klaagliederen", "Ezechiël", "Daniel", "Hosea", "Joel", 
        "Amos", "Obadja", "Jona", "Micha", "Nahum", 
        "Habakuk", "Sefanja", "Haggai", "Zacharia", "Maleachi", 
        "Mattheüs", "Markus", "Lucas", "Johannes", "Handelingen", 
        "Romeinen", "1 Korinthiërs", "2 Korinthiërs", "Galaten", 
        "Efeziërs", "Filippenzen", "Kolossenzen", "1 Tessalonicenzen", 
        "2 Tessalonicenzen", "1 Timotheüs", "2 Timotheüs", "Titus", 
        "Filemon", "Hebreeën", "Jakobus", "1 Petrus", "2 Petrus", 
        "1 Johannes", "2 Johannes", "3 Johannes", "Judas", "Openbaring"
    }
},
{
    "nn", {
        "1. Mosebok", "2. Mosebok", "3. Mosebok", "4. Mosebok", "5. Mosebok", 
        "Josva", "Dommarboka", "Rut", "Første Samuelsbok", "Andre Samuelsbok", 
        "Første Kongebok", "Andre Kongebok", "Første Krønikebok", "Andre Krønikebok", 
        "Esra", "Nehemja", "Esther", "Job", "Salmane", 
        "Ordspråka", "Presten", "Høgsongen", "Jesaja", "Jeremia", 
        "Klagebøkene", "Esekiel", "Daniel", "Hosea", "Joel", 
        "Amos", "Obadja", "Jona", "Mika", "Nahum", 
        "Habakkuk", "Sefanja", "Haggai", "Sakarja", "Malaki", 
        "Matteus", "Markus", "Lukas", "Johannes", "Apostelgjerningane", 
        "Romerbrevet", "Første Korintarbrev", "Andre Korintarbrev", "Galatarbrevet", 
        "Efesarbrevet", "Filipparbrevet", "Kolossarbrevet", "Første Tessalonikarbrev", 
        "Andre Tessalonikarbrev", "Første Timoteusbrev", "Andre Timoteusbrev", 
        "Titusbrevet", "Filemonbrevet", "Hebrearbrevet", "Jakobsbrev", "Første Petersbrev", 
        "Andre Petersbrev", "Første Johannesbrev", "Andre Johannesbrev", "Tredje Johannesbrev", 
        "Judasbrev", "Openberringa"
    }
},
{
    "nb", {
        "Genesis", "Andre Mosebok", "Tredje Mosebok", "Fjerde Mosebok", "Femte Mosebok", 
        "Josva", "Dommerne", "Rut", "Første Samuel", "Andre Samuel", 
        "Første Kongebok", "Andre Kongebok", "Første Krønikebok", "Andre Krønikebok", 
        "Esra", "Nehemja", "Esther", "Job", "Salmenes bok", 
        "Ordspråkene", "Forkynneren", "Høysangen", "Jesaja", "Jeremia", 
        "Klagene", "Esekiel", "Daniel", "Hosea", "Joel", 
        "Amos", "Obadja", "Jona", "Mika", "Nahum", 
        "Habakkuk", "Sefanja", "Haggai", "Sakarias", "Malaki", 
        "Matteus", "Markus", "Lukas", "Johannes", "Apostlenes gjerninger", 
        "Romerbrevet", "Første Korinterbrev", "Andre Korinterbrev", "Galaterbrevet", 
        "Efeserbrevet", "Filipperbrevet", "Kolosserbrevet", "Første Tessalonikerbrev", 
        "Andre Tessalonikerbrev", "Første Timoteusbrev", "Andre Timoteusbrev", 
        "Titusbrevet", "Filemonbrevet", "Hebreerbrevet", "Jakobs brev", "Første Petersbrev", 
        "Andre Petersbrev", "Første Johannesbrev", "Andre Johannesbrev", "Tredje Johannesbrev", 
        "Judas brev", "Johannes åpenbaring"
    }
},
{
    "pl", {
        "Rodzaju", "Wyjścia", "Kapłańska", "Liczb", "Powtórzonego Prawa", 
        "Jozuego", "Sędziów", "Rut", "1 Samuela", "2 Samuela", 
        "1 Królewska", "2 Królewska", "1 Kronik", "2 Kronik", 
        "Ezdrasza", "Nehemiasza", "Estery", "Hioba", "Psalmów", 
        "Przypowieści", "Kaznodziei", "Pieśń nad Pieśniami", "Izajasza", 
        "Jeremiasza", "Lamentacji", "Ezechiela", "Daniela", 
        "Ozeasza", "Joela", "Amosa", "Obadiasza", "Jonasza", 
        "Micheasza", "Nahuma", "Habakuka", "Sofoniasza", "Aggeusza", 
        "Zachariasza", "Malachiasza", "Mateusza", "Marka", "Łukasza", 
        "Jana", "Dzieje Apostolskie", "Rzymian", "1 Koryntian", 
        "2 Koryntian", "Galatów", "Efezjan", "Filipian", 
        "Kolosan", "1 Tesaloniczan", "2 Tesaloniczan", "1 Tymoteusza", 
        "2 Tymoteusza", "Tytusa", "Filemona", "Hebrajczyków", 
        "Jakuba", "1 Piotra", "2 Piotra", "1 Jana", 
        "2 Jana", "3 Jana", "Judy", "Apokalipsa"
    }
},
{
    "ru", {
        "Бытие", "Исход", "Левит", "Числа", "Второзаконие", 
        "Иисус Навин", "Судьи", "Руфь", "1 Царств", "2 Царств", 
        "1 Книга Царств", "2 Книга Царств", "1 Паралипоменон", "2 Паралипоменон", 
        "Ездра", "Неемия", "Есфирь", "Иов", "Псалтирь", 
        "Притчи", "Екклесиаст", "Песнь Песней", "Исаия", "Иеремия", 
        "Плач Иеремии", "Иезекииль", "Даниил", "Осия", "Иоиль", 
        "Амос", "Авдий", "Иона", "Михей", "Наум", 
        "Аввакум", "Сафония", "Аггей", "Захария", "Малахия", 
        "Матфей", "Марк", "Лука", "Иоанн", "Деяния Апостолов", 
        "Римлянам", "1 Коринфянам", "2 Коринфянам", "Галатам", 
        "Ефесянам", "Филиппийцам", "Колоссянам", "1 Фессалоникийцам", 
        "2 Фессалоникийцам", "1 Тимофею", "2 Тимофею", "Титу", 
        "Филимону", "Евреям", "Иаков", "1 Петра", "2 Петра", 
        "1 Иоанна", "2 Иоанна", "3 Иоанна", "Иуда", "Откровение"
    }
},
{
    "es", {
        "Génesis", "Éxodo", "Levítico", "Números", "Deuteronomio", 
        "Josué", "Jueces", "Rut", "1 Samuel", "2 Samuel", 
        "1 Reyes", "2 Reyes", "1 Crónicas", "2 Crónicas", 
        "Esdras", "Nehemías", "Ester", "Job", "Salmos", 
        "Proverbios", "Eclesiastés", "Cantar de los Cantares", "Isaías", 
        "Jeremías", "Lamentaciones", "Ezequiel", "Daniel", 
        "Oseas", "Joel", "Amós", "Abdías", "Jonás", 
        "Miqueas", "Nahúm", "Habacuc", "Sofonías", "Hageo", 
        "Zacarías", "Malaquías", "Mateo", "Marcos", "Lucas", 
        "Juan", "Hechos", "Romanos", "1 Corintios", "2 Corintios", 
        "Gálatas", "Efesios", "Filipenses", "Colosenses", 
        "1 Tesalonicenses", "2 Tesalonicenses", "1 Timoteo", 
        "2 Timoteo", "Tito", "Filemón", "Hebreos", 
        "Santiago", "1 Pedro", "2 Pedro", "1 Juan", 
        "2 Juan", "3 Juan", "Judas", "Apocalipsis"
    }
},
{
    "sri", {
        "Постање", "Излазак", "Левитска", "Бројеви", "Поновљени закони",
        "Исус Навин", "Судје", "Рута", "1. Самуилова", "2. Самуилова",
        "1. Царева", "2. Царева", "1. Дневника", "2. Дневника",
        "Јездра", "Немијa", "Јестира", "Јов", "Псалми",
        "Пословице", "Проповедник", "Песма над песмама", "Исаија",
        "Јеремија", "Плач Јеремијин", "Језекиљ", "Данило",
        "Осеија", "Јоило", "Амос", "Авдија", "Јона",
        "Миха", "Наум", "Авакум", "Софонија", "Агеј",
        "Захарија", "Малахија", "Матеј", "Марко", "Лука",
        "Јован", "Дела апостолска", "Римљанима", "1. Коринћанима",
        "2. Коринћанима", "Галатима", "Ефесцима", "Филипљанима",
        "Колошанима", "1. Солуњанима", "2. Солуњанима", "1. Тимотеју",
        "2. Тимотеју", "Титу", "Филимону", "Јеврејима",
        "Јаковљева", "1. Петрова", "2. Петрова", "1. Јованова",
        "2. Јованова", "3. Јованова", "Јудина", "Откривење Јованово"
    }
},
{
    "sre", {
        "Постање", "Излазак", "Левитска", "Бројеви", "Поновљени закони",
        "Исус Навин", "Судје", "Рута", "1. Самуилова", "2. Самуилова",
        "1. Царева", "2. Царева", "1. Дневника", "2. Дневника",
        "Јездра", "Немијa", "Јестира", "Јов", "Псалми",
        "Пословице", "Проповедник", "Песма над песмама", "Исаија",
        "Јеремија", "Плач Јеремијин", "Језекиљ", "Данило",
        "Осеија", "Јоило", "Амос", "Авдија", "Јона",
        "Миха", "Наум", "Авакум", "Софонија", "Агеј",
        "Захарија", "Малахија", "Матеј", "Марко", "Лука",
        "Јован", "Дела апостолска", "Римљанима", "1. Коринћанима",
        "2. Коринћанима", "Галатима", "Ефесцима", "Филипљанима",
        "Колошанима", "1. Солуњанима", "2. Солуњанима", "1. Тимотеју",
        "2. Тимотеју", "Титу", "Филимону", "Јеврејима",
        "Јаковљева", "1. Петрова", "2. Петрова", "1. Јованова",
        "2. Јованова", "3. Јованова", "Јудина", "Откривење Јованово"
    }
},
{
    "sv", {
        "Första Moseboken", "Andra Moseboken", "Tredje Moseboken", "Fjärde Moseboken", "Femte Moseboken", 
        "Josua", "Domarboken", "Rut", "Första Samuelsboken", "Andra Samuelsboken", 
        "Första Kungaboken", "Andra Kungaboken", "Första Krönikeboken", "Andra Krönikeboken", 
        "Esra", "Nehemja", "Ester", "Job", "Psaltaren", 
        "Ordspråksboken", "Predikaren", "Höga visan", "Jesaja", 
        "Jeremia", "Klagovisorna", "Ezekiel", "Daniel", 
        "Hosea", "Joel", "Amos", "Obadja", "Jona", 
        "Mika", "Nahum", "Habackuk", "Sefanja", "Haggai", 
        "Sakaria", "Malaki", "Matteus", "Markus", "Lukas", 
        "Johannes", "Apostlagärningarna", "Romarbrevet", "Första Korinthierbrevet", 
        "Andra Korinthierbrevet", "Galațanbrevet", "Efesierbrevet", "Filipperbrevet", 
        "Kolosserbrevet", "Första Thessalonikerbrevet", "Andra Thessalonikerbrevet", "Första Timotheosbrevet", 
        "Andra Timotheosbrevet", "Titusbrevet", "Filemonbrevet", "Hebreerbrevet", 
        "Jakobsbrevet", "Första Petrusbrevet", "Andra Petrusbrevet", "Första Johannesbrevet", 
        "Andra Johannesbrevet", "Tredje Johannesbrevet", "Judasbrevet", "Uppenbarelseboken"
    }
},
{
    "tl", {
        "Genesis", "Exodo", "Levitico", "Bilang", "Deuteronomio", 
        "Josue", "Hukom", "Ruth", "1 Samuel", "2 Samuel", 
        "1 Hari", "2 Hari", "1 Cronica", "2 Cronica", "Ezra", 
        "Nehemias", "Esther", "Job", "Mga Awit", "Mga Kawikaan", 
        "Eclesiastes", "Kanta ng mga Kanta", "Isaias", "Jeremias", 
        "Pagluha ni Jeremias", "Ezekiel", "Daniel", "Oseas", 
        "Joel", "Amos", "Obadias", "Jonas", "Mikas", 
        "Nahum", "Habacuc", "Sofonias", "Hagai", "Zacarias", 
        "Malakias", "Mateo", "Marcos", "Lucas", "Juan", 
        "Gawa", "Roma", "1 Corinto", "2 Corinto", "Galacia", 
        "Efeso", "Filipos", "Colosas", "1 Tesalonica", "2 Tesalonica", 
        "1 Timoteo", "2 Timoteo", "Tito", "Filemon", 
        "Hebreo", "Santiago", "1 Pedro", "2 Pedro", 
        "1 Juan", "2 Juan", "3 Juan", "Judas", "Pahayag"
    }
},
{
    "uk", {
        "Буття", "Вихід", "Левіт", "Числа", "Повторення Закону", 
        "Ісуса Навина", "Суддів", "Рут", "Перша книга Самуїла", "Друга книга Самуїла", 
        "Перша книга Царів", "Друга книга Царів", "Перша книга Хронік", "Друга книга Хронік", 
        "Езра", "Неємія", "Есфір", "Йов", "Псалми", 
        "Приповісті", "Екклезіаст", "Пісня над піснями", "Ісая", 
        "Єремія", "Плач Єремії", "Єзекіїль", "Данило", 
        "Осия", "Йоїл", "Амос", "Обадія", "Йона", 
        "Михей", "Наум", "Аввакум", "Софонія", "Агей", 
        "Захарія", "Малахія", "Матвій", "Марко", "Лука", 
        "Іван", "Дії апостолів", "Послання до Римлян", "Перше послання до Коринтян", 
        "Друге послання до Коринтян", "Послання до Галатів", "Послання до Ефесян", "Послання до Филип'ян", 
        "Послання до Колоссян", "Перше послання до Солунян", "Друге послання до Солунян", "Перше послання до Тимофія", 
        "Друге послання до Тимофія", "Послання до Тита", "Послання до Филимона", "Послання до Євреїв", 
        "Послання Якова", "Перше послання Петра", "Друге послання Петра", "Перше послання Івана", 
        "Друге послання Івана", "Третє послання Івана", "Послання Юди", "Об'явлення"
    }
},
{
    "vi", {
        "Sáng thế ký", "Xuất hành", "Lê-vi ký", "Dân số ký", "Phục truyền luật lệ", 
        "Giô-suê", "Các quan xét", "Rút", "I Sa-mu-ên", "II Sa-mu-ên", 
        "I Các vua", "II Các vua", "I Sử ký", "II Sử ký", 
        "Es-ra", "Ne-hê-mi", "Ê-xơ-tê", "Gióp", "Thi thiên", 
        "Châm ngôn", "Giảng viên", "Ca dao", "Ê-sai", 
        "Giê-rê-mi", "Than vãn", "Ê-xê-chi-ên", "Đa-ni-ên", 
        "Ô-sê", "Gio-ên", "A-mốt", "Ô-ba-đi", "Giô-na", 
        "Mi-ca", "Na-hum", "Ha-ba-cúc", "Xô-phô-ni", "Ha-ghê", 
        "Za-cha-ri", "Ma-la-chi", "Ma-thi-ơ", "Mác", "Lu-ca", 
        "Gioan", "Công vụ các sứ đồ", "Rô-ma", "I Cô-rin-tô", 
        "II Cô-rin-tô", "Ga-la-ti", "Ê-phê-sô", "Phi-líp", 
        "Cô-lô-se", "I Tê-sa-lô-ni-ca", "II Tê-sa-lô-ni-ca", "I Ti-mô-thê", 
        "II Ti-mô-thê", "Tít", "Phi-lê-môn", "Hê-bơ-rơ", 
        "Gia-cơ", "I Phi-e-rơ", "II Phi-e-rơ", "I Giăng", 
        "II Giăng", "III Giăng", "Giu-đa", "Khải huyền"
    }
},
    {"ar", {
        "التكوين", "الخروج", "اللاويين", "العدد", "التثنية", 
        "يشوع", "القضاة", "راعوث", "صموئيل الأول", "صموئيل الثاني", 
        "الملوك الأول", "الملوك الثاني", "أخبار الأيام الأول", "أخبار الأيام الثاني", "عزرا", 
        "نحميا", "أستير", "أيوب", "المزامير", "الأمثال", 
        "الجامعة", "نشيد الأنشاد", "إشعياء", "إرميا", 
        "مراثي إرميا", "حزقيال", "دانيال", "هوشع", "يوئيل", 
        "عاموس", "عوبديا", "يونان", "ميخا", "ناحوم", 
        "حبقوق", "صفنيا", "حجي", "زكريا", "ملاخي", 
        "متى", "مرقس", "لوقا", "يوحنا", "أعمال الرسل", 
        "رومية", "كورنثوس الأولى", "كورنثوس الثانية", "غلاطية", "أفسس", 
        "فيلبي", "كولوسي", "تسالونيكي الأولى", "تسالونيكي الثانية", 
        "تيموثاوس الأولى", "تيموثاوس الثانية", "تيطس", "فليمون", 
        "العبرانيين", "يعقوب", "بطرس الأولى", "بطرس الثانية", 
        "يوحنا الأولى", "يوحنا الثانية", "يوحنا الثالثة", "يهوذا", "الرؤيا"
    }},
    {"he", {
        "בראשית", "שמות", "ויקרא", "במדבר", "דברים", 
        "יהושע", "שופטים", "רות", "שמואל א", "שמואל ב", 
        "מלכים א", "מלכים ב", "דברי הימים א", "דברי הימים ב", "עזרא", 
        "נחמיה", "אסתר", "איוב", "תהלים", "משלי", 
        "קהלת", "שיר השירים", "ישעיהו", "ירמיהו", 
        "איכה", "יחזקאל", "דניאל", "הושע", "יואל", 
        "עמוס", "עובדיה", "יונה", "מיכה", "נחום", 
        "חבקוק", "צפניה", "חגי", "זכריה", "מלאכי", 
        "מתי", "מרקוס", "לוקס", "יוחנן", "מעשי השליחים", 
        "רומים", "הראשונה לקורינתים", "השנייה לקורינתים", "גלטים", "אפסים", 
        "פיליפים", "קולוסים", "הראשונה לתסלוניקים", "השנייה לתסלוניקים", 
        "הראשונה לטימותיוס", "השנייה לטימותיוס", "טיטוס", "פילימון", 
        "עברים", "יעקב", "הראשונה לפטרוס", "השנייה לפטרוס", 
        "הראשונה ליוחנן", "השנייה ליוחנן", "השלישית ליוחנן", "יהודה", "חזון יוחנן"
    }},
    {"pes", {
        "پیدایش", "خروج", "لاویان", "اعداد", "تثنیه", 
        "یوشع", "داوران", "روت", "اول سموئیل", "دوم سموئیل", 
        "اول پادشاهان", "دوم پادشاهان", "اول تواریخ", "دوم تواریخ", "عزرا", 
        "نحمیا", "استر", "ایوب", "مزامیر", "امثال", 
        "جامعه", "غزل الغزلها", "اشعیا", "ارمیا", 
        "مراثی", "حزقیال", "دانیال", "هوشع", "یوئیل", 
        "عاموس", "عوبدیا", "یونس", "میخا", "ناحوم", 
        "حبقوق", "صفنیا", "حجی", "زکریا", "ملاکی", 
        "متی", "مرقس", "لوقا", "یوحنا", "اعمال رسولان", 
        "رومیان", "اول قرنتیان", "دوم قرنتیان", "غلاطیان", "افسسیان", 
        "فیلیپیان", "کولسیان", "اول تسالونیکیان", "دوم تسالونیکیان", 
        "اول تیموتائوس", "دوم تیموتائوس", "تیطس", "فلیمون", 
        "عبرانیان", "یعقوب", "اول پطرس", "دوم پطرس", 
        "اول یوحنا", "دوم یوحنا", "سوم یوحنا", "یهودا", "مکاشفه"
    }},
    {"pt", {
        "Gênesis", "Êxodo", "Levítico", "Números", "Deuteronômio", 
        "Josué", "Juízes", "Rute", "1 Samuel", "2 Samuel", 
        "1 Reis", "2 Reis", "1 Crônicas", "2 Crônicas", "Esdras", 
        "Neemias", "Ester", "Jó", "Salmos", "Provérbios", 
        "Eclesiastes", "Cântico dos Cânticos", "Isaías", "Jeremias", 
        "Lamentações", "Ezequiel", "Daniel", "Oséias", "Joel", 
        "Amós", "Obadias", "Jonas", "Miquéias", "Naum", 
        "Habacuque", "Sofonias", "Ageu", "Zacarias", "Malaquias", 
        "Mateus", "Marcos", "Lucas", "João", "Atos dos Apóstolos", 
        "Romanos", "1 Coríntios", "2 Coríntios", "Gálatas", "Efésios", 
        "Filipenses", "Colossenses", "1 Tessalonicenses", "2 Tessalonicenses", 
        "1 Timóteo", "2 Timóteo", "Tito", "Filemom", 
        "Hebreus", "Tiago", "1 Pedro", "2 Pedro", 
        "1 João", "2 João", "3 João", "Judas", "Apocalipse"
    }},
};


#endif // BOOKNAMES_H
