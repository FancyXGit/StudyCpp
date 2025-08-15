#include <iostream>
using namespace std;

void MySwap(int& a,int& b);

int main()
{
    int a = 10;
    int b = 20;
    MySwap(a,b);
    cout << a << "\n" << b;
    return 0;
}

void MySwap(int& a,int& b)
{
    int temp = a;
    a = b;
    b= temp;
}