// 6 Hrvatska Biblija Ivana Šarića
std::map<std::string, std::vector<std::string>> psalms_verses = {
    {"Psalms", {
        "12:6 - Riječi su Gospodnje čiste riječi, srebro koje se ljeva, sedam puta očišćeno.",
        "19:7 - Zakon je Gospodnji savršen, dušu obnavlja; svjedočanstvo je Gospodnje pouzdano, malene pamet čini.",
        "23:1 - Psalam Davidov: Gospodin je pastir moj, ništa mi ne nedostaje.",
        "23:4 - Iako hodio kroz dolinu sjene smrti, neću se bojati zla, jer si ti sa mnom; štap tvoj i palica tvoja utjeha su meni.",
        "24:1 - Psalam Davidov: Gospodinu pripada zemlja i sve što je na njoj, svijet i svi koji na njemu prebivaju.",
        "27:1 - Davidov psalam: Gospodin je svjetlost moja i spasenje moje; koga da se bojim? Gospodin je utvrda života moga; koga da se prestraši?",
        "27:4 - Jednu stvar molim od Gospodina, to tražim: da živim u domu Gospodnjem svi dani života svojega, da gledam ljepotu Gospodnju i da se divim njegovom hramu.",
        "27:14 - Čekaj Gospodina; budi hrabar i čvrst srcem; čekaj Gospodina.",
        "34:1 - Davidov psalam, kad je promijenio svoj izgled pred Abimelechom, i on ga otpustio i otišao: Hvalit ću Gospodina u svako vrijeme; hvala njegova bit će uvijek u mom ustima.",
        "34:8 - Okusite i vidite da je Gospodin dobar; blagoslovljen čovjek koji se uzda u njega.",
        "37:4 - Raduj se u Gospodinu i on će ti dati što ti srce želi.",
        "42:1 - Za upravitelja zborova. Psalam sinova Korahovih: Kao što srna čezne za izvorima voda, tako duša moja čezne za tobom, Bože.",
        "46:1 - Za upravitelja zborova. Psalam sinova Korahovih. Pjesma. Bog je naš zaklon i snaga, spremna pomoć u nevoljama.",
        "46:10 - Obazrite se i spoznat ćete da sam ja Bog; uzvišen sam među narodima, uzvišen na zemlji.",
        "51:10 - Stvori mi čisto srce, Bože, i duh čestit obnovi u meni.",
        "91:1 - Onaj koji boravi u tajnoj Gospodnjoj, u sjeni Svemogućega boravit će.",
        "91:11 - Jer će svojim anđelima zapovjediti za tebe, da te čuvaju na svim putovima tvojim.",
        "100:1 - Psalam hvale. Pjevajte Gospodinu, sve zemlje!",
        "103:1 - Davidov psalam: Blagoslivljaj, dušo moja, Gospodina, i sve što je u meni, ime njegovo sveto.",
        "111:10 - Početak je mudrosti strah Gospodnji; svi koji ga prakticiraju imaju dobar razum. Njegova hvala traje vječno.",
        "119:11 - U srcu svom skrivam tvoju riječ, da ne zgriješim protiv tebe.",
        "119:105 - Svjetlo je nogama mojim riječ tvoja i svjetlo stazi mojim.",
        "127:1 - Psalam uspinjanja. Salomonov: Ako Gospodin ne gradi kuću, uzalud se trude graditelji njezini; ako Gospodin ne čuva grada, uzalud bdije čuvar.",
        "133:1 - Psalam uspinjanja. Davidov: Gle, kakvo je dobro i kakvo je ugodno, kad braća zajedno stanu.",
        "139:14 - Hvalim te što sam čudesno načinjen; divna su djela tvoja, duša moja to dobro poznaje."
    }}
};

// 7 Danish OT193I + NT1907 with original orthography
std::map<std::string, std::vector<std::string>> psalms_verses_danish = {
    {"Psalms", {
        "12:6 - Herrens Ord er rene Ord, sølv, der er i smelteovn, renset syv gange.",
        "19:7 - Herrens Lov er fuldkommen, som giver sjælen liv; Herrens vidnesbyrd er trofast, som gør den uvidende klog.",
        "23:1 - Herren er min hyrde, mig fattes intet.",
        "23:4 - Om jeg end går i dødens dal, frygter jeg ikke for ondt; thi du er med mig; din stok og din stav, de trøster mig.",
        "24:1 - Herrens er jorden og alt hvad derpå er, verden og de som bo derpå.",
        "27:1 - Davids Salme: Herren er mit lys og min frelse; hvem skal jeg frygte? Herren er mit livs styrke; hvem skal jeg være bange for?",
        "27:4 - En ting har jeg bedt Herren om, det vil jeg søge: at bo i Herrens hus alle mine dage, for at skue Herrens skønhed og at blive i hans tempel.",
        "27:14 - Vent på Herren, vær stærk, og lad dit hjerte være modigt; ja, vent på Herren.",
        "34:1 - En Davids Salme, da han lod sindet fare som en dår i Abimelechs åsyn, og han blev drevet bort af ham: Jeg vil velsigne Herren til enhver tid; hans lovsang skal være altid i min mund.",
        "34:8 - Smag og se, at Herren er god; salig er den mand, der finder sin tilflugt hos ham.",
        "37:4 - Vel glæd dig i Herren, og han vil give dig hvad dit hjerte beder om.",
        "42:1 - For Koras Sønner. En Salme: Som en hjort længes efter vandkilder, således længes min sjæl efter dig, Gud.",
        "46:1 - For Koras Sønner. En Salme. Gud er vor tilflugt og styrke, en meget nær hjælp i nød.",
        "46:10 - Vær stille, og erkend, at jeg er Gud; jeg bliver ophøjet blandt folkene, ophøjet på jorden.",
        "51:10 - Skab i mig et rent hjerte, Gud, og forny en ret ånd i mig.",
        "91:1 - Den, der bor i den højeste skjul, skal hvile under den Almægtiges skygge.",
        "91:11 - Thi han vil befale sine engle om dig, at de skal bevare dig på alle dine veje.",
        "100:1 - En Lovsang. Råb med glæde for Herren, hele jorden!",
        "103:1 - En Davids Salme: Velsign Herren, min sjæl, og alt hvad der er i mig, velsign hans hellige navn.",
        "111:10 - Frygt for Herren er visdoms begyndelse; alle, der følger det, har en god forstand. Hans ros varer evigt.",
        "119:11 - Jeg gemmer dit ord i mit hjerte, så jeg ikke synder mod dig.",
        "119:105 - Dit ord er en lygte for min fod og et lys på min sti.",
        "127:1 - En Salme om opstigning. Salomon: Hvis Herren ikke bygger huset, arbejder byggemændene forgæves; hvis Herren ikke beskytter byen, våger vagterne forgæves.",
        "133:1 - En Salme om opstigning. David: Se, hvor godt og skønt det er, når brødre bor sammen i enhed!",
        "139:14 - Jeg vil takke dig, fordi jeg er skabt vidunderligt; vidunderlige er dine værker, min sjæl ved det godt."
    }}
};

