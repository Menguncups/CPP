#include <iostream>
using namespace std;

#define MAX 10

class TempatParkir {
private:
    int parkir[MAX];
    int count;

public:
    TempatParkir() {
        count = 0;
    }

    bool isFull() {
        return count == MAX;
    }

    bool isEmpty() {
        return count == 0;
    }

    void mobilMasuk(int nomor) {
        if (isFull()) {
            cout << "Parkir penuh!" << endl;
            return;
        }
        parkir[count++] = nomor;
        printParkir();
    }

    void mobilKeluarDepan() {
        if (isEmpty()) {
            cout << "Parkir kosong!" << endl;
            return;
        }
        for (int i = 0; i < count - 1; i++) {
            parkir[i] = parkir[i + 1];
        }
        count--;
        printParkir();
    }

    void mobilKeluarTengah(int nomor) {
        if (isEmpty()) {
            cout << "Parkir kosong!" << endl;
            return;
        }
        int temp[MAX], tempCount = 0, index = -1;

        for (int i = 0; i < count; i++) {
            if (parkir[i] == nomor) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            cout << "Mobil tidak ditemukan!" << endl;
            return;
        }

        for (int i = count - 1; i > index; i--) {
            temp[tempCount++] = parkir[i];
            count--;
        }
        count--;

        while (tempCount > 0) {
            parkir[count++] = temp[--tempCount];
        }

        printParkir();
    }

    void printParkir() {
        cout << "Keadaan Parkir: ";
        if (isEmpty()) {
            cout << "(kosong)";
        } else {
            for (int i = 0; i < count; i++) {
                cout << parkir[i] << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    TempatParkir parkir;

    parkir.mobilMasuk(101);
    parkir.mobilMasuk(102);
    parkir.mobilMasuk(103);
    parkir.mobilMasuk(104);

    parkir.mobilKeluarDepan();
    parkir.mobilMasuk(105);

    parkir.mobilKeluarTengah(103);
    
    system("pause");
    return 0;
}
