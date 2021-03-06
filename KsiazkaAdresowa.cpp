#include "KsiazkaAdresowa.h"


void KsiazkaAdresowa::rejestracjaUzytkownika(){
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika(){

    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany()){
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika(){
    return uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow(){
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany(){
    uzytkownikMenedzer.czyUzytkownikJestZalogowany();
}

void KsiazkaAdresowa::wylogowanieUzytkownika(){
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(){
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}


char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego(){

    char wybor;
    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    cin.sync();
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    cin.sync();
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

void KsiazkaAdresowa::dodajAdresata(){
    adresatMenedzer->dodajAdresata();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow(){
    adresatMenedzer->wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu(){
    adresatMenedzer->wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku(){
    adresatMenedzer->wyszukajAdresatowPoNazwisku();
}

void KsiazkaAdresowa::edytujAdresata(){
    adresatMenedzer->edytujAdresata();
}

void KsiazkaAdresowa::usunAdresata(){
    adresatMenedzer->usunAdresata();
}