// 9 Bible J.N. Darby in French with Strong's numbers
std::map<std::string, std::vector<std::string>> psalms_verses_darby = {
    {"Psaumes", {
        "12:6 - Les paroles de l'Éternel sont des paroles pures; argent affiné au creuset, purifié sept fois.",
        "19:7 - La loi de l'Éternel est parfaite, elle restaure l'âme; le témoignage de l'Éternel est véridique, il rend sage l'ignorant.",
        "23:1 - L'Éternel est mon berger: je ne manquerai de rien.",
        "23:4 - Quand je marche dans la vallée de l'ombre de la mort, je ne crains aucun mal; car tu es avec moi; ta houlette et ton bâton me rassurent.",
        "24:1 - De l'Éternel est la terre avec ce qui s'y trouve, le monde, et ceux qui l'habitent.",
        "27:1 - Psaume de David. L'Éternel est ma lumière et mon salut; de qui aurais-je peur? L'Éternel est la force de ma vie; de qui tremblerais-je?",
        "27:4 - Une chose ai-je demandée à l'Éternel, la chose que je recherche: c'est d'habiter dans la maison de l'Éternel tous les jours de ma vie, pour contempler la beauté de l'Éternel, et pour m'enquérir dans son temple.",
        "27:14 - Espère en l'Éternel, sois fort et que ton cœur s'affermisse; oui, espère en l'Éternel.",
        "34:1 - Psaume de David, lorsqu'il changea de conduite devant Abimélec, et qu'il s'en alla. Je bénirai l'Éternel en tout temps; sa louange sera continuellement dans ma bouche.",
        "34:8 - Goûtez et voyez que l'Éternel est bon; heureux l'homme qui cherche en lui un refuge.",
        "37:4 - Fais de l'Éternel tes délices, et il te donnera ce que ton cœur désire.",
        "42:1 - Au chef des chantres. Psaume des fils de Koré. Comme une biche soupire après des courants d'eau, ainsi mon âme soupire après toi, ô Dieu.",
        "46:1 - Au chef des chantres. Psaume des fils de Koré. Dieu est pour nous un refuge et une force, un secours bien éprouvé dans les détresses.",
        "46:10 - Arrêtez, et sachez que je suis Dieu; je serai exalté parmi les nations, je serai exalté sur la terre.",
        "51:10 - Ô Dieu, crée en moi un cœur pur, renouvelle en moi un esprit bien disposé.",
        "91:1 - Celui qui demeure sous l'abri du Très-Haut repose à l'ombre du Tout-Puissant.",
        "91:11 - Car il ordonnera à ses anges de te garder dans toutes tes voies.",
        "100:1 - Psaume de louange. Poussez vers l'Éternel des cris de joie, vous tous, habitants de la terre!",
        "103:1 - Psaume de David. Bénis l'Éternel, mon âme, et que tout ce qui est en moi bénisse son saint nom.",
        "111:10 - La crainte de l'Éternel est le commencement de la sagesse; tous ceux qui l'observent ont une bonne intelligence. Sa louange subsiste à jamais.",
        "119:11 - Je serre ta parole dans mon cœur, afin de ne pas pécher contre toi.",
        "119:105 - Ta parole est une lampe à mes pieds, et une lumière sur mon sentier.",
        "127:1 - Cantique des montées. De Salomon. Si l'Éternel ne bâtit la maison, ceux qui la bâtissent travaillent en vain; si l'Éternel ne garde la ville, celui qui la garde veille en vain.",
        "133:1 - Cantique des montées. De David. Voici, oh! comme il est agréable, comme il est doux pour des frères de demeurer ensemble!",
        "139:14 - Je te loue de ce que je suis une créature si merveilleuse. Tes œuvres sont merveilleuses, et mon âme le reconnaît bien."
    }}
};

