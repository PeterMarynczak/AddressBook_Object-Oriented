#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

class MetodyPomocnicze{

public:
    static string konwerjsaIntNaString(int liczba);
    static char wczytajZnak();
    static int konwersjaStringNaInt(string liczba);
    static string wczytajLinie();
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static int podajIdWybranegoAdresata();
    static int wczytajLiczbeCalkowita();
};

#endif
