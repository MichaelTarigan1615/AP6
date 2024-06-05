#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan nilai n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)//loop for berjalan dari 1 sampai n
    {
        for (int j = 1; j <= i; j++)//loop for berjalan dari 1 sampai i
        {
            cout << "^ ";
        }
        for (int k = n; k > i; k--)//loop for berjalan dari n sampai i+1
        {
            cout << "v ";
        } 
        cout << endl;
    }
}
