#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

// Fungsi tanpa nilai balik
void menu (){
    cout << "Menu Pilihan" << endl;
    cout << "1. Input Data Diri" << endl;
    cout << "2. Input Data Teman" << endl;
    cout << "3. Tampilkan Data " << endl;
    cout << "Input pilihan anda (1/2/3)? ";
}

//Fungsi dengan nilai balik tanpa parameter
char pilihanMenu () {
    return getch();
}

//Fungsi tanpa nilai balik dengan parameter
void inputan_nama (string nama [10], int counter) { 
    cout << "Input Nama = ";
    getline(cin, nama[counter]);
}

//Fungsi tanpa nilai balik dengan parameter
void tampilkan_nama (string nama [], int counter) {
    for (int i = 0; i < counter; i++) {
    cout << i + 1 << ". " << nama[i] << endl;
    }
}

//Fungsi dengan nilai balik tanpa parameter
int pilih_nama (int data) {
    cout << "Nomor nama? "; cin >> data ;
    cin.ignore() ;
    return data ;
}

//Fungsi dengan nilai balik dengan parameter
bool validasi_data (int data, int counter) {
    return (data > counter || data <= 0) ;
}

//Fungsi tanpa nilai balik dengan parameter
void input_nama_teman (string teman [] [10], int data, int &cteman) {
    char tteman;
    do {
        system("cls");
        cout << "Input Nama teman-" << cteman + 1 << ": ";
        getline(cin, teman[data][cteman]);
        cteman++;
        cout << "Apakah masih ada teman (Y/T)? ";
        tteman = getch();
        cout << endl;
    } while (toupper(tteman) == 'Y');
}

//Fungsi tanpa nilai balik dengan parameter
void tampilkan_teman (string teman [][10], string nama[], int data){
    int cek = 0 ;
    cout<<"NAMA TEMAN DARI "<<nama[data-1] << " : " << endl;
    if (cek == 0) {
        cout << "BELUM MENGINPUTKAN TEMAN!!!\n" ;
    } else {
        for (string namateman: teman[data-1]){
            if(namateman!=""){
            cout<<namateman<<endl;
            }
        }
    }
}   

int main() {
    string nama[10];
    string teman[10][10];
    char ulang;
    int data, counter = 0, cteman = 0, cek = 0 ;

do {
    system ("cls") ;
    menu () ;
    char pil = pilihanMenu() ;
    switch (pil){
        case '1' :
            system("cls");
            inputan_nama (nama, counter) ;
            counter++ ;
            break ;

        case '2' :
            system("cls");
            if (counter==0){
                cout << "DATA MASIH KOSONG!!!!\n" ;
            } else {
                cout << "List Nama:" << endl;
                tampilkan_nama(nama, counter) ;
                data = pilih_nama(data) ;
                cek++ ;
                if (validasi_data(data, counter)){
                    cout << "DATA TIDAK ADA\n" ;
                } else {
                    data-- ;
                    input_nama_teman (teman, data, cteman);
                }
            }
            break ;

        case '3' :
            system("cls");
            if (counter == 0){
                cout << "DATA MASIH KOSONG!!!!\n" ;
            } else {
                cout<<"Tampilkan data teman dari:" << endl ;
                tampilkan_nama(nama, counter) ;
                data = pilih_nama(data) ;
                if (validasi_data(data, counter)){
                    cout << "DATA TIDAK ADA\n" ;
                } else {
                    tampilkan_teman(teman, nama, data) ;
                }
            }
            break ;

        default :
            system("cls");
            cout << "PILIHAN ANDA TIDAK ADA!!!\n" ;
        }

        cout << "Apakah anda ingin mengulang (Y/T)? ";
        ulang = getch();

} while (toupper(ulang) == 'Y');

return 0;
}