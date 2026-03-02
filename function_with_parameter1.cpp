#include <iostream>
using namespace std;

int panjang, lebar;

void input ()
{
    cout << "masukkan panjang:";
    cin >> panjang;
    cout << "masukkan lebar:";
    cin >> lebar;
}

int luasPersegi ()
{
    return panjang * lebar;
}

void output()
{
    cout << "Hasilnya : " << luasPersegi();
}

int main()
{
    input();
    output();
}
