#include <iostream>
#include <stack>
using namespace std;

int main() {
    string kalimat;
    stack<char> tumpukan;

    // Meminta input kalimat dari pengguna
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    // Memasukkan setiap karakter ke dalam stack
    for (char karakter : kalimat) {
        tumpukan.push(karakter);
    }

    // Mengeluarkan karakter dari stack untuk membalikkan kalimat
    cout << "Hasil setelah dibalik: ";
    while (!tumpukan.empty()) {
        cout << tumpukan.top();
        tumpukan.pop();
    }
    cout << endl;

    system("pause");
    return 0;
}
