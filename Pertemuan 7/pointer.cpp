#include <iostream>
using namespace std;

int penjumlahan(int* a, int* b){
     *a += *b;
     cout<<*a<<endl;
}

int main()
{
system("cls");

// //? Pointer Declaretion
// //*normal variabel -> var_name(data), &var_name(address)
// int number  = 16;
// //?pointer variabel -> var_name(address of pointed variable), *var_name(data of pointed variable)
// int*ptrnumber=&number;

// cout<<"Isi variabel number : "<<number<<endl;
// cout<<"alamat variabel number : "<<&number<<endl;
// cout<<"Isi variabel ptrnumber : "<<ptrnumber<<endl;
// cout<<"Isi variabel yang ditunjuk ptrnumber : "<<*ptrnumber<<endl;

// //?POinter  Operation
// *ptrnumber=37;
// cout<<"Isi variabel number : "<<number<<endl;
// cout<<"alamat variabel number : "<<&number<<endl;
// cout<<"Isi variabel ptrnumber : "<<ptrnumber<<endl;
// cout<<"Isi variabel yang ditunjuk ptrnumber : "<<*ptrnumber<<endl;


//? POinter in Array
// int num[]={1,2,3,4,5};
// int* ptrnum=num;

// cout<<"isi variabel num indeks 0 = "<<num[0]<<endl;
// cout<<"Alamat memori variabel num indeks 0 = "<<&num[0]<<endl;
// cout<<"isi variabel ptrnum  = "<<ptrnum<<endl;
// cout<<"isi variabel yang ditunjuk ptrnum  = "<<*ptrnum<<endl;

//?Pointer as Parameter
// int a=2;
// int b=3;
// penjumlahan(&a,&b);
// cout<<a<<endl;

//?POinter to Pointer
int n =4;
int* ptrn =&n;
int** ptr_ptrn=&ptrn;

cout<<"Isi variabel n = "<<n<<endl;
cout<<"Alamat variabel n = "<<&n<<endl;
cout<<"Isi variabel ptrn = "<<ptrn<<endl;
cout<<"Isi variabel yang ditunjuk ptrn = "<<*ptrn<<endl;
cout<<"Alamat variabel ptrn = "<<&ptrn<<endl;
cout<<"Isi variabel ptr_ptrn = "<<ptr_ptrn<<endl;
cout<<"Isi variabel yang ditunjuk ptr_ptrn = "<<*ptr_ptrn<<endl;
cout<<"Isi variabel n diakses dari ptr_ptrn = "<<**ptr_ptrn<<endl;
cout<<"Alamat memori ptr_ptrn = "<<&ptr_ptrn<<endl;






}