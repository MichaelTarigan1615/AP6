#include <iostream>
using namespace std;

int main() {
    system("cls");//membersihkan screen
    int j;

    for (int i = 1; i <= 10; i++ )//loop for berjalan dari 1 sampai 10
    {
        j = i * i;//menghitung kuadrat dari nilai i dan menyimpannya di variabel j
        cout << j << endl;
    }

    return 0;
}
