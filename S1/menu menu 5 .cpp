#include <iostream>
using namespace std;

int main() {
    char menu;
    cout << "Pilih menu (1-5): ";
    cin >> menu;

    switch (menu) {
        case '1':
            cout << "Anda memilih Menu 1" << endl;
            break;
        case '2':
            cout << "Anda memilih Menu 2" << endl;
            break;
        case '3':
            cout << "Anda memilih Menu 3" << endl;
            break;
        case '4':
            cout << "Anda memilih Menu 4" << endl;
            break;
        case '5':
            cout << "Anda memilih Menu 5" << endl;
            break;
        default:
            cout << "Pilihan tidak valid! Harap pilih antara 1-5." << endl;
            break;
    }

    return 0;
}