// 10 Menge-Bibel (1939)
std::map<std::string, std::vector<std::string>> psalms_verses = {
    {"Psalms", {
        "12:6 - Die Worte des HERRN sind lauter Worte, Silber, geschmolzen im Tiegel zur Erde, geläutert siebenmal.",
        "19:7 - Das Gesetz des HERRN ist vollkommen: es erquickt die Seele; das Zeugnis des HERRN ist zuverlässig: es macht den Einfältigen weise.",
        "23:1 - Ein Psalm Davids. Der HERR ist mein Hirt: mir mangelt nichts.",
        "23:4 - Auch wenn ich wandere im finstern Tal, fürchte ich kein Unglück; denn du bist bei mir, dein Stecken und dein Stab, die trösten mich.",
        "24:1 - Von David, ein Psalm. Dem HERRN gehört die Erde und ihre Fülle, der Erdkreis und seine Bewohner;",
        "27:1 - Von David. Der HERR ist mein Licht und mein Heil: vor wem sollte ich mich fürchten? Der HERR ist meines Lebens Kraft: vor wem sollte mir grauen?",
        "27:4 - Eines habe ich vom HERRN erbeten, nach diesem will ich trachten: daß ich im Hause des HERRN bleiben darf alle Tage meines Lebens, um zu schauen die Freundlichkeit des HERRN und nachzudenken in seinem Tempel.",
        "27:14 - Harre auf den HERRN! Sei getrost und unverzagt und harre auf den HERRN!",
        "34:1 - Von David, als er sich vor Abimelech irrsinnig stellte und dieser ihn von sich trieb, so daß er von dannen ging. Ich will den HERRN preisen allezeit; sein Lob soll immerdar in meinem Munde sein.",
        "34:8 - Schmecket und sehet, wie freundlich der HERR ist; wohl dem, der auf ihn traut!",
        "37:4 - Und habe deine Lust am HERRN, so wird er dir geben, was dein Herz begehrt.",
        "42:1 - Dem Musikmeister; ein Lehrgedicht der Korahiten. Wie ein Hirsch lechzt nach Wasserbächen, so lechzt meine Seele nach dir, o Gott!",
        "46:1 - Dem Musikmeister, von den Korahiten, im Bass-Stimmsatz, ein Lied. Gott ist uns Zuflucht und Stärke, eine Hilfe, reichlich gefunden in den Nöten.",
        "46:10 - Seid stille und erkennet, daß ich Gott bin; ich werde erhaben sein unter den Heiden, ich werde erhaben sein auf der Erde!",
        "51:10 - Schaffe mir, Gott, ein reines Herz und gib mir einen neuen, beständigen Geist!",
        "91:1 - Wer da wohnt im Schirm des Höchsten und im Schatten des Allmächtigen weilt,",
        "91:11 - Denn er wird seinen Engeln deinetwegen Befehl geben, daß sie dich behüten auf allen deinen Wegen.",
        "100:1 - Ein Psalm als Dankbezeigung. Jauchzet dem HERRN, alle Lande,",
        "103:1 - Von David. Lobe den HERRN, meine Seele, und alles, was in mir ist, seinen heiligen Namen!",
        "111:10 - Die Furcht des HERRN ist der Weisheit Anfang; gute Einsicht haben alle, die danach tun; sein Lob besteht ewiglich.",
        "119:11 - In meinem Herzen habe ich dein Wort verwahrt, damit ich nicht gegen dich sündige.",
        "119:105 - Dein Wort ist meines Fußes Leuchte und ein Licht auf meinem Wege.",
        "127:1 - Ein Wallfahrtslied Salomos. Wenn der HERR das Haus nicht baut, so arbeiten umsonst, die daran bauen; wenn der HERR die Stadt nicht bewacht, so wacht der Wächter umsonst.",
        "133:1 - Ein Wallfahrtslied Davids. Seht, wie schön und wie lieblich ist’s, wenn Brüder einträchtig beieinander wohnen!",
        "139:14 - Ich preise dich darüber, daß ich auf eine ausgezeichnete Weise erschaffen bin; wunderbar sind deine Werke, und meine Seele erkennt es wohl."
    }}
};
// 11 Haitian Creole Bible
std::map<std::string, std::vector<std::string>> psalms_verses = {
    {"Psalms", {
        "12:6 - Pawòl Seyè a, se pawòl ki bon nèt, se tankou ajan yo pran nan tè a, yo pase l' sèt fwa nan dife pou l' bon nèt.",
        "19:7 - Lalwa Seyè a bon nèt ale, li bay moun kouraj. Lòd Seyè a fè yo ka fè. Moun ki san eksperyans vin gen bon konprann.",
        "23:1 - Yon sòm David. Seyè a se bèje mwen, mwen p'ap janm manke anyen.",
        "23:4 - Menm si m'ap mache nan fènwa, kote lanmò ap veye a, mwen p'ap pè anyen, Seyè. Paske, ou avè m', baton ou ak baton ou pou pran defans mwen, yo ban m' ankourajman.",
        "24:1 - Yon sòm David. Latè ak tou sa ki ladan l' se pou Seyè a yo ye, latè ak tout moun k'ap viv sou li.",
        "27:1 - Yon sòm David. Seyè a se limyè mwen, li se delivrans mwen. M'ap mande, ki moun mwen ta dwe pè? Seyè a se defans lavi mwen. M'ap mande, ki moun mwen ta dwe tranble devan li?",
        "27:4 - Men sa m'ap mande Seyè a, sa m'ap chache tout tan: Se pou m' ka rete nan kay Seyè a pandan tout lavi mwen, pou m' ka pran plezi m' nan wè bèl kay Seyè a, pou m' ka sezi sa li vle m' fè nan tanp li a.",
        "27:14 - Mete espwa ou nan Seyè a. Kenbe fèm, pran kouraj. Mete espwa ou nan Seyè a.",
        "34:1 - Lè David te pran pòz moun fou devan Abimelèk, pou Abimelèk te ka mete l' deyò, li ale. David di: M'a toujou di Seyè a mèsi. M'ap toujou fè lwanj li nan bouch mwen.",
        "34:8 - Vini non, se pou nou wè jan Seyè a bon. Ala bon sa bon pou moun ki jwenn pwoteksyon anba zèl li!",
        "37:4 - Pran tout plezi ou nan sèvis Seyè a, l'a ba ou tou sa kè ou anvi.",
        "42:1 - Pou chèf sanba yo. Se yonn nan chante pitit Kore yo. Menm jan yon sèf ap chache dlo larivyè, konsa tou mwen menm mwen swaf ou, Bondye.",
        "46:1 - Pou chèf sanba yo. Se yon chante pitit Kore yo pou yo chante tou dousman. Bondye se pou nou yon refij ak yon fòs. Li toujou pare pou ede nou lè n'ap soufri.",
        "46:10 - Sispann bat kò nou! Chache konnen se mwen ki Bondye. M'ap fè tout nasyon yo konnen jan mwen gen pouvwa. Tout latè gen pou konnen jan mwen gen pouvwa.",
        "51:10 - Bondye, kreye yon kè ki pwòp pou mwen, renouvle lespri ki dwat la nan mwen.",
        "91:1 - Moun ki chache pwoteksyon anba zèl Bondye ki anwo nan syèl la, yo rete kache anba lonbraj li, li pwoteje yo.",
        "91:11 - Paske, l'ap bay zanj li yo lòd pou yo pwoteje ou sou tout chemen ou yo.",
        "100:1 - Yon sòm pou di mèsi. Moun toupatou sou latè, fè kè nou kontan, fè lwanj Seyè a!",
        "103:1 - Se yon sòm David. Mwen menm, mwen di Seyè a mèsi. Se pa ti kontan kè m' kontan di Bondye ki apa nèt la mèsi!",
        "111:10 - Pou moun ki gen krentif pou Seyè a, se nan respè pou Seyè a bon konprann yo gen la kòmanse. Tout moun k'ap obeyi lòd li yo, se moun ki gen bon konprann. Lwanj li p'ap janm fini.",
        "119:11 - Nan kè m' mwen sere pawòl ou pou m' pa janm fè peche kont ou.",
        "119:105 - Pawòl ou a se yon limyè devan mwen, yon limyè pou klere chemen m' yo.",
        "127:1 - Yon chan Solomon. Si Seyè a pa bati kay la, mason yo ap travay pou gremesi. Si Seyè a pa veye lavil la, gadyen yo ap veye pou gremesi.",
        "133:1 - Yon chan David pou monte Jerizalèm. Ala bon sa bon, ala bèl sa bèl pou frè yo viv ansanm nan renmen.",
        "139:14 - M'ap fè lwanj ou paske ou te fè m' nan kondisyon tout moun ka sezi wè. Se travay ou li ye. Se pa ti bèl travay ou fè. Mwen rekonèt sa byen."
    }}
};
// 12 Revideált Károli Biblia 1908
std::map<std::string, std::vector<std::string>> psalms_verses = {
    {"Psalms", {
        "12:6 - Az Úrnak beszédei tiszta beszédek, megpróbált ezüst, földből való kemencében hétszer megtisztítva.",
        "19:7 - Az Úrnak törvénye tökéletes, megújítja a lelket; az Úrnak bizonyságtétele állhatatos, bölccsé teszi az együgyűt.",
        "23:1 - Az Úr az én pásztorom; nem szűkölködöm.",
        "23:4 - Még ha a halál árnyékának völgyében járok is, nem félek semmi bajtól, mert te velem vagy; a te vessződ és botod, azok vigasztalnak engem.",
        "24:1 - Az Úré a föld és annak teljessége; a föld kereksége és a rajta lakók.",
        "27:1 - Az Úr az én világosságom és üdvösségem: kitől féljek? Az Úr az én életemnek erőssége: kitől remegjek?",
        "27:4 - Egyet kérek az Úrtól, azért esedezem, hogy lakhassam az Úr házában életem minden idejében, hogy nézhessem az Úrnak szépségét, és gyönyörködhessem az ő templomában.",
        "27:14 - Várjad az Urat, légy erős; bátorodjék szíved, és várjad az Urat!",
        "34:1 - Dávidé, mikor eszét megváltoztatta Abimélek előtt, és mikor ez elűzte őt, és elment. Áldom az Urat minden időben; dicsérete mindig ajkamon van.",
        "34:8 - Érezzétek és lássátok, hogy jó az Úr; boldog az az ember, aki ő benne bízik.",
        "37:4 - Gyönyörködjél az Úrban, és megadja néked szíved kéréseit.",
        "42:1 - A karmesternek; a Kórah fiainak tanítása. Miképpen a szarvas kívánkozik a folyóvízre, akképpen kívánkozik az én lelkem tehozzád, ó Isten!",
        "46:1 - Az éneklőmesternek; a Kórah fiainak éneke, az Alamóth szerint. Isten a mi oltalmunk és erősségünk, igen bizonyos segítség a nyomorúságban.",
        "46:10 - Csendesedjetek és ismerjétek el, hogy én vagyok az Isten; felmagasztaltatom a pogányok között, felmagasztaltatom e földön!",
        "51:10 - Tiszta szívet teremts bennem, ó Isten, és az erős lelket újítsd meg bennem!",
        "91:1 - Aki a Felséges rejtekében lakozik, a Mindenható árnyékában nyugszik az.",
        "91:11 - Mert megparancsolja angyalainak felőled, hogy őrizzenek minden utaidban.",
        "100:1 - Hálaadás zsoltára. Vígan énekeljetek az Úrnak, egész föld!",
        "103:1 - Dávid zsoltára. Áldjad én lelkem az Urat, és egész bensőm az ő szent nevét.",
        "111:10 - Az Úrnak félelme a bölcseség kezdete; józan eszük van mindazoknak, akik azt gyakorolják. Az ő dicsérete megmarad mindörökké.",
        "119:11 - Szívembe rejtettem a te beszédedet, hogy ne vétkezzem ellened.",
        "119:105 - Lábam előtt mécses a te igéd, ösvényem világossága.",
        "127:1 - Ha az Úr nem építi a házat, hiába fáradnak annak építői; ha az Úr nem őrzi a várost, hiába vigyáznak az őrizők.",
        "133:1 - Ímé, mily jó és mily gyönyörűséges, amikor együtt lakoznak az atyafiak!",
        "139:14 - Magasztallak, mert félelmes és csodálatos vagy; csodálatosak a te cselekedeteid, és jól tudja ezt az én lelkem."
    }}
};
// 21 Bibelen på Norsk (1930)
std::map<std::string, std::vector<std::string>> psalms_verses = {
    {"Psalms", {
        "12:6 - Herrens ord er rene ord, lik sølv som er lutret i en smelteovn på jorden, renset syv ganger.",
        "19:7 - Herrens lov er fullkommen, den omvender sjelen; Herrens vidnesbyrd er trofast, det gjør den enfoldige vis.",
        "23:1 - Herren er min hyrde, mig fattes intet.",
        "23:4 - Om jeg enn skulde vandre i dødsskyggens dal, jeg frykter ikke for noget ondt; for du er med mig, din kjepp og din stav de trøster mig.",
        "24:1 - Jorden og alt det som fyller den, hører Herren til, jorderike og de som bor der.",
        "27:1 - Herren er mitt lys og min frelse; for hvem skulde jeg frykte? Herren er mitt livs vern; for hvem skulde jeg engstes?",
        "27:4 - Én ting har jeg bedt Herren om, det søker jeg efter: at jeg må bo i Herrens hus alle mine livsdager for å skue Herrens liflighet og grunde i hans tempel.",
        "27:14 - Bi på Herren, vær frimodig, og ditt hjerte være sterkt! Ja, bi på Herren!",
        "34:1 - Av David, da han lot som han var gal og drev ham bort, så han gikk sin vei. Jeg vil love Herren til enhver tid, hans pris skal alltid være i min munn.",
        "34:8 - Smak og se at Herren er god! Salig er den mann som tar sin tilflukt til ham.",
        "37:4 - Og gled deg i Herren! Så skal han gi dig hvad ditt hjerte attrår.",
        "42:1 - Til sangmesteren; en læresalme av Korahs barn. Som hjorten stunder efter bekker med rennende vann, således stunder min sjel efter dig, min Gud.",
        "46:1 - Til sangmesteren; av Korahs barn; efter Alamot*; en sang. Gud er vår tilflukt og styrke, en hjelp i trengsler, funnet såre stor.",
        "46:10 - Hold op og kjenn at jeg er Gud! Jeg skal ophøies blandt hedningene, ophøies på jorden.",
        "51:10 - Gud, skap i mig et rent hjerte, og forny en stadig ånd inneni mig!",
        "91:1 - Den som sitter i Den Høyestes skjul, som bor i Den Allmektiges skygge,",
        "91:11 - For han skal gi sine engler befaling om dig at de skal bevare dig på alle dine veier.",
        "100:1 - En salme til takksigelse. Rop med fryd for Herren, all jorden!",
        "103:1 - Av David. Min sjel, lov Herren, og alt som i mig er, love hans hellige navn!",
        "111:10 - Å frykte Herren er begynnelsen til visdom, god forstand har alle de som lever efter den. Hans pris varer til evig tid.",
        "119:11 - I mitt hjerte har jeg gjemt ditt ord forat jeg ikke skal synde imot dig.",
        "119:105 - Ditt ord er en lykt for min fot og et lys på min sti.",
        "127:1 - En sang ved festreisene; av Salomo. Dersom ikke Herren bygger huset, arbeider bygningsmennene forgjeves på det; dersom ikke Herren vokter byen, våker vekteren forgjeves.",
        "133:1 - En sang ved festreisene; av David. Se, hvor godt og hvor liflig det er at brødre også bor sammen!",
        "139:14 - Jeg priser dig fordi jeg er virket på forferdelig underfull vis; underfulle er dine gjerninger, og min sjel kjenner det såre vel."
    }}
};

