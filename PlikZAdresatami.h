#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami{

const string NAZWA_PLIKU_Z_ADRESATAMI;
int idOstatniegoAdresata;

bool czyPlikJestPusty(fstream &plikTekstowy);
Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
string pobierzLiczbe(string tekst, int pozycjaZnaku);
string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);

public:
PlikZAdresatami(string nazwaPlikuZAdresatami) : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami){
    idOstatniegoAdresata = 0;
}

int pobierzIdOstatniegoAdresata();
vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
bool dopiszAdresataDoPliku(Adresat adresat);

};



#endif
