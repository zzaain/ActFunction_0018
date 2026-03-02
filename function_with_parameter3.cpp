#include <iostream>
using namespace std;

int r;
float phi = 3.14159;

void input()
{
    cout << "isikan jari-jari : ";
    cin >> r;
}

float luas (float a)
{
    return phi * a * a;
}

void output()
{
    cout << "luasnya adalah :" << luas (r);

}

int main()
{
    input();
    output();
}