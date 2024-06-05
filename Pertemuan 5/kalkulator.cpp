#include <iostream>
#include "calc.h" //untuk menghubungkan dengan file "calc.h"
using namespace std;

void menu(){//menampilkan menu operasi kalkulator
    cout << "***************************" << endl;
    cout << "Selamat datang di kalkulator" << endl;
    cout << "***************************" << endl;
    cout << "Daftar Operasi:" << endl;
    cout << "1. Pertambahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Modulo" << endl;
    cout << "6. Perpangkatan" << endl;
    cout << "***************************" << endl;
}

int main(){
    system("cls");//membersihkan screen
    
    int operasi, a, b;
    float hasil;
    char jawab;

    do//memulai loop do-while yang akan terus berulang sampai pengguna memilih untuk berhenti
    {
        menu();//menampilkan menu operasi kalkulator
        cout << "Masukkan operasi: ";
        cin >> operasi;

        cout << "Masukkan angka pertama: ";
        cin >> a;

        cout << "Masukkan angka kedua: ";
        cin >> b;

        switch (operasi)//menggunakan switch-case untuk menentukan operasi yang dipilih
        {
        case 1:
            hasil = tambah(a, b);
            break;
        
        case 2:
            hasil = kurang(a, b);
            break;

        case 3:
            hasil = kali(a, b);
            break;

        case 4:
            hasil = bagi(a, b);
            break;

        case 5:
            hasil = modulo(a, b);
            break;

        case 6:
            hasil = pangkat(a, b);
            break;
        
        default:
            break;
        }

        cout << "Hasil : " << hasil << endl;
        cout << "Apakah anda ingin melanjutkan? [Y/N]: ";
        cin >> jawab;
        jawab = toupper(jawab);//mengubah jawaban menjadi huruf kapital
    } while (jawab == 'Y');//loop akan terus berulang jika jawaban adalah 'Y' dan berhenti jika jawaban 'N'
}
