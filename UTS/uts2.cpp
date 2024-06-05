#include<iostream>
using namespace std;
int main(){
int n,j=0;
cout<<"Masukkan angka: ";
cin>>n;
while(n!=0)
 {
   j+=n%10; 
    n/=10;
}    
cout<<"Jumlah digit: "<<j<<endl;
return 0;
}
    