// 22 Polish Biblia Gdanska (1881)
std::map<std::string, std::vector<std::string>> psalms_verses = {
    {"Psalms", {
        "12:6 - Słowa Pańskie są słowa czyste, srebro w tyglu ziemi doświadczone, siedemkroć przetopione.",
        "19:7 - Zakon Pański jest doskonały, nawracający duszę; świadectwo Pańskie jest wierne, dające mądrość prostemu.",
        "23:1 - Psalm Dawidowy. Pan jest pasterzem moim, nie będę miał niedostatku.",
        "23:4 - Choćbym też szedł doliną cienia śmierci, nie będę się bał złego; albowiem ty ze mną jesteś, laska twoja i kij twój, te mię cieszą.",
        "24:1 - Pańska jest ziemia i napełnienie jej; okrąg ziemi, i mieszkający na nim.",
        "27:1 - Psalm Dawidowy. Pan jest światłością moją i zbawieniem moim; kogóż bać się będę? Pan jest siłą żywota mego; kogóż mam się lękać?",
        "27:4 - O jedno prosiłem Pana, tego szukać będę: abym mieszkał w domu Pańskim po wszystkie dni żywota mego, abym oglądał wdzięczność Pańską, i badał kościół jego.",
        "27:14 - Oczekuj na Pana, mężnie sobie poczynaj, a on wzmocni serce twoje; oczekuj, mówię, na Pana!",
        "34:1 - Dawidowy, gdy odmienił oblicze swoje przed Abimelechem, który go wypędził, i odszedł. Będę błogosławił Panu na każdy czas, zawżdy chwała jego w uściech moich.",
        "34:8 - Skosztujcie, a oglądajcie, że dobry jest Pan; błogosławiony człowiek, który w nim ufa.",
        "37:4 - Kochaj się w Panu, a dać ci będzie życzenia serca twego.",
        "42:1 - Przewodnikowi chóru. Maschyl synów Korego. Jako jeleń pragnie do strumieni wód, tak dusza moja pragnie do ciebie, o Boże!",
        "46:1 - Przewodnikowi chóru synów Korego, na alamot, pieśń. Bóg jest ucieczką i mocą naszą, ratunkiem w utrapieniach najpewniejszym.",
        "46:10 - Przestańcie, a poznajcie, żem Ja Bóg; wywyższony będę między narodami, wywyższony będę na ziemi.",
        "51:10 - Serce czyste stwórz we mnie, o Boże! a ducha prawego odnów we wnętrznościach moich!",
        "91:1 - Kto mieszka w tajemnym miejscu Najwyższego, w cieniu Wszechmocnego przebywać będzie.",
        "91:11 - Albowiem aniołom swoim polecił o tobie, aby cię strzegli na wszystkich drogach twoich.",
        "100:1 - Psalm na dziękczynienie. Wykrzykaj Panu wszystka ziemio!",
        "103:1 - Psalm Dawidowy. Błogosław, duszo moja, Panu! i wszystko, co jest we mnie, imieniu jego świętemu!",
        "111:10 - Bojaźń Pańska jest początkiem mądrości; dobra roztropność wszystkim, którzy się jej trzymają; chwała jego trwa na wieki.",
        "119:11 - W sercu mojem chowam słowo twoje, abym nie zgrzeszył przeciwko tobie.",
        "119:105 - Słowo twoje jest pochodnią nogom moim, i światłością ścieżkom moim.",
        "127:1 - Pieśń stopni Salomonowa. Jeźli Pan domu nie zbuduje, próżno się trudzili, którzy go budują; jeźli Pan nie będzie strzegł miasta, próżno czuwa stróż.",
        "133:1 - Pieśń stopni Dawidowa. Oto jako dobrze i jako wdzięcznie, gdy bracia w zgodzie mieszkają!",
        "139:14 - Wysławiam cię dlatego, że się zdumiewam strasznym i dziwnym sprawom twoim, a dusza moja zna je wybornie."
    }}
};

