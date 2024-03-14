#include <iostream>

using namespace std;
int main() {
    float a,t,tl,v,lp;

    cout<<"Alas          : ";
    cin>>a;
    cout<<"Tinggi        : ";
    cin>>t;
    cout<<"Tinggi prisma : ";
    cin>>tl;
    lp= a*t/2+3*a*t/2;
    v=a*t*tl/3;
    cout<<"Luas Permukaan        = "<<lp<<endl;
    cout<<"Volume                = "<<v<<endl;



}