#include <iostream>
#include <queue>
using namespace std;

struct Mahasiswa {
    string nrp, nama;
    int nilai;

    bool operator<(const Mahasiswa& m) const {
        return nilai < m.nilai;
    }
};

void cetakPop(priority_queue<Mahasiswa> &pq) {
    if (!pq.empty()) {
        Mahasiswa top = pq.top();
        cout << top.nrp << " " << top.nama << " " << top.nilai << endl;
        pq.pop();
    }
}

int main() {
    priority_queue<Mahasiswa> pq;

    pq.push({"01", "Andi", 70});
    pq.push({"02", "Budi", 85});
    pq.push({"03", "Candra", 80});
    
    cetakPop(pq); // Pop pertama

    pq.push({"04", "Didik", 90});
    pq.push({"05", "Edi", 85});

    cetakPop(pq); // Pop kedua

    pq.push({"06", "Fanda", 75});

    cetakPop(pq); // Pop ketiga

    return 0;
}
