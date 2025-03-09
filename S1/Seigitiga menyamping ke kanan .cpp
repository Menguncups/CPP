#include <iostream>
using namespace std;

int main() {
    int n ;
cout << "Inputkan tinggi segitiga : "; cin >> n ;

int x = n - 4, y = n - 4 ;

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* " ;
        }
        cout << "\n" ;
    }

    for (int i = y - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* " ;
        }
        cout << "\n" ;
    }
    return 0;
}