// 23 Синодального Перевода Библии
Псалом 12:6
Слова Господни -- слова чистые, серебро, очищенное от земли в горниле, семь раз переплавленное.

Псалом 19:7
Закон Господа совершен, укрепляет душу; откровение Господа верно, умудряет простых.

Псалом 23:1
Псалом Давида. Господь -- Пастырь мой; я ни в чем не буду нуждаться.

Псалом 23:4
Если я пойду и долиною смертной тени, не убоюсь зла, потому что Ты со мною; Твой жезл и Твой посох -- они успокаивают меня.

Псалом 24:1
Псалом Давида. Господня земля и что наполняет ее, вселенная и все живущее в ней,

Псалом 27:1
Псалом Давида. Господь -- свет мой и спасение мое: кого мне бояться? Господь -- крепость жизни моей: кого мне страшиться?

Псалом 27:4
Одного просил я у Господа, только того ищу, чтобы пребывать мне в доме Господнем во все дни жизни моей, созерцать красоту Господню и посещать храм Его.

Псалом 27:14
Надейся на Господа, мужайся, и да укрепляется сердце твое, надейся на Господа.

Псалом 34:1
Псалом Давида, когда он притворился безумным перед Авимелехом и был изгнан от него и удалился. Благословлю Господа во всякое время; хвала Ему непрестанно в устах моих.

