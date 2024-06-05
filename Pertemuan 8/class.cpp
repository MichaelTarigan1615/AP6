#include <iostream>
#include <vector>
using namespace std;

class Mahasiswa{//mendefinisikan kelas Mahasiswa
    //?Access Modifier
    private://skses modifier private: data hanya dapat diakses oleh anggota kelas itu sendiri
        string nama,nim;
        float nilai;

    //? Access Modifier
    public://skses modifier public: data dapat diakses dari luar kelas
        //?Constructor Method
        Mahasiswa(string nama, string nim, float nilai){//constructor untuk inisialisasi objek Mahasiswa dengan parameter nama, nim, dan nilai
            this->nama = nama;
            this->nim = nim;
            this->nilai = nilai;
        }

        string getNama(){
            return this->nama;
        }

        string getNim(){
            return this->nim;
        }

        float getNilai(){
            return this->nilai;
        }

        void display(){//method untuk menampilkan data mahasiswa
            cout << "Nama     : "<<this->nama  << endl;
            cout << "NIM      : "<<this->nim << endl;
            cout << "Nilai    : "<<this->nilai << endl;
        }
};

int main(){
    system("cls");//membersihkan screen

    // Mahasiswa mhs("Andi", "231401088",87.3);//?Instiation
    // mhs.display();

    // cout<<mhs.getNama<<endl;
    // cout<<mhs.getNim<<endl;
    // cout<<mhs.getNilai<<endl;

    vector<Mahasiswa> mahasiswa;//deklarasi vektor mahasiswa untuk menyimpan objek Mahasiswa
    int n;
    string nama, nim;
    float nilai;

    cout<<"Masukkan jumlah mahasiswa    : ";
    cin>>n;

    for(int i=0;i<n;i++){//loop untuk memasukkan data mahasiswa sebanyak n kali
        cout<<"Mahasiswa "<<i+1<<endl;

        cin.get();

        cout<<"Masukkan nama     : ";
        getline(cin, nama);

        cout<<"Masukkan NIM      : ";
        getline(cin, nim);

        cout<<"Masukkan nilai    : ";
        cin>>nilai;

        Mahasiswa mhs(nama, nim, nilai);
        mahasiswa.push_back(mhs);//menambahkan objek Mahasiswa ke dalam vektor mahasiswa
    }

    for(int i=0;i<n;i++){//loop untuk menampilkan data mahasiswa sebanyak n kali
        cout<<"Mahasiswa "<<i+1<<endl;
        mahasiswa[i].display();//memanggil method display dari objek Mahasiswa ke-i
    }
}
