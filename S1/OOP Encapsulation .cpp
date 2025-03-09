#include <iostream>
using namespace std;

class RekeningBank {
private:
    string nomorRekening ;
    double saldo ;

public:
    RekeningBank(string nomor, double saldoAwal) {
        nomorRekening = nomor ;
        saldo = saldoAwal ;
    }
    
    void setor(double jumlah) {
        saldo += jumlah ;
    }
    
    bool tarik(double jumlah) {
        if(saldo >= jumlah) {
            saldo -= jumlah ;
            return true ;
        }
        return false ;
    }
    
    void cekSaldo() {
        cout << "Saldo rekening " << nomorRekening << ": Rp." << saldo << endl ;
    }
} ;

int main() {
    int s, t ;

    RekeningBank rek("239850122", 0) ;
    cout << "Inputkan jumlah uang yang akan anda setor : " ; cin >> s ;
    rek.setor(s) ;
    rek.cekSaldo() ;

    cout << "Inputkan jumlah uang yang akan anda tarik : " ; cin >> t ;
    rek.tarik(t) ;
    rek.cekSaldo() ;
    cout << endl ;

    return 0 ;
}