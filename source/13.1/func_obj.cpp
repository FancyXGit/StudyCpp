#include <iostream>
using namespace std;

class MyAdd
{
public:
    int operator()(int v1,int v2)
    {
        return v1 + v2;
    }
};

class MyPrint
{
public:
    void operator()(const string &s)
    {
        cout << s << endl;
        m_Count++;
    }
    int m_Count = 0;
};

int main()
{
    MyAdd add1;
    cout << add1(20, 30) << endl;

    MyPrint prt1;
    prt1("Hello World");
    prt1("Hello World");
    prt1("Hello World");
    prt1("Hello World");
    prt1("Hello World");
    cout << prt1.m_Count << endl;
    return 0;
}