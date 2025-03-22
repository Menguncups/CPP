#include <iostream>
using namespace std;

int main() {

    // Deklarasi variabel
    int a = 12, b, c = 50, d = 2, e, f, g ;
    b = c - 5 ;

    // Menghitung nilai dan menampilkan hasil dari a + b * c + 2
    cout << "a) Hasil dari a + b * c + 2 adalahh = " <<  a + b * c + 2 << endl ;

    // Menghitung nilai dan menampilkan hasil dari c * b - c / 2
    cout << "b) Hasil dari c * b - c / 2 adalahh = " <<  c * b - c / 2 << endl ;

    // Mencari nilai dari variabel e
    e = b * 50 / 2 + a * b ;
    cout << "c) Hasil dari b * 50 / 2 + a * b yang disimpan ke variabel e adalahh = " << e << endl ;

    // Mencari nilai dari variabel f
    f = b * c * a + a + 5 * e ;
    cout << "d) Hasil dari b * c * a + a + 5 * e yang disimpan ke variabel f adalahh = " << f << endl ;

    // Menampilkan hasil dari variabel g
    g = f * 25 ;
    cout << "e) Nilai g adalahh = " << g << endl ;

  return 0 ;
}