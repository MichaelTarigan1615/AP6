#include <iostream>
#include <vector>

using namespace std;

struct Mahasiswa {//mendefinisikan struktur Mahasiswa untuk menyimpan data mahasiswa
    string nama, nim;
    float nilai;
};

// typedef struct{
//     string nama, nim;
// } Siswa;

int main() {
    system("cls");//membersihkan screen

    Mahasiswa mhs;
    vector<Mahasiswa> mahasiswa;
    int n;

    cout << "Masukkan jumlahh mahasiswa : ";
    cin >> n;

    for (int i = 0; i < n; i++) {//loop untuk memasukkan data mahasiswa sebanyak n kali
        cout<<"Mahasiswa "<<i+1<<endl;
        cin.get();

        cout << "Masukkan nama : ";
        getline(cin, mhs.nama);

        cout << "Masukkan NIM : ";
        cin >> mhs.nim;

        cout << "Masukkan nilai : ";
        cin >> mhs.nilai;

        mahasiswa.push_back(mhs);//menambahkan objek Mahasiswa mhs ke dalam vektor mahasiswa
    }

    
    cout << mhs.nama << " memiliki NIM " << mhs.nim << " dan nilai " << mhs.nilai << endl;
}