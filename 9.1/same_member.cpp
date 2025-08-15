#include <iostream>
using namespace std;

class Base
{
public:
    int m_A = 10;

    void func()
    {
        cout << "Base func" << endl;
    }

    void func(int a)
    {
        cout << "Base int func" << endl;
    }
};

class Son:public Base
{
public:
    int m_A = 20;

    void func()
    {
        cout << "Son func" << endl;
    }
};

int main()
{
    Son s1;
    cout << s1.m_A << endl;
    cout << s1.Base::m_A << endl;
    s1.func();
    s1.Base::func();
    s1.Base::func(20);
    return 0;
}