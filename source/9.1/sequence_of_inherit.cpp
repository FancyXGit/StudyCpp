#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base构造" << endl;
    }
    ~Base()
    {
        cout << "Base析构" << endl;
    }
};

class Son:public Base
{
public:
    Son()
    {
        cout << "Son构造" << endl;
    }
    ~Son()
    {
        cout << "Son析构" << endl;
    }
};

int main()
{
    Son s1;
    return 0;
}