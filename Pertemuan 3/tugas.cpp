#include<iostream>
using namespace std;
int main(){
    int tinggi,berat,BMI;

cout<<"Masukkan berat badan : ";
cin>> berat;
cout<<"Masukkan tinggi badan : ";
cin>> tinggi;
tinggi=(tinggi*0.01);
BMI=berat/( tinggi * tinggi );//rumus untuk menghitung BMI

if(BMI <18.5)//jika BMI kurang dari 18.5
{cout<<"Berat badan kurang"<<endl;}//menampilkan "Berat badan kurang"
else if(berat<=18.5 && BMI>25)//jika BMI diantara 18.5 dan 25
{cout<<"Berat badan normal"<<endl;}//menampilkan "Berat badan normal"
else{cout<<"Obesitas"<<endl;}//selain dari diatas, menampilkan "Obesitas"
}