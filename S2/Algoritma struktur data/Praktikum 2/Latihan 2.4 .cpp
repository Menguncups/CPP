#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

bool adalahPalindrom(const string &kalimat) {
    stack<char> tumpukan;
    string bersih;

    // Membersihkan kalimat dari spasi dan mengubah ke huruf kecil
    for (char karakter : kalimat) {
        if (isalnum(karakter)) {
            bersih += tolower(karakter);
            tumpukan.push(tolower(karakter));
        }
    }

    // Membandingkan karakter dari stack dengan kalimat bersih
    for (char karakter : bersih) {
        if (karakter != tumpukan.top()) {
            return false;
        }
        tumpukan.pop();
    }
    return true;
}

int main() {
    string kalimat;
    
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    if (adalahPalindrom(kalimat)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    system("pause");
    return 0;
}
