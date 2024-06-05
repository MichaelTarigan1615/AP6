#include <iostream>

using namespace std;
int main() {
    float r,t,v;
    const float phi=3.14;//mendeklarasikan konstanta phi dengan nilai 3.14

    cout<<"Jari-jari    : ";
    cin>>r;
    cout<<"Tinggi       : ";
    cin>>t;

    v=r*r*phi*t;//rumus untuk menghitung volume tabung

    cout<<"Volume       = "<<v<<endl;


return 0;
}