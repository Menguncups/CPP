#include <iostream>
using namespace std;

int main() {
int x, y, jmlh = 0 ;
cout << "Inputkan bilangan awal : " ; cin >> x ;
cout << "Inputkan bilangan akhir : " ; cin >> y ;
cout << "Bilangan genap antara " << x << " dan " << y << " adalah = " ;

for(int i = x+1 ; i <y ; i++) {
  if (i % 2 == 0) {
    cout << i << " " ;
    jmlh ++ ;
  }
}
cout << "\nJumlah bilangannya ada = " << jmlh ;

  return 0;
}