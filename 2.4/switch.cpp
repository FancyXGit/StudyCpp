#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    cin >> a;
    switch (a)
    {
        case 0:
        cout << "0";
        break;

        case 1:
        cout << "1";
        break;

        case 2:
        cout << "2";
        break;

        default:
        cout << "NO";
        break;
    }
    return 0;
}