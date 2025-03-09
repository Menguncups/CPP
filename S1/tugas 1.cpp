#include <iostream>

using namespace std;
int main()
{
	string nama, ttl, ntakrb, tglakrb, aakrb;
	cout<<"input nama : ";
	getline (cin,nama);
	cout<<"input tanggal lahir : ";
	getline (cin,ttl);
	cout<<"-----------------------------------------------------------------\n";
	cout<<"input nama teman akrab : ";
	getline (cin,ntakrb);
	cout<<"input tanggal lahir teman akrab : ";
	getline (cin,tglakrb);
	cout<<"input alamat teman akrab : ";
	getline (cin,aakrb);
	cout<<"-----------------------------------------------------------------\n";
	cout<<"hallo, perkenalkan nama saya "<<nama<<", saya lahir pada tanggal "<<ttl<<". saya memiliki teman akrab yang bernama "<<ntakrb<<", dia tinggal di "<<tglakrb<<" dan lahir pada tanggal "<<aakrb<<".";
	cout<<"\n-----------------------------------------------------------------";
	return 0;
}