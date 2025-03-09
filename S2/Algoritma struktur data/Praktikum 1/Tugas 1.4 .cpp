#include <iostream>
#include <map>
using namespace std;

#define MAX_DERAJAT 10

// Fungsi untuk mencetak polinom
void cetakPolinom(const int polinom[]) {
    bool pertama = true;
    for (int i = MAX_DERAJAT; i >= 0; i--) {
        if (polinom[i] != 0) {
            if (!pertama && polinom[i] > 0) cout << " + ";
            else if (polinom[i] < 0) cout << " - ";
            cout << abs(polinom[i]);
            if (i > 0) cout << "x^" << i;
            pertama = false;
        }
    }
    cout << endl;
}

// Penjumlahan dua polinom
void tambahPolinom(const int p1[], const int p2[], int hasil[]) {
    for (int i = 0; i <= MAX_DERAJAT; i++) {
        hasil[i] = p1[i] + p2[i];
    }
}

// Pengurangan dua polinom
void kurangPolinom(const int p1[], const int p2[], int hasil[]) {
    for (int i = 0; i <= MAX_DERAJAT; i++) {
        hasil[i] = p1[i] - p2[i];
    }
}

// Perkalian dua polinom
void kaliPolinom(const int p1[], const int p2[], int hasil[]) {
    for (int i = 0; i <= MAX_DERAJAT; i++) {
        for (int j = 0; j <= MAX_DERAJAT; j++) {
            if (i + j <= MAX_DERAJAT) {
                hasil[i + j] += p1[i] * p2[j];
            }
        }
    }
}

// Turunan polinom
void turunanPolinom(const int polinom[], int hasil[]) {
    for (int i = 1; i <= MAX_DERAJAT; i++) {
        hasil[i - 1] = i * polinom[i];
    }
}

int main() {
    int P1[MAX_DERAJAT + 1] = {15, 0, 1, 0, 5, 0, 8, 6, 0, 0, 0};
    int P2[MAX_DERAJAT + 1] = {10, 0, 2, 3, 3, 0, 4, 4, 0, 3, 0};
    int P3[MAX_DERAJAT + 1] = {5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    int hasil[MAX_DERAJAT + 1] = {0};

    cout << "Polinom P1: ";
    cetakPolinom(P1);
    cout << "Polinom P2: ";
    cetakPolinom(P2);
    cout << "Polinom P3: ";
    cetakPolinom(P3);

    tambahPolinom(P1, P2, hasil);
    cout << "\nPenjumlahan (P1 + P2): ";
    cetakPolinom(hasil);

    fill_n(hasil, MAX_DERAJAT + 1, 0);
    kurangPolinom(P1, P2, hasil);
    cout << "\nPengurangan (P1 - P2): ";
    cetakPolinom(hasil);

    fill_n(hasil, MAX_DERAJAT + 1, 0);
    kaliPolinom(P1, P3, hasil);
    cout << "\nPerkalian (P1 * P3): ";
    cetakPolinom(hasil);

    fill_n(hasil, MAX_DERAJAT + 1, 0);
    turunanPolinom(P2, hasil);
    cout << "\nTurunan P2: ";
    cetakPolinom(hasil);
    system("pause");

    return 0;
}
