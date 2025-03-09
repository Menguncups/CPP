#include <iostream>
using namespace std;

int main() {

  int angka ;
  cout << "Input angka : " ; cin >> angka ;

  if (angka > 0) {
  cout << "Merupakan angka positif" ;
  } else if (angka < 0) {
  cout << "Merupakan angka negatif" ;
  } else {
  cout << "Kamu mengimput angka 0" ;
  }
  return 0;
}