Псалом 34:8
Вкусите и увидите, как благ Господь! Блажен человек, который уповает на Него!

Псалом 37:4
Ибо стрелы Твои вонзились в меня, и рука Твоя тяготеет на мне.

Псалом 42:1
Как лань желает к потокам воды, так желает душа моя к Тебе, Боже!

Псалом 46:1
Бог нам прибежище и сила, скорый помощник в бедах,

Псалом 46:10
Остановитесь и познайте, что Я -- Бог: буду превознесен в народах, превознесен на земле.

Псалом 51:10
Сердце чистое сотвори во мне, Боже, и дух правый обнови внутри меня.

Псалом 91:1
Живущий под кровом Всевышнего под сенью Всемогущего покоится,

Псалом 91:11
Ибо Ангелам Своим заповедает о тебе -- охранять тебя на всех путях твоих.

Псалом 100:1
Псалом хвалы. Воскликните Господу, вся земля!

Псалом 103:1
Благослови, душа моя, Господа! Господи, Боже мой, Ты дивно велик! Ты облечен в величие и великолепие;

Псалом 111:10
Начало мудрости -- страх Господень; разум верный у всех, исполняющих заповеди Его. Хвала Ему пребудет вовек.

Псалом 119:11
В сердце моем сокрыл я слово Твое, чтобы не грешить пред Тобою.

Псалом 119:105
Слово Твое -- светильник ноге моей и свет стезе моей.

Псалом 127:1
Песнь восхождения Соломона. Если Господь не созиждет дома, напрасно трудятся строители его; если Господь не охранит города, напрасно бодрствует страж.

Псалом 133:1
Песнь восхождения Давида. Вот, как хорошо и как приятно жить братьям вместе!

Псалом 139:14
Славлю Тебя, потому что я дивно устроен; дивны дела Твои, и душа моя вполне сознает это.


