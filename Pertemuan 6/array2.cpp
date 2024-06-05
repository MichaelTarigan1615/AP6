#include <iostream>
using namespace std;
int main(){
system("cls");//membersihkan screen
// string nama_karyawan[]={"Andi","Yusuf","Budo","Yanti","Dosi"};

//cout<<sizeof(string)<<endl;
//cout<<sizeof(nama_karyawan)<<endl;
//cout<<sizeof(nama_karyawan)/sizeof(string)<<endl;

// for(int i=0;i<sizeof(nama_karyawan)/sizeof(string);i++){
//     cout<<nama_karyawan[i]<<endl;
// }

int matriks1[2][2];
int matriks2[2][2];
int hasil[2][2];

cout<<"Matriks 1"<<endl;
for(int i=0;i<2;i++){//loop untuk baris matriks1
    for(int j=0;j<2;j++){//loop untuk kolom matriks1
    cout<<"Masukkan element baris "<<i+1<<" kolom "<<j+1<<" : ";
    cin>>matriks1[i][j];}
}

cout<<"Matriks 2"<<endl;
for(int i=0;i<2;i++){//loop untuk baris matriks2
    for(int j=0;j<2;j++){//loop untuk kolom matriks2
    cout<<"Masukkan element baris "<<i+1<<" kolom "<<j+1<<" : ";
    cin>>matriks2[i][j];}
}

cout<<"Hajil Penjumlahan"<<endl;
for(int i=0;i<2;i++){//loop untuk baris hasil
    for(int j=0;j<2;j++){//loop untuk kolom hasil
        hasil[i][j]=matriks1[i][j]+matriks2[i][j];//menjumlahkan elemen matriks1 dan matriks2, dan menyimpan hasilnya di array hasil
        cout<<hasil[i][j]<<endl;
    }
}
}