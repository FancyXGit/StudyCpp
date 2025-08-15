#include <iostream>
#include <cmath>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "无参构造函数调用" << endl;
    }

    Person(int a)
    {
        cout << "有参构造函数调用" << endl;
        m_age = a;
    }

    Person(const Person& p)
    {
        cout << "拷贝构造函数调用" << endl;
        m_age = p.m_age;
    }

    ~Person()
    {
        cout << "析构函数调用" << endl;
    }


    int m_age;
};

void func1()
{
    //NO Person p();
    Person p(10);
    Person p1(p);
}

void func2()
{
    Person p = Person(10);
    Person p1 = Person(p);
}

void func3()
{
    Person p = 10;
    Person p1 = p;
}

int main()
{
    func3();
    return 0;
}