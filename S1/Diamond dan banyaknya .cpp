#include <iostream>
using namespace std;

int main() {
int n, p ;

cout << "Inputkan banyaknya diamond : " ; cin >> p ;

while(true){
cout << "Inputkan panjang diamond (harus ganjil): " ; cin >> n ;

if(n % 2 != 0 ){
        for(int i=1; i <= p; i++ ){
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n - i; j++) {
                cout << " ";
            }
            for(int k = 1; k <= (2 * i - 1); k++) {
                cout << "*";
            }
            cout << "\n";
        }
        for(int i = n - 1; i >= 1; i--){
            for(int j = 1; j <= n - i; j++){
                cout << " " ;
            }
            for(int k = 1; k <= (2 * i - 1); k++){
                cout << "*" ;
            }
            cout << "\n" ;
        }
    }
    break ;

    }else {
        cout << "Harus menginputkan angka ganjil.\n" ;
}
}
    return 0;
}
