#include <iostream>
using namespace std;

int main() {
int n, p;
cout << "Inputkan panjang pola X : " ; cin >> p ;
cout << "Inputkan banyaknya pola X : " ; cin >> n ;

for(int i= 1; i <= p; i++){
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == i || j == (n - i + 1)){
                cout << "* ";
                }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}
    return 0;
}
