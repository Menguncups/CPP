#include <iostream>
#include <iomanip>
#include <conio.h> // Header untuk getch()

using namespace std;

char Ulang() {
    char ulang;
    do {
        cout << "=====================================================================\n";
        cout << "Apakah anda ingin melihat jadwal lagi (Y/T)? ";
        ulang = getch(); // Menggunakan getch untuk menangkap input
        cout << ulang << endl; // Menampilkan karakter yang ditekan
        if (toupper(ulang) != 'Y' && toupper(ulang) != 'T') {
            cout << "Input tidak valid! Harap masukkan 'Y' untuk Ya atau 'T' untuk Tidak.\n";
        }
    } while (toupper(ulang) != 'Y' && toupper(ulang) != 'T');
    return ulang;
}

int main() {
    // Data mata kuliah
    struct MataKuliah {
        string nama;
        string ruangan;
        int sks;
        string waktu;
    };

    // Array data
    MataKuliah data[] = {
        {"Pemrograman C++", "Lab Komputer", 3, "Senin, 08:00-10:30"},
        {"Kalkulus", "Ruang 201", 4, "Selasa, 09:00-12:00"},
        {"Fisika Dasar", "Ruang 305", 3, "Rabu, 13:00-15:30"},
        {"Algoritma", "Lab Algoritma", 3, "Kamis, 08:00-10:30"},
        {"Basis Data", "Lab Basis Data", 3, "Jumat, 09:00-11:30"}
    };

    const int jumlahMataKuliah = sizeof(data) / sizeof(data[0]);
    char ulang;

    do {
        system("cls"); // Membersihkan layar
        cout << "_____________________________________________________________________________________\n";
        cout << "| NO |      Mata Kuliah       |    Ruangan       | Jumlah SKS |        Waktu        |\n";
        cout << "|----|------------------------|------------------|------------|---------------------|\n";

        for (int i = 0; i < jumlahMataKuliah; i++) {
            cout << "| " << setw(2) << left << i + 1 << " | "
                 << setw(23) << data[i].nama << "| "
                 << setw(17) << data[i].ruangan << "| "
                 << setw(11) << data[i].sks << "| "
                 << setw(20) << data[i].waktu << "|\n";
        }
        cout << "|----|------------------------|------------------|------------|---------------------|\n";

    } while (toupper(Ulang()) == 'Y');

    return 0;
}
