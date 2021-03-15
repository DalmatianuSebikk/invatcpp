//
// Created by dalmatianuSebikk on 3/15/2021.
//
void pointeri(){
    // AM SARIT PESTE CHESTIILE CARE TIN DE LUCRURI FACUTE IN LICEU
    // 1. POINTERII: O VARIABILA CE SE FOLOSESTE CA SA STOCHEZI ADRESA UNEI DATE. DE ACEEA DATELE POT FI IMPARTITE IN MAI MULTE
    //    TIPURI: VARIABILA DATA SI VARIABILA ADRESA

    //    DECLARAREA VARIABILELOR ADRESA:
    //-------------------------------------------------------------------------------------
    //    int *p; DECLARAREA PROPRIU ZISA
    //    int x = 10;
    //    int *p;
    //    p = &x; <- initializarea
    //    std::cout << p; <- pentru pointer afiseaza adresa in memorie, dar daca pui un * in fata atunci faci dereferentiere
    //    adica iti afiseaza la ce ai salvat tu adresa
    //-------------------------------------------------------------------------------------
    //      UTILIZAREA POINTERILOR:
    //      sectiunea de cod poate accesa o alta sectiune sau doar stiva din memorie. Nu poate accesa Heap memory. Acest lucru se poate
    //      realiza decat cu poiinteri.
    //      Presupunem ca ai un fisier in calculator. Fisierul ala nu poate fi accesat decat cu pointeri, deci folosim file pointers
    //      ca sa accesam fisierele, daca avem o conexiune la internet tot prin intermediul unui pointer se intampla asta
    //-------------------------------------------------------------------------------------
    //      HEAP MEMORY ALLOCATION:
    //      -> Memoria Heap este accesata dinamic, ceea ce inseamna ca marimea ei este alocata dinamic si este decisa in timpul
    //      rulatii, si nu in timpul compilarii
    //      -> Diferenta dintre memoria alocata in stack si memoria alocata in heap
    //      HEAP MEMORY NU SE STERGE AUTOMAT: o sa fie acolo cat timp programul ruleaza, deci tu daca vrei doar temporar sa o folosesti,
    //      e foarte important sa faci dealocare. HEAP MEMORY MUST BE DEALOCATED


    //    int A[5] = {1,2,3,4,5}; // daca declar asa, atunci o sa fie alocat in stack
    //    int *p;
    //    p = new int[2]; // chestia asta se cheama alocare dinamica (in heap), iar adresa lui p tot in stack e gasita
    //    p[0] = 1;
    //    p[1] = 2;
    //    std::cout << p << std::endl;
    //    for(int i = 0; i < 2; i++){
    //        std::cout << p[i] << std::endl;
    //    }
    //    delete[] p;
    //    p = nullptr;

    //-------------------------------------------------------------------------------------
    // POTI SA MODIFICI SIZE UL UNUI ARRAY DECLARAT DINAMIC
    //    int size;
    //    std::cin >> size;
    //    int *p = new int[size];
    //    int size2;
    //    std::cin >> size2;
    //    delete []p;
    //    p = new int[size2];
    //    int *p;
    //    int x = 10;
    //    p = &x;
    //    std::cout << x << " " << &x << " " << p << std::endl;
    //    std::cout << *p << std::endl;
    //-------------------------------------------------------------------------------------
    // OPERATII ARITMETICE CU POINTERI:
    // presupunem:
    int A[5] = {1,2,3,4,5};
    int *p = A; // ia adresa de la inceputul array-ului

    // 1. p++ -> se muta la locatia urmatoare (A NU SE CONFUNDA CU FAPTUL CA ADUNI 1 LA ADRESA, CI TE MUTI IN URMATORUL ELEMENT SAU CV)
    // 2. p-- -> se muta inapoi (la locatia de dinainte)
    // 3. p + constanta -> se muta cu "constanta" spatii mai incolo
    // 4. p - constanta -> se muta cu "constanta" spatii la stanga
    // 5. d = q - p -> scaderea a doi pointeri va rezulta ceva impartit la 2 in cazul nostru pentru ca int ocupa 2 biti.
    //                 scaderea a doi pointeri rezulta cu cate elemente este mai departe pointerul q de pointerul p

    //-------------------------------------------------------------------------------------
    // PROBLEME FOLOSIND POINTERII:
    // 1. pointeri neinitializati -> daca am declarat un pointer nu il folosesc pana nu il initializez!
    // 2. Memory leak -> se leaga de heap memory -> daca nu dealoci pointerul s-ar putea sa ramai fara memorie
    // 3. Dangling pointers -> vezi cand dai ca parametru un pointer la o functie cum stergi heap memory-ul pointerului dat ca parametru ca e nasol


    // REFERINTA:
    // este indicata cu ampersantul. Daca declari o referinta atunci trebuie sa o initializezi DOAR ATUNCI
    // referinta este doar un alias pentru o alta variabil / un alt nickname.
    // daca de exemplu noi avem un x = 10 si consideram un &y = x, atunci daca facem x++ -> x = y = 11, iar daca facem y++ -> x = y = 12
    // referinta NU CONSUMA MEMORIE DELOC!
}
