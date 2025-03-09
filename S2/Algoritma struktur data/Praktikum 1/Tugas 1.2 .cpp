#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Ukuran maksimal matriks

void OutputMat(int mat[MAX_SIZE][MAX_SIZE], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    int mat1[MAX_SIZE][MAX_SIZE];
    int mat2[MAX_SIZE][MAX_SIZE];
    int Hasil[MAX_SIZE][MAX_SIZE];

    cout << "Inputkan Ordo matrix N x N (maksimal " << MAX_SIZE << "): ";
    cin >> N;

    if (N > MAX_SIZE || N <= 0) {
        cout << "Ukuran matriks tidak valid! Harus antara 1 hingga " << MAX_SIZE << "." << endl;
        return 1;
    }

    // Input matriks 1
    cout << "Masukkan elemen Matriks 1:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> mat1[i][j];
        }
    }

    // Input matriks 2
    cout << "Masukkan elemen Matriks 2:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> mat2[i][j];
        }
    }

    cout << "\nMatriks 1:\n";
    OutputMat(mat1, N);

    cout << "\nMatriks 2:\n";
    OutputMat(mat2, N);

    // Penjumlahan
    cout << "\nPenjumlahan Matriks:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            Hasil[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    OutputMat(Hasil, N);

    // Pengurangan
    cout << "\nPengurangan Matriks:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            Hasil[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    OutputMat(Hasil, N);

    // Perkalian
    cout << "\nPerkalian Matriks:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            Hasil[i][j] = 0;
            for (int k = 0; k < N; k++) {
                Hasil[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    OutputMat(Hasil, N);

    return 0;
}