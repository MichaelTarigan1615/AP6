#include <iostream>
using namespace std;
int main()
{
    system("cls");//membersihkan screen

    //? Array Declaration and Initialization
    string nama[5]; //{"Andi","Budi", "Santi","Wanto","Denis"}

    nama[0]="Andi";
    nama[1]="Budi";
    nama[2]="Santi";
    nama[3]="Wanto";
    nama[4]="Denis";

    //? Accessing Elements in Array
    cout<<nama[0]<<endl;
    cout<<nama[1]<<endl;
    cout<<nama[2]<<endl;
    cout<<nama[3]<<endl;
    cout<<nama[4]<<endl;

for(int i = 0;1<5;i++){//memperbaiki kondisi loop dari 1<5 menjadi i<5
    cout<<nama[i]<<endl;
}

    //? Multidimentsional Array
    int matrix[2][2]={{1,3},{2,4}};
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}