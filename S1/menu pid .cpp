#include<iostream>
using namespace std;
int main (){
    int hrgma, hrgmi, jmlmi, jmlma, ttlmi, ttlma, 
    ttla, ttlb, ttlbyr, kmbl, disk, pil, ttlmi1, 
    ttlmi2, ttlma1, ttlma2, hrgma1, hrgma2, hrgmi1, 
    hrgmi2, jmlmi1, jmlmi2, jmlma1, jmlma2;
    cout<<"Menu minuman"<<endl;
    cout<<"1. Jus"<<endl;
    cout<<"2. Teh es"<<endl;
    cout<<"3. Selesai"<<endl;
    do{
    cout<<"Inputkan pilihan anda : ";
    cin>>pil; 
        switch (pil){
            case 1 :
            cout<<"Inputkan jumlah Jus : ";
            cin>>jmlmi1;
            hrgmi1 = 5000;
            break;
            case 2 :
            cout<<"Inputkan jumlah Teh es : ";
            cin>>jmlmi2;
            hrgmi2 = 6000;
            break;
            case 3 :
            cout<<"Selesai"<<endl;
            break;
            default : 
            cout<<"error, pilihan tidak tersedia"<<endl;
        }
    }while(pil != 3);   
    ttlmi1 = hrgmi1*jmlmi1;
    ttlmi2 = hrgmi2*jmlmi2;
    ttlmi = ttlmi1+ttlmi2;
    cout<<"Menu makanan"<<endl;
    cout<<"1. Mie"<<endl;
    cout<<"2. Nasgor"<<endl;
    cout<<"3. Selesai"<<endl;
    do{
    cout<<"Inputkan pilihan anda : ";
    cin>>pil; 
        switch (pil){
            case 1 :
            cout<<"Inputkan jumlah Mie : ";
            cin>>jmlma1;
            hrgma1 = 7000;
            break;
            case 2 :
            cout<<"Inputkan jumlah Nasgor : ";
            cin>>jmlma2;
            hrgma2 = 8000;
            break;
            case 3 :
            cout<<"Selesai"<<endl;
            break;
            default : 
            cout<<"error, pilihan tidak tersedia"<<endl;
        } 
    }while(pil!=3);    
    ttlma1 = hrgma1*jmlma1;
    ttlma2 = hrgma2*jmlma2;
    ttlma = ttlma1+ttlma2;
    ttla = ttlma+ttlmi;
    disk = ttla/10;
    ttlb = ttla-disk;
    kmbl = ttlbyr-ttlb;
    if (ttla>=20000){
        cout<<"Selamat anda mendapatkan diskon sebesar 10%"<<endl;
        cout<<"Total belanja anda sebelum diskon : "<<ttla<<endl;
        cout<<"Diskon : "<<disk<<endl;
        cout<<"Total belanja anda setelah diskon : "<<ttlb<<endl;
        cout<<"Inputkan Pembayaran : ";
        cin>>ttlbyr;
        kmbl = ttlbyr-ttlb;
        cout<<"Kembalian : "<<kmbl<<endl;
    }else{
        cout<<"Total belanja anda adalah : "<<ttla<<endl;
        cout<<"Inputkan Pembayaran : ";
        cin>>ttlbyr;
        kmbl = ttlbyr-ttla;
        cout<<"Kembalian : "<<kmbl<<endl;
    }
    cout<<"Terimakasih telah berbelanja";
}