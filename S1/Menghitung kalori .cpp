#include <iostream>
#include <string>
using namespace std;

double hitungKalori(int aktivitas, double berat, int durasi) {
    double kaloriPerMenit ;

    switch (aktivitas) {
        case 1: // Lari
            kaloriPerMenit = 0.1 * berat ;
            break ;
        case 2: // Bersepeda
            kaloriPerMenit = 0.08 * berat ;
            break ;
        case 3: // Berenang
            kaloriPerMenit = 0.13 * berat ;
            break ;
        case 4: // Berjalan
            kaloriPerMenit = 0.05 * berat ;
            break ;
        default:
            return -1 ;
    }
    return kaloriPerMenit * durasi ;
}

int main() {
    int aktivitas ;
    double berat ;
    int durasi ;

    cout << "Pilih aktivitas:" ;
    cout << "\n1. Lari" ;
    cout << "\n2. Bersepeda" ;
    cout << "\n3. Berenang" ;
    cout << "\n4. Berjalan" ;
    cout << "\nMasukkan pilihan aktivitas (1/2/3/4): "; cin >> aktivitas;

    cout << "Masukkan berat badan Anda (kg): "; cin >> berat;
    cout << "Masukkan durasi aktivitas (menit): "; cin >> durasi;

    double kalori = hitungKalori(aktivitas, berat, durasi);
    if (kalori != -1){
        cout << "Kalori yang dibakar: " << kalori << " kcal" << endl;
    }else{
        cout << "Aktivitas tidak dikenal." << endl;
    }

system ("pause") ;
    return 0;
}
