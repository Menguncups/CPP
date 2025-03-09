#include <iostream>
using namespace std;

// Definisi struct untuk bilangan kompleks
struct Complex {
    double real;
    double imag;
};

// Fungsi penjumlahan
Complex add(Complex a, Complex b) {
    return {a.real + b.real, a.imag + b.imag};
}

// Fungsi pengurangan
Complex subtract(Complex a, Complex b) {
    return {a.real - b.real, a.imag - b.imag};
}

// Fungsi perkalian
Complex multiply(Complex a, Complex b) {
    return {a.real * b.real - a.imag * b.imag, a.real * b.imag + a.imag * b.real};
}

// Fungsi pembagian
Complex divide(Complex a, Complex b) {
    double denominator = b.real * b.real + b.imag * b.imag;
    return {(a.real * b.real + a.imag * b.imag) / denominator,
            (a.imag * b.real - a.real * b.imag) / denominator};
}

int main() {
    Complex num1, num2, result;
    char operation;

    // Input bilangan kompleks
    cout << "Masukkan bilangan kompleks pertama (real dan imag): ";
    cin >> num1.real >> num1.imag;
    cout << "Masukkan bilangan kompleks kedua (real dan imag): ";
    cin >> num2.real >> num2.imag;
    
    // Input operasi
    cout << "Masukkan operasi (+, -, *, /): ";
    cin >> operation;

    // Pilih operasi berdasarkan simbol
    switch (operation) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            cout << "Operasi tidak valid!" << endl;
            return 1;
    }

    // Output hasil
    cout << "Hasil: " << result.real << " + " << result.imag << "i" << endl;
    system("pause");

    return 0;
}

