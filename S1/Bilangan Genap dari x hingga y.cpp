#include <iostream>
using namespace std;

int main() {
    int x, y, count = 0;

    // Meminta input dari pengguna
    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai y: ";
    cin >> y;

    // Menampilkan bilangan genap antara x dan y
    cout << "Bilangan genap antara " << x << " dan " << y << " adalah: ";
    
    // Jika x lebih besar dari y, tukar x dan y
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    // Loop untuk menemukan bilangan genap antara x dan y
    for (int i = x; i <= y; i++) {
        if (i % 2 == 0) {
            cout << i << " ";  // Menampilkan bilangan genap
            count++;           // Menghitung bilangan genap
        }
    }

    cout << endl;
    cout << "Jumlah bilangan genap: " << count << endl;

    return 0;
}
