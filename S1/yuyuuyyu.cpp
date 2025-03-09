#include <iostream>
#include <iomanip>

using namespace std;

void Garis(int g) {
    cout << "|" ;
    for (int i = 0 ; i <= g ; i++){
        cout << "=" ;
    }
    cout << "|" ;
    cout << "\n";
}

char Predikat (double nilai) {
    if (nilai >= 91 && nilai <= 100) {
        return 'A';
    } else if (nilai >= 81 && nilai <= 90) {
        return 'B';
    } else if (nilai >= 71 && nilai <= 80) {
        return 'C';
    } else if (nilai >= 0 && nilai <= 70) {
        return 'D';
    } else {
        return 'X' ;
    }
}

bool ValidNilai(double nilai) {
    return nilai >= 0 && nilai <= 100;
}

char Ulang() {
    char ulang ;
    do {
        Garis(69) ;
        cout << "Apakah anda ingin mengulang (Y/T)? " ; cin >> ulang ;
        if (toupper(ulang) != 'Y' && toupper(ulang) != 'T') {
            cout << "Input tidak valid! Harap masukkan 'Y' untuk Ya atau 'T' untuk Tidak.\n" ;
        }
    } while (toupper(ulang) != 'Y' && toupper(ulang) != 'T') ;
    return ulang ;
}

// Induk Class
class Kelas {
protected:
    int Jkls;
    string NamaKelas[10] ;

public:
    void Input_Kelas() {
        system("cls") ;
        cout << "|======================================================================|\n"
                "|                    SISTEM PENGELOLAAN NILAI SISWA                    |\n"
                "|======================================================================|\n\n";
        do {
            cout << "Inputkan jumlah kelas (maksimal 10) : " ; cin >> Jkls ;
            cin.ignore();
            if (Jkls > 10 || Jkls <= 0) {
                cout << "Jumlah kelas tidak valid! Harap input antara 1-10.\n";
                Garis(69) ;
            }
        } while (Jkls > 10 || Jkls <= 0 ) ;
        for(int i = 0 ; i < Jkls ; i++){
            cout << "Inputkan kelas ke-" << i + 1 << " : " ; getline(cin,NamaKelas[i]) ;
        }
    }
};

// Turunan Class Kelas
class Siswa : public Kelas {
private :
    string NamaSiswa[10][15];
    int PilKelas, JumlahSiswa[10] = {0}, Nilai[10][15][7];;
    string Mapel[7] = { "Agama      ", "Indonesia  ", "Matematika ", "Inggris    ", "Fisika     ", "Kimia      ", "Biologi    " };
    bool cek = false ;

public :
    void Input_Nilai_Siswa() {
        system("cls");
        cout << "|======================================================================|\n"
                "|                    SISTEM PENGELOLAAN NILAI SISWA                    |\n"
                "|======================================================================|\n\n";
        if (Jkls == 0) {
            cout << "BELUM MENGINPUTKAN KELAS!!!\n";
        } else {
            cek = true ;
            cout << "List Kelas :\n";
            for (int i = 0; i < Jkls; i++) {
                cout << i + 1 << ". " << NamaKelas[i] << "\n";
            }
            cout << "Pilih Kelas (1- " << Jkls << ") : "; cin >> PilKelas;
            Garis(69) ;
            cin.ignore();

            if (PilKelas > Jkls || PilKelas <= 0) {
                cout << "KELAS TIDAK ADA!!!\n";
            } else {
                PilKelas--;
                do {
                    cout << "Inputkan Jumlah siswa di Kelas " << NamaKelas[PilKelas] << " (Maksimal 15): " ; cin >> JumlahSiswa[PilKelas];
                    cin.ignore();

                    if (JumlahSiswa[PilKelas] > 15 || JumlahSiswa[PilKelas] <= 0) {
                        cout << "Jumlah siswa tidak valid! Harap input antara 1-15.\n";
                        Garis(69) ;
                    }
                } while (JumlahSiswa[PilKelas] > 15 || JumlahSiswa[PilKelas] <= 0 ) ;

                for (int i2 = 0; i2 < JumlahSiswa[PilKelas]; i2++) {
                    Garis(69) ;
                    cout << "Inputkan Nama Siswa ke-" << i2 + 1 << ": " ; getline(cin, NamaSiswa[PilKelas][i2]) ;

                    for (int i3 = 0; i3 < 7; i3++) {
                        do {
                            cout << "    " << i3 + 1 << ".Inputkan Nilai Mata Pelajaran " << Mapel[i3] << ": " ; cin >> Nilai[PilKelas][i2][i3];


                            if (!ValidNilai(Nilai[PilKelas][i2][i3])) {
                                cout << "   Nilai harus antara 0-100!\n";
                            }
                        } while (!ValidNilai(Nilai[PilKelas][i2][i3]));
                        cin.ignore() ;
                    }
                }
            }
        }
    }

