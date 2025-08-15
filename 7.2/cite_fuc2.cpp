#include <iostream>
using namespace std;

int& test(void);

int main()
{
    int& b = test();
    cout << b;
    return 0;
}

int& test(void)
{
    static int a = 10;
    return a;
}