#include <iostream>
#include <stack>
using namespace std;

void konversiKeBasis(int angka, int basis) {
    stack<char> s;
    string digit = "0123456789ABCDEF";

    while (angka > 0) {
        s.push(digit[angka % basis]);
        angka /= basis;
    }

    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
}

int main() {
    int bilangan;
    
    cout << "Masukkan bilangan desimal: ";
    cin >> bilangan;

    cout << "Biner: ";
    konversiKeBasis(bilangan, 2);
    cout << endl;

    cout << "Oktal: ";
    konversiKeBasis(bilangan, 8);
    cout << endl;

    cout << "Heksadesimal: ";
    konversiKeBasis(bilangan, 16);
    cout << endl;

    system("pause");
    return 0;
}