#include <iostream>

using namespace std;
int main() {
    float a,t,tp,v,lp;

    cout<<"Alas          : ";
    cin>>a;
    cout<<"Tinggi        : ";
    cin>>t;
    cout<<"Tinggi prisma : ";
    cin>>tp;
    lp=a*t/2+3*a*t/2;
    v=a*t*tp/2;
    cout<<"Luas Permukaan        = "<<lp<<endl;
    cout<<"Volume                = "<<v<<endl;



}