#include <iostream>
using namespace std;

class Base1
{
public:
    Base1()
    {
        m_A = 10;
    }
    int m_A;
};

class Base2
{
public:
    Base2()
    {
        m_A = 100;
    }
    int m_A;
};

class Son : public Base1, public Base2
{
public:
    Son()
    {
        m_A = 1000;
    }
    int m_A;
};

int main()
{
    Son s1;
    cout << s1.Base1::m_A << endl;
    return 0;
}