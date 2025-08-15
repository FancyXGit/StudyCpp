#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person默认构造函数" << endl;
    }
    
    Person(int age)
    {
        m_Age = age;
        cout << "Person有参构造函数" << endl;
    }

    Person(const Person& p)
    {
        m_Age = p.m_Age;
        cout << "Person拷贝构造函数" << endl;
    }

    ~Person()
    {
        cout << "Person析构函数" << endl;
    }

    int m_Age;
};

void doWork(Person p);//若是Person& p则不会调用拷贝构造函数
Person doWork2();

int main()
{
    Person p1(20);
    doWork(p1);
    cout << endl;
    //Person p2 = doWork2();
    return 0;
}

void doWork(Person p)
{

}

Person doWork2()
{
    Person p1(20);
    return p1;
}