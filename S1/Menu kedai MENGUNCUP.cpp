#include <iostream>
#include <string>
using namespace std;

int main() {

// Daftar menu minuman
int minuman, jmlhminuman, ttlminuman ;
char pilihan ;
do {
  cout << "Selamat datang di kedai MENGUNCUP\n\n" ;
  cout << "Menu minuman yang ada dikedai\n" ;  
  cout << "1. Air Mineral         Rp6.000\n" ; 
  cout << "2. Kopi Hitam          Rp8.000\n" ;
  cout << "3. Teh Panas/Dingin    Rp8.000\n" ;
  cout << "4. Lemonade            Rp9.000\n\n" ;
  cout << "Silahkan pilih minuman yang ada inginkan (1-4): " ; cin >> minuman ;

// Jumlah pesanan dan harga minuman
switch (minuman) {
  case 1 : cout << "Jumlah Air Mineral yang akan dibeli : " ; cin >> jmlhminuman ;
    ttlminuman = jmlhminuman * 6000 ; break ;
  case 2 : cout << "Jumlah Kopi Hitam yang akan dibeli : " ;  cin >> jmlhminuman ;
    ttlminuman = jmlhminuman * 8000 ; break ;
  case 3 : cout << "Jumlah Teh yang akan dibeli : " ;         cin >> jmlhminuman ;
    ttlminuman = jmlhminuman * 8000 ; break ;
  case 4 : cout << "Jumlah Lemonade yang akan dibeli : " ;    cin >> jmlhminuman ;
    ttlminuman = jmlhminuman * 9000 ; break ;
  default : cout << "Pililah sesuai list menu yang ada" ; break ;}

  cout << "=========================================================" ; 
system("cls") ;

// Daftar menu makanan
int makanan, jmlhmakanan, ttlmakanan ;
  cout << "\nMenu makanan yang ada dikedai\n" ;  
  cout << "1. Nasi Goreng         Rp15.000\n" ; 
  cout << "2. Bakso               Rp12.000\n" ;
  cout << "3. Mie Ayam            Rp13.000\n" ;
  cout << "4. Mie Rebus           Rp10.000\n\n" ;
  cout << "Silahkan pilih makanan yang ada inginkan (1-4) : " ; cin >> makanan ;

// Jumlah pesanan dan harga makanan
switch (makanan) {
  case 1 : cout << "Jumlah Nasi Goreng yang akan dibeli : " ; cin >> jmlhmakanan ;
    ttlmakanan = jmlhmakanan * 15000 ; break ;
  case 2 : cout << "Jumlah Bakso yang akan dibeli : " ;       cin >> jmlhmakanan ;
    ttlmakanan = jmlhmakanan * 12000 ; break ;
  case 3 : cout << "Jumlah Mie ayam yang akan dibeli : " ;    cin >> jmlhmakanan ;
    ttlmakanan = jmlhmakanan * 13000 ; break ;
  case 4 : cout << "Jumlah Mie Rebus yang akan dibeli : " ;   cin >> jmlhmakanan ;
    ttlmakanan = jmlhmakanan * 10000 ; break ;
  default : cout << "Pililah sesuai list menu yang ada" ; }
  cout << "=========================================================" ;
  
//eksekusi perhitungan harga dan diskon
int ttlhargamami, dptdiskon, bayar, kembali ;
    ttlhargamami = ttlminuman + ttlmakanan;

if (ttlhargamami >= 50000) {
  cout << "\nSelamat anda mendapatkan diskon sebesar 10%\n" ;
  cout << "Total tagihan anda sebelum diskon : " << ttlhargamami ;
    dptdiskon = ttlhargamami * 0.1 ;
  cout << "\nAnda mendapatkan diskon sebesar : " << dptdiskon ;
  cout << "\n=========================================================" ;
    ttlhargamami = ttlhargamami - dptdiskon ;
  cout << "\nTotal tagihan yang harus anda bayar : " << ttlhargamami ; }
else {
  cout << "\nTotal tagihan anda : " << ttlhargamami ; }
  
  // Eksekusi pembayaran oleh user
  cout << "\nInputkan jumlah uang yang akan anda bayarkan : " ; cin >> bayar ;
    kembali = bayar - ttlhargamami ; 
  cout << "Kembalian anda : " << kembali ;
  cout << "\n=========================================================" ;
  cout << "\nApakah Anda ingin memesan minuman lain? (y/n): "; cin >> pilihan ; 
  cout << "=========================================================\n" ;
}
while(pilihan == 'y' || pilihan == 'Y') ;
  cout << "Terimakasih sudah berbelanja di kedai MENGUNCUP\n" ; 

system("pause") ;
  return 0;
}