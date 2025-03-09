#include <iostream>
using namespace std;
int main(){

int n;

cout<<"Nilai N = "; cin>>n;

for(int i=1; i<=n; i++){
    for (int j=i;j<=n;j++){
    cout<<j<<" ";
    }//akhir dari loop j
    cout<<endl;

}//akhir dari loop i
for(int i=n; i>=1; i--){
    for (int j=n;j>=i;j--){
    cout<<j<<" ";
    }//akhir dari loop j
    cout<<endl;
}//akhir dari loop i
return 0;
}