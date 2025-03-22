#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    // Menambahkan elemen ke antrian
    for (int i = 11; i <= 21; i++) {
        q.push(i);
    }

    // Menampilkan isi antrian
    cout << "Isi antrian: ";
    queue<int> temp = q; // Salinan antrian untuk ditampilkan tanpa menghapus elemen
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }

    // Menghapus beberapa elemen dari antrian
    cout << "\nHapus Item = " << q.front(); q.pop();
    cout << "\nHapus Item = " << q.front(); q.pop();
    cout << "\nHapus Item = " << q.front(); q.pop();

    // Menampilkan isi antrian setelah penghapusan
    cout << "\nIsi antrian setelah penghapusan: ";
    temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }

    return 0;
}
