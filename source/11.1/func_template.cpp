#include <iostream>
using namespace std;

template<typename T>//template<class T>
void MySwap(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 1;
    int b = 2;
    MySwap(a, b);
    cout << a << " " << b << endl;

    double d_a = 1.01;
    double d_b = 2.02;
    MySwap<double>(d_a, d_b);
    cout << d_a << " " << d_b << endl;
    return 0;
}