    void Tampilkan_Data() {
        system("cls");
        cout << "|======================================================================|\n"
                "|                    SISTEM PENGELOLAAN NILAI SISWA                    |\n"
                "|======================================================================|\n\n";
        if (cek == false) {
            cout << "BELUM MENGINPUTKAN DATA NILAI\n";
        } else {
            for (int i = 0; i < Jkls; i++) {
                if (JumlahSiswa[i] == 0){
                    cout << "\nKelas : " << NamaKelas[i] << " (Belum ada data siswa)\n";
                    Garis(69) ;
                    continue ;
                }

                cout << "\nKelas : " << NamaKelas[i] << "\n" ;
                for (int w = 0 ; w <= 143 ; w++){
                cout << "_" ;
                }
                cout << "\n" ;

                cout << "| No | Nama Siswa               | Agama      | Indonesia  | Matematika | Inggris    | Fisika     | Kimia      | Biologi    | Rata-rata | Grade |\n" ;
                cout << "|----|--------------------------|------------|------------|------------|------------|------------|------------|------------|-----------|-------|\n" ;
                // Nampilkan Nama Siswa
                for (int i2 = 0 ; i2 < JumlahSiswa[i] ; i2++){
                    int TotalNilai = 0;
                    cout << "| " << setw(3) << left << i2 + 1
                        << "| " << setw(25) << NamaSiswa[i][i2];

                // Nampilkan Nilai Siswa
                    for (int i3=0 ; i3 < 7 ; i3++){
                    cout << "| " << Nilai[i][i2][i3] << " (" << Predikat(Nilai[i][i2][i3]) << ")" << setw(7) << right;
                        TotalNilai += Nilai[i][i2][i3] ;
                    }

                // Nampilkan Rata rata Siswa
                    cout << "| " << left << setw(10) << fixed << setprecision(2) << TotalNilai / 7.0;;
                    cout << "| " << setw(6) << Predikat(TotalNilai / 7.0) << "|" <<"\n";

                    cout << "|----|--------------------------|------------|------------|------------|------------|------------|------------|------------|-----------|-------|\n" ;
                }
                cout << "\n" ;
            }
        }
    }
};


int main() {
    Siswa data ;
    char Pil ;

    do {
        system("cls") ;
        cout << "|======================================================================|\n"
                "|                    SISTEM PENGELOLAAN NILAI SISWA                    |\n"
                "|======================================================================|\n"
                "| Pilih menu di bawah ini                                              |\n"
                "|----------------------------------------------------------------------|\n"
                "| 1. Input Kelas                                                       |\n"
                "| 2. Input Nama dan Nilai                                              |\n"
                "| 3. Tampilkan Data Kelas, Nama, Nilai, Rata Rata, Dan Grade           |\n"
                "|======================================================================|\n\n"
                "Inputkan Pilihan 1-3 : " ; cin >> Pil ;

        switch(Pil){
            case '1' :
                data.Input_Kelas() ;
                break ;

            case '2' :
                data.Input_Nilai_Siswa() ;
                break ;

            case '3' :
                data.Tampilkan_Data() ;
                break ;

            default:
            system("cls");
            cout << "PILIHAN TIDAK ADA!!!" << "\n";
            break;
        }

    } while (toupper(Ulang()) == 'Y') ;

return 0;
}