// 24 Biblia Platense (Straubinger)
std::map<std::string, std::vector<std::string>> psalms_verses = {
    {"Psalms", {
        "12:6 - Las palabras del Señor son palabras puras, plata refinada en el crisol de tierra, purificada siete veces.",
        "19:7 - La ley del Señor es perfecta, restaura el alma; el testimonio del Señor es fiel, da sabiduría al sencillo.",
        "23:1 - Salmo de David. El Señor es mi pastor, nada me faltará.",
        "23:4 - Aunque ande en valle de sombra de muerte, no temeré mal alguno, porque tú estarás conmigo; tu vara y tu cayado me infundirán aliento.",
        "24:1 - Del Señor es la tierra y su plenitud; el mundo y los que en él habitan.",
        "27:1 - Salmo de David. El Señor es mi luz y mi salvación; ¿a quién temeré? El Señor es la fortaleza de mi vida; ¿de quién he de atemorizarme?",
        "27:4 - Una cosa he demandado al Señor, ésta buscaré: que esté yo en la casa del Señor todos los días de mi vida, para contemplar la hermosura del Señor, y para inquirir en su templo.",
        "27:14 - Espera en el Señor; esfuérzate, y aliéntese tu corazón; sí, espera en el Señor.",
        "34:1 - De David, cuando fingió estar loco delante de Abimelec, y éste lo echó, y se fue. Bendeciré al Señor en todo tiempo; su alabanza estará de continuo en mi boca.",
        "34:8 - Gustad y ved que el Señor es bueno; bienaventurado el hombre que en él confía.",
        "37:4 - Deléitate asimismo en el Señor, y él te concederá las peticiones de tu corazón.",
        "42:1 - Al músico principal. Masquil de los hijos de Coré. Como el ciervo brama por las corrientes de las aguas, así clama por ti, oh Dios, el alma mía.",
        "46:1 - Al músico principal; de los hijos de Coré, sobre Alamot. Cántico. Dios es nuestro amparo y fortaleza, nuestro pronto auxilio en las tribulaciones.",
        "46:10 - Estad quietos, y conoced que yo soy Dios; seré exaltado entre las naciones, enaltecido seré en la tierra.",
        "51:10 - Crea en mí, oh Dios, un corazón limpio, y renueva un espíritu recto dentro de mí.",
        "91:1 - El que habita al abrigo del Altísimo morará bajo la sombra del Omnipotente.",
        "91:11 - Pues a sus ángeles mandará acerca de ti, que te guarden en todos tus caminos.",
        "100:1 - Salmo de alabanza. Cantad alegres a Dios, habitantes de toda la tierra.",
        "103:1 - Salmo de David. Bendice, alma mía, al Señor, y bendiga todo mi ser su santo nombre.",
        "111:10 - El principio de la sabiduría es el temor del Señor; buen entendimiento tienen todos los que practican sus mandamientos; su alabanza permanece para siempre.",
        "119:11 - En mi corazón he guardado tus dichos, para no pecar contra ti.",
        "119:105 - Lámpara es a mis pies tu palabra, y lumbrera a mi camino.",
        "127:1 - Cántico gradual para Salomón. Si el Señor no edificare la casa, en vano trabajan los que la edifican; si el Señor no guardare la ciudad, en vano vela la guardia.",
        "133:1 - Cántico gradual de David. Mirad cuán bueno y cuán delicioso es habitar los hermanos juntos en armonía.",
        "139:14 - Te alabaré; porque formidables, maravillosas son tus obras; estoy maravillado, y mi alma lo sabe muy bien."
    }}
};

// 27 Swedish Bible (1917)
std::map<std::string, std::vector<std::string>> psalms_verses = {
    {"Psalms", {
        "12:6 - HERRENS tal äro rena ord, silver luttrat i degel av jord, renat sju gånger.",
        "19:7 - HERRENS lag är utan brist och vederkvicker själen; HERRENS vittnesbörd är fast och gör den enfaldige vis.",
        "23:1 - En psalm av David. HERREN är min herde, mig skall intet fattas.",
        "23:4 - Om jag ock vandrar i dödsskuggans dal, fruktar jag intet ont, ty du är med mig; din käpp och stav, de trösta mig.",
        "24:1 - Av David; en psalm. Jorden är HERRENS och allt vad därpå är, jordens krets och de som bo därpå.",
        "27:1 - Av David; HERREN är mitt ljus och min frälsning; för vem skulle jag frukta? HERREN är mitt livs värn; för vem skulle jag rädas?",
        "27:4 - Ett har jag begärt av HERREN, därefter traktar jag: att jag må bo i HERRENS hus i alla mina livsdagar, för att skåda HERRENS ljuvlighet och betrakta hans tempel.",
        "27:14 - Hoppas på HERREN; var frimodig och oförfärad i ditt hjärta; ja, hoppas på HERREN.",
        "34:1 - Av David, när han förklädde sitt förstånd, där han mötte Abimelek, och denne drev honom ut, så att han gick bort. Jag vill lova HERREN alltid; hans pris skall ständigt vara i min mun.",
        "34:8 - Smaken och sen att HERREN är god; salig är den man som tager sin tillflykt till honom.",
        "37:4 - Och hav din lust i HERREN: då skall han giva dig vad ditt hjärta begär.",
        "42:1 - För sångmästaren; en sång av Koras söner. Såsom hjorten trägnar efter vattenbäckar, så trägnar min själ efter dig, o Gud.",
        "46:1 - För sångmästaren; en sång av Koras söner; till Alamót. En sång. Gud är vår tillflykt och starkhet, en hjälp i nöden, väl beprövad.",
        "46:10 - Bliven stilla och besinnen att jag är Gud; upphöjd bland hedningarna, upphöjd på jorden.",
        "51:10 - Skapa i mig, Gud, ett rent hjärta, och förnya inom mig en stadig ande.",
        "91:1 - Den som sitter under den Högstes beskärm och vilar under den Allsmäktiges skugga,",
        "91:11 - Ty han skall giva sina änglar befallning om dig att de skola bevara dig på alla dina vägar.",
        "100:1 - En tacksägelsepsalm. Höjen jubel till HERREN, alla länder.",
        "103:1 - Av David. Lova HERREN, min själ; ja, hela mitt inre love hans heliga namn.",
        "111:10 - HERRENS fruktan är vishetens begynnelse; ett gott förstånd få alla de som göra därefter. Hans lov består evinnerligen.",
        "119:11 - Jag gömmer ditt tal i mitt hjärta, för att jag icke skall synda mot dig.",
        "119:105 - Ditt ord är mina fötters lykta och ett ljus på min stig.",
        "127:1 - En vallfartssång av Salomo. Om HERREN icke bygger huset, så arbeta de fåfängt som bygga därpå; om HERREN icke bevarar staden, så vakar väktaren fåfängt.",
        "133:1 - En vallfartssång av David. Se, hur gott och ljuvligt det är att bröder bo endräktigt tillsammans.",
        "139:14 - Jag tackar dig för att jag är danad så övermåttan underbart; ja, underbara äro dina verk, min själ vet det väl."
    }}
};

