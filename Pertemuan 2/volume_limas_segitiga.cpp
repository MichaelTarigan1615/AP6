#include <iostream>
using namespace std;

int main() {
    float a,t,tl,lp,v;

    cout << "Alas            : ";
    cin >> a;
    cout << "Tinggi          : ";
    cin >> t;
    cout << "Tinggi limas    : ";
    cin >> tl;
    lp = (1/2.0 * a * t) + (3 * 1/2.0 * a * tl);//rumus untuk menghitung luas permukaan limas
    v = (1/3.0) * (1/2.0 * a * t * tl);//rumus untuk menghitung volume limas
    cout << "Luas permukaan = " << lp << endl;
    cout << "Volume         = " << v << endl;
}
