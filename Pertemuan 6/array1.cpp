#include <iostream>
using namespace std;
int main(){

//string nama ="Jonrio";

//for(int i=0;i<3;i++){
//  cout<<nama[i]<<" ";
//}

//for(int i=0;i<nama.length();i++){
//    cout<<nama[i]<<endl;
//}

int n;

cout<<"Masukkan banyak siswa    : ";
cin>>n;

float nilai[n];//deklarasi array nilai dengan ukuran n untuk menyimpan nilai siswa
for(int i=0;i<n;i++){//loop untuk membaca nilai setiap siswa
    cout<<"Masukkan nilai mahasiswa ke "<<i+1<<": ";
    cin>>nilai[i];
}

for(int i=0;i<n;i++){//loop untuk menampilkan nilai setiap siswa
    cout<<"Nilai mahasiswa ke "<<i+1<<" adalah "<<nilai[i]<<endl;
}

}