// 29 Українська Біблія. Переклад Івана Огієнка.
std::map<std::string, std::vector<std::string>> psalms_verses_ukrainian = {
    {"Псалми", {
        "12:6 - Слова Господа – слова чисті, срібло, переплавлене на землі, осім разів очистене.",
        "19:7 - Закон Господа досконалий, відновлює душу; свідчення Господа вірне, мудрість робить простим.",
        "23:1 - Господь – пастир мій; не буду нуждатися.",
        "23:4 - Хоч я і йду долиною смертної темряви, не буду боятися лиха, бо ти зі мною; твій жезл і твій посох – ті заспокоюють мене.",
        "24:1 - Господня земля і все, що наповнює її, вселенна і всі її мешканці.",
        "27:1 - Псалом Давида. Господь – світло моє і спасіння моє; кого мені боятися? Господь – твердиня життя мого; кого мені боятися?",
        "27:4 - Одну річ я просив у Господа, того я шукаю: щоб перебувати в домі Господньому всі дні життя мого, щоб милуватися красою Господа і розглядати храм його.",
        "27:14 - Чекай на Господа! Будь мужній і тверде серце твоє, і чекай на Господа!",
        "34:1 - Псалом Давида, коли він удав, що божевільний, перед Авімелехом, і той прогнав його. Я благословляю Господа завжди; хвала Його буде завжди в устах моїх.",
        "34:8 - Смакуйте і бачте, що добрий Господь; блаженний чоловік, що надіється на Нього.",
        "37:4 - Радуйтеся в Господі, і Він дасть вам бажання серця вашого.",
        "42:1 - Як олень прагне до водних потоків, так прагне душа моя до Тебе, Боже.",
        "46:1 - Пісня для хору, з роду Корей. Бог нам притулок і сила, допомога в скорботах завжди готова.",
        "46:10 - Станьте і пізнайте, що Я – Бог; Я піднесений між народами, піднесений на землі.",
        "51:10 - Створи в мені, Боже, чисте серце і новий дух оновлюй всередині мене.",
        "91:1 - Хто живе під покровом Всевишнього, той оселиться під тінню Всемогутнього.",
        "91:11 - Бо Він накаже ангелам Своїм берегти тебе на всіх путях твоїх.",
        "100:1 - Радісна пісня. Співайте Господу, всі земні жителі!",
        "103:1 - Псалом Давида. Благослови, душе моя, Господа, і все, що в мені, святе ім'я Його.",
        "111:10 - Страх Господній – початок мудрості; усі, хто його виконує, мають розум. Його хвала триває вічно.",
        "119:11 - Я сховав слово Твоє в серці моєму, щоб не грішити проти Тебе.",
        "119:105 - Слово Твоє – лампа для ніг моїх і світло для стежок моїх.",
        "127:1 - Пісня сходження. Соломона. Якщо Господь не будує дому, даремно труяться будівничі; якщо Господь не охороняє міста, даремно пильнує сторож.",
        "133:1 - Пісня сходження Давида. Ось, як добре і як приємно, коли браття живуть разом.",
        "139:14 - Я дякую Тобі, бо я чудово створений; чудові Твої діла, і душа моя дуже знає це."
    }}
};


// 33 תנ ך עברי מודרני
std::map<std::string, std::vector<std::string>> psalms_verses = {
    {"Psalms", {
        "12:6 - אמרות יהוה אמרות טהורות, כסף צרוף בעליל לארץ מזוקק שבעתיים.",
        "19:7 - תורה יהוה תמימה משיבת נפש; עדות יהוה נאמנה מחכימת פתאים.",
        "23:1 - מזמור לדוד: יהוה רועי לא אחסר.",
        "23:4 - גם כי אלך בגיא צלמות, לא אירא רע כי אתה עמדי; שבטך ומשענתך, המה ינחמוני.",
        "24:1 - מזמור לדוד: ליהוה הארץ ומלואה, תבל ויושביה.",
        "27:1 - לדוד: יהוה אוריא וישעי ממי אירא; יהוה מעוז חיי, ממי אפחד.",
        "27:4 - אחת שאלתי מאת יהוה, אותה אבקש: שבת בבית יהוה כל ימי חיי, לחזות בנועם יהוה ולבקר בהיכלו.",
        "27:14 - חכה ליהוה, חזק ויאמץ לבך; וְחַכֵּה לַיהוָה.",
        "34:1 - מזמור לדוד, כאשר שינה את פניו לפני אבימלך, ויגרשנו וילך: אברך את יהוה בכל עת, תמיד תהלהו בפי.",
        "34:8 - טעמו וראו כי טוב יהוה; אשְׁרֵי הגבר חסה בו.",
        "37:4 - התענג על יהוה, ויתן לך משאלות לבך.",
        "42:1 - למנצח, למסכיל לבני קרח: כאשר תערוג אילות על אפיקי מים, כן נפשי עליך אלהים.",
        "46:1 - למנצח, על אלמות, לבני קרח, שיר: אלהים לנו מפלט ועוז, בעתות מצוקה נמצא מאוד.",
        "46:10 - הרפו וידעו כי אני אלהים; נעלה על גויים, נעלה על הארץ.",
        "51:10 - לב טהור ברא לי אלהים, ורוח נכון חדש בקרבי.",
        "91:1 - יושב בסתר עליון, בצל שדי יתלונן.",
        "91:11 - כי מלאכיו יצוה לך לשמרך בכל דרכיך.",
        "100:1 - מזמור תהלה: רננו ליהוה כל הארץ.",
        "103:1 - לדוד: ברכי נפשי את יהוה, וכל אשר בקרבי את שמו הקדש.",
        "111:10 - ראשית חוכמה יראת יהוה, שֵׂכֶל טוֹב לכל עשיהם; תהלתו עומדת לעד.",
        "119:11 - בספרך נתתי את אמרתך בתוך לבבי, למען לא אחטא לך.",
        "119:105 - נֵר רַגְלִי דְּבָרֶךָ, וְאוֹר לְנִתִּיבָתִי.",
        "127:1 - שיר המעלות: לשלמה אם יהוה לא יבנה בית, שוא עמלו בוניו בו; אם יהוה לא ישמור עיר, שוא שקד שומר.",
        "133:1 - שיר המעלות לדוד: הנה מה טוב ומה נעים, שבת אחים גם יחד.",
        "139:14 - אודך על כי נוראות נפליתי נפלאים מעשיך ונפשי ידעת מאד
    }}
};
