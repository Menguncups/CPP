#include <iostream>
using namespace std;

int main() {
    int n, angka = 1;
    cout << "Inputkan tinggi segitiga pascal : " ; cin >> n ;
    
    for(int i = 0; i < n; i++) {
        for(int spasi = 1; spasi <= n - i; spasi++)
            cout << "  ";
        for(int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                angka = 1;
            else
                angka = angka * (i - j + 1) / j;
            cout << angka << "   ";
        }
        cout << endl;
    }
    return 0;
}