#include <iostream>
using namespace std;

int main() {
    char arr[] = {'p', 'e', 'n', 's', 'i', 't'};
    int panjang = sizeof(arr) / sizeof(arr[0]);

    // Sebelum dibalik
    cout << "Array sebelum dibalik : " ;
    for (int i= 0 ; i < panjang ; i++) {
        cout << arr[i];
    }
    cout << endl ; 

    // Membalik array
    for (int i = 0; i < panjang / 2; i++) {
        char temp = arr[i];
        arr[i] = arr[panjang - i - 1];
        arr[panjang - i - 1] = temp;
    }

    cout << "Array setelag dibalik : " ;
    // Cetak hasil
    for (int i = 0; i < panjang; i++) {
        cout << arr[i];
    }
    cout << endl;
    system("pause");

    return 0;
}   