#include<iostream>
using namespace std;
int main(){

//while disini digunnakan untuk penggulangan jika user tidak memasukan\
kelipatan 4
while(true){
    int x;
    cout<<"Inputkan angka untuk panjang panah (harus kelipatan 4) : "; cin>>x;
    int se= x/2, ba=x/2 ;
    if(x % 4 == 0){
        for(int i = 1; i <= se; i++){
            for(int j = 1; j <= (se - i); j++){
                cout << " " ;
            }
            for(int k = 1; k <= (2 * i - 1); k++){
                cout << "*" ;
            }
            cout << "\n" ;
        }
        for(int i = 1; i <= ba; i++){
            for(int k = 1; k <= x/4; k++){
                cout<<" ";
            }
            for(int j = 1; j <= (x-2)/2; j++){
                cout<<"*";
            }   
            cout << "\n" ;
        }
        break ;

    }else{
        cout << "Harus mengimputkan angka kelipatan 4\n" ;
    }
}
    return 0;
}