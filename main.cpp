#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int _main() {
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    char wybor;
    while (true) {
        if (ksiazkaAdresowa.czyUzytkownikJestZalogowany()) {

            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor) {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        } else {
            //if (adresaci.empty() == true)
            //idOstatniegoAdresata = wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();
            switch (wybor) {
            case '1':
                //idOstatniegoAdresata = dodajAdresata(adresaci, idZalogowanegoUzytkownika, idOstatniegoAdresata);
                break;
            case '2':
                //wyszukajAdresatowPoImieniu(adresaci);
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            }
        }
    }
    return 0;
}

//ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
//ksiazkaAdresowa.rejestracjaUzytkownika();


//TESTY PlikZAdresatami

#include "Adresat.h"
#include "PlikZAdresatami.h"

int main(){


PlikZAdresatami plikZAdresatami("Adresaci.txt");
plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(3);
//cout << plikZAdresatami.pobierzIdOstatniegoAdresata();

}
