#include <iostream>

using namespace std;
int main() {
    float r,v;
    const float phi=3.14;//mendeklarasikan konstanta phi dengan nilai 3.14

    cout<<"Jari-jari    : ";
    cin>>r;
   
    v=r*r*phi*r*4/3;//rumus untuk menghitung volume bola

    cout<<"Volume       = "<<v<<endl;


return 0;
}