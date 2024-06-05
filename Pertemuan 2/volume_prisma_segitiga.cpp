#include <iostream>

using namespace std;
int main() {
    float a,t,tp,v,lp;

    cout<<"Alas             : ";
    cin>>a;
    cout<<"Tinggi           : ";
    cin>>t;
    cout<<"Tinggi prisma    : ";
    cin>>tp;
    lp = (2 * (1/2.0) * a * t) + (a * 3 * tp);//rumus untuk menghitung luas permukaan prisma
    v = (1/2.0) * a * t * tp;//rumus untuk menghitung volume prisma
    cout<<"Luas Permukaan   = "<<lp<<endl;
    cout<<"Volume           = "<<v<<endl;



}
