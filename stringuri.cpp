//
// Created by sebas on 3/15/2021.
//
#include <iostream>
void stringuri(){
    //STRING -> O COLECTIE DE CARACTERE

    //MODALITATI DE A REPREZENTA UN STRING:
    //  -> char array
    //  -> clasa string

    /*
     * char x = 'A'; am initializat un singur caracter
     * char S[10] = "Hello"; capacitatea este 10, chiar daca am stocat 4 + 1 caractere (+ \0)
     * char S[] = "Hello"; initializeaza size-ul automat
     * char S[] ={65,66,67,68, '\0'}
     * char *S = "Hello"; -> creeaza stringul in heap
     */

    // CITIREA SI SCRIEREA STRINGURILOR
    /*
     * char s[20];
     * cout <<"Nume"<<endl;
     * cin >> s;
     * SAU
     * cin.get(s,20); // sa ai grija cum e cu enterurile aici, poti folosi cin.ignore() daca e vreo problema
     * SAU
     * cin.getline(s, 50);
     */

    // FUNCTII PE STRING:
    /*
     * -> importezi biblioteca cstring
     * strlen(string) -> lungimea unui string
     * strcat(destinatie, sursa) -> concatenare de stringuri
     * strncat(destinatie, sursa, lungime) -> concatenare de stringuri cu primele "lungime" litere din sursa
     * strcpy(destinatie, sursa) -> copiere de stringuri
     * strncpy(destinatie, sursa, lungime) -> copiaza doar primele lungime din litere
     */

    // CLASA STRING:
    /*
     * -> clasa built in in C++
     * -> incluzi biblioteca <string>
     * string str; -> in cazul asta str e obiect
     */
    // METODE/FUNCTII BASIC PENTRU CLASA STRING
    /*
     * s.length() -> lungimea unui string
     * s.size() -> acelasi lucru
     * s.capacity() -> arata cate caractere poti sa adaugi in stringul respectiv
     * s.resize(numar) -> poti mari / micsora capacitatea unui vector
     * s.max_size() -> arata cate caractere maxim poti sa bagi (cu tot cu capacitatea marita)
     * s.clear() -> curata stringul
     * s.empty() -> verifica daca e gol sau nu

     FUNCTII DE APPEND SI INSERT:
     * s.append(string) -> adaugi la finalul stringului
     * s.insert(numar, string) -> insereaza la index numar stringul dat ca param. mai ai un parametru optional care sa iti arate cat introduci din string
     * s.replace(numar1, numar2, string) -> dai replace cu string la substringul care incepe de la index numar1 si are lungimea numar2
     * s.erase() -> e un clear()
     * s.push_back(caracter) -> adauga la final un caracter
     * s.pop_back() -> backspace
     * s1.swap(s2) -> exact ce zice si metoda, faci swap
     */
}