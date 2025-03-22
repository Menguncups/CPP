#include <iostream>
using namespace std;

struct Node {
    int nomorMobil;
    Node* next;
};

class TempatParkir {
private:
    Node* head;

public:
    TempatParkir() {
        head = nullptr;
    }

    bool isEmpty() {
        return head == nullptr;
    }

    void mobilMasuk(int nomor) {
        Node* newNode = new Node{nomor, nullptr};
        if (isEmpty()) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        printParkir();
    }

    void mobilKeluarDepan() {
        if (isEmpty()) {
            cout << "Parkir kosong!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        printParkir();
    }

    void mobilKeluarTengah(int nomor) {
        if (isEmpty()) {
            cout << "Parkir kosong!" << endl;
            return;
        }
        if (head->nomorMobil == nomor) {
            mobilKeluarDepan();
            return;
        }
        Node* temp = head;
        Node* prev = nullptr;

        while (temp != nullptr && temp->nomorMobil != nomor) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Mobil tidak ditemukan!" << endl;
            return;
        }

        prev->next = temp->next;
        delete temp;
        printParkir();
    }

    void printParkir() {
        cout << "Keadaan Parkir: ";
        if (isEmpty()) {
            cout << "(kosong)";
        } else {
            Node* temp = head;
            while (temp != nullptr) {
                cout << temp->nomorMobil << " ";
                temp = temp->next;
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
    
    return 0;
}
