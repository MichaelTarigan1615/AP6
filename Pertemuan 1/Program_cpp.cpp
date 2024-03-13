#include <iostream>
#include <iomanip>

using namespace std;

int main() {
int nim;
char kom;
float ip;
//char nama[50];
string nama;

system("CLS");

cout << "Hello world"<< endl;

cout <<"Masukkan nama   : ";
//cin >> nama;
getline(cin, nama);
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

system("pause");
return 0;

}