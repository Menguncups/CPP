#include <iostream>
using namespace std;

int main() {
    int menu;
    cout << "Pilih menu (1-5): ";
    cin >> menu;

    if (menu == 1) {
        cout << "Anda memilih Menu 1" << endl;
    } else if (menu == 2) {
        cout << "Anda memilih Menu 2" << endl;
    } else if (menu == 3) {
        cout << "Anda memilih Menu 3" << endl;
    } else if (menu == 4) {
        cout << "Anda memilih Menu 4" << endl;
    } else if (menu == 5) {
        cout << "Anda memilih Menu 5" << endl;
    } else {
        cout << "Pilihan tidak valid! Harap pilih antara 1-5." << endl;
    }

system("pause");
    return 0;
}
