#include <iostream>
#include <iomanip>

using namespace std;

int main() {
int nim;
char kom;
float ip;
//char nama[50];
string nama;

system("CLS"); //membersihkan screen

cout << "Hello world"<< endl;

cout <<"Masukkan nama   : ";
//cin >> nama;
getline(cin, nama);//membaca input nama dari pengguna, termasuk spasi
cout << "Masukkan NIM   : ";
cin >> nim;
cout << "Masukkan KOM   : ";
cin >> kom;
cout << "Masukkan IP    : ";
cin >> ip;

cout << "Nama   : " << nama << endl; 
cout << "NIM    : " << nim << endl;
cout << "KOM    : " << kom << endl;
cout << fixed << setprecision(2);
cout << "IP     : " << ip << endl;

system("pause");//memberhentikan program dan menunggu input
return 0;

}