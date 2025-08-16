#include <iostream>
using namespace std;

template<class T1>
class Base
{
public:
    T1 m;
};

class Son1:public Base<int>
{
};

template<class T1,class T2>
class Son2:public Base<T2>
{
public:
    void ShowType()
    {
        cout << "m的类型：" << typeid(T2).name() << endl;
        cout << "obj的类型：" << typeid(T1).name() << endl;
    }
    T1 obj;
};

int main()
{
    Son1 s1;
    Son2<int, char> s2;
    s2.ShowType();
    return 0;
}