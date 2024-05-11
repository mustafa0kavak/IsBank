#include "library.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <random>
#include <string>

using namespace std;

int main() {

    cout << "_______    ____              _     \n"
        "|_   _|   |  _ \\            | |    \n"
        "  | |  ___| |_) | __ _ _ __ | | __ \n"
        "  | | / __|  _ < / _` | '_ \\| |/ / \n"
        " _| |_\\__ \\ |_) | (_| | | | |   <  \n"
        "|_____|___/____/ \\__,_|_| |_|_|\\_\\ \n";

    int startSelect;
    string name, surname, line;

    cout << "IsBank'a Hosgeldiniz. \n"
        "_____________________ \n"
        "1. Hesap Olustur \n"
        "2. Bakiye Sorgu \n"
        "3. Para Yatir \n"
        "4. Para Cek \n"
        //"5. Para Gonder \n"
        //"6. Hesabi Sil \n"
        "7. Cikis \n";

    cin >> startSelect;

    switch (startSelect) {
    case 1: {
        createAccount(name,surname,line);
        break;
    }
    case 2: {
        bakiyeSorgu(name,surname,line);
        break;
    }
    case 3: {
        paraYatir(name,surname,line);
        break;
    }
    case 4: {
        paraCek(name,surname,line);
        break;
    }
    case 7: {
        break;
    }
    default:
        cout << "Gecersiz secim.\n";
        break;
    }

    return 0;
}
