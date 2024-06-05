#include <iostream>
#include "operasi.h"//untuk menghubungkan dengan file "operasi.h"

//uns;

        void sayHello(string name) {//fungsi untuk menampilkan pesan "Hello" dengan nama yang diberikan
        cout << "Hello " << name << n;
    }

    void garis() {//fungsi untuk menampilkan garis "="
        cout << "==========" << n;
    }

    void bintang() {//fungsi untuk menampilkan garis "*"
        cout << "**********" << n;
    }

int main () {
    system("cls");//membersihkan screen

    sayHello("Michael");
    garis();
    bintang();
    o << tambah(2,3) << n;
    o << kurang(2,3) << n;
    o << kali(2,3) << n;
    o << bagi(2,3) << n;
    o << phi << n;
    
    return 0;
}
