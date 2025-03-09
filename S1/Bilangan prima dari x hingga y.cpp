#include <iostream>
using namespace std;

// Fungsi untuk mengecek apakah sebuah angka adalah bilangan prima
bool isPrime(int num) {
    if (num <= 1) return false; // Bilangan <= 1 bukan prima
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false; // Jika habis dibagi, bukan prima
    }
    return true; // Jika tidak ada pembagi, berarti prima
}

int main() {
    int A, N;

    // Input batas A dan N
    cout << "Masukkan batas A: ";
    cin >> A;
    cout << "Masukkan batas N: ";
    cin >> N;

    // Menampilkan bilangan prima dari A sampai N
    cout << "Bilangan prima dari " << A << " sampai " << N << " adalah: ";
    for (int i = A; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " "; // Tampilkan bilangan prima
        }
    }
    cout << endl;

    return 0;
}
