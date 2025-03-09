#include <iostream>
using namespace std;

class Karakter {
public:
    string nama ;
    string elemen ;

    void tampilkanInfo() {
        cout << "Nama: " << nama << endl ;
        cout << "Elemen: " << elemen << endl ;
    }
};

class Arlechino : public Karakter {
public:
    Arlechino() {
        nama = "Arlechino" ;
        elemen = "Pyro" ;
    }
};

class Ayaka : public Karakter {
public:
    Ayaka() {
        nama = "Ayaka" ;
        elemen = "Cryo" ;
    }
};

class Yelan : public Karakter {
public:
    Yelan() {
        nama = "Yelan" ;
        elemen = "Hydro" ;
    }
};

int main() {
    int pilihan ;
    cout << "Pilih karakter:\n" ;
    cout << "1. Arlechino\n" ;
    cout << "2. Ayaka\n" ;
    cout << "3. Yelan\n" ;
    cout << "Masukkan pilihan: " ; cin >> pilihan ;

    if (pilihan == 1) {
        Arlechino arlechino ;
        arlechino.tampilkanInfo() ;
    } else if (pilihan == 2) {
        Ayaka ayaka ;
        ayaka.tampilkanInfo() ;
    } else if (pilihan == 3) {
        Yelan yelan ;
        yelan.tampilkanInfo() ;
    } else {
        cout << "Pilihan tidak valid." << endl ;
    }

    return 0 ;
}
