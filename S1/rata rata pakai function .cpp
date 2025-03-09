#include <iostream>
using namespace std ;

float hitungRataRata(int arr[], int ukuran) {
    int total = 0 ;
    for (int i = 0; i < ukuran; i++) {
        total += arr[i] ;
    }
    return static_cast<float>(total) / ukuran ;
}

void inputNilai (int nilai[], int ukuran) {
    cout << "Masukkan nilai-nilai :\n" ;
    for (int i = 0; i < ukuran; i++) {
        cout << "Nilai ke-" << i + 1 << ": " ;
        cin >> nilai[i] ;
    }
    cin.ignore() ;
}

int main() {
    int ukuran ;
    string nama ;

    cout << "Inputkan Nama : " ; getline (cin, nama) ;
    cout << "Masukkan jumlah elemen : " ; cin >> ukuran ;

    int nilai[ukuran] ;
    
    inputNilai(nilai, ukuran) ;

    cout << "=================================\n" ;
    cout << "Nama : " << nama << "\n" ;
    cout << "Rata-rata : " << hitungRataRata(nilai, ukuran) << "\n" ;

    system("pause") ;

    return 0 ;
}
