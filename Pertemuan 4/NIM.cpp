#include <iostream>
#include <string>
using namespace std;

int main() {
    int nim;
    system("cls");

    awal:
    do
    {
        cout << "Masukkan NIM anda : ";
        cin >> nim;
    } while (nim < 100000000 || nim > 300000000);//loop akan terus berulang jika NIM kurang dari 100000000 atau lebih dari 300000000

    int urutan = nim % 1000;//menentukan urutan NIM
    int stambuk = nim / 10000000;//menentukan urutan stambuk
    string programStudi;
    int prodi = (nim % 100000) / 1000;//menentukan prodi
    string fak;
    int fakultas = (nim % 10000000) / 100000;//menentukan fakultas

    if (fakultas == 14)//memeriksa apakah kode fakultas adalah 14
    {
        fak = "Fasilkom-TI";//jika ya, maka fakultas adalah "Fasilkom-TI"
    } else
    {
        goto awal;//jika tidak, kembali ke label awal untuk meminta input NIM lagi
    }

    switch (prodi)//menggunakan switch-case untuk menentukan program studi berdasarkan kode prodi
    {
    case 1:
        programStudi = "Ilmu Komputer";//jika kode prodi adalah 1, maka program studi adalah "Ilmu Komputer"
        break;

    case 2:
        programStudi = "Teknologi Informasi";//jika kode prodi adalah 2, maka program studi adalah "Teknologi Informasi"
        break;
    
    default:
        break;//jika kode prodi tidak dikenali, tidak melakukan apa-apa
    }

    cout << "Urutan anda adalah " << urutan << endl;
    cout << "Stambuk anda adalah " << stambuk << endl;
    cout << "Prodi anda adalah " << programStudi << endl;
    cout << "Fakultas anda adalah " << fak << endl;

    return 0;
}
