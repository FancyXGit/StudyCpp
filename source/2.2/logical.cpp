#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double money = 4.92;
    int year = 2;
    double rate = 1.02;
    money *= pow(rate,year);
    if (money >= 5 && year >= 2)
    {
        cout << "Yes" << endl;
    }else
    {
        cout << "NO" << endl;
    }
}