#include <iostream>
#include <vector>

using namespace std;

int main(){
system("cls");//membersihkan screen

//? Vector Declaration and Initialization
    vector<string>nama={"Andi","Yusuf","Budo","Yanti","Dosi"};//deklarasi dan inisialisasi vector nama dengan 5 elemen bertipe string
//? Accessing Element in Vector
// for(int i=0;i<nama.size();i++){
//     cout<<nama[i]<<endl;
// }

// cout<<endl;

for(string mhs : nama){//iterasi setiap elemen mhs di dalam vector nama
    cout<<mhs<<endl;
}


//     nama.push_back("Wawan");
//     nama.erase(nama.begin()+2);
// for(int i=0;i<nama.size();i++){
//     cout<<nama[i]<<endl;
// }
}