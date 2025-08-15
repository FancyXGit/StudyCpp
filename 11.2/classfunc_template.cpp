#include <iostream>
#include <string>
using namespace std;

template<class T1, class T2>
class Person
{
public:
    Person(T1 name, T2 age) : m_Name(name), m_Age(age) {}

    void ShowPerson()
    {
        cout << "姓名：" << m_Name << " " << "年龄：" << m_Age << endl;
    }

    T1 m_Name;
    T2 m_Age;
};

void PrintPerson1(Person<string,int> &p)
{
    p.ShowPerson();
}

template<class T1,class T2>
void PrintPerson2(Person<T1,T2> &p)
{
    p.ShowPerson();
}

template<class T>
void PrintPerson3(T &p)
{
    p.ShowPerson();
}

int main()
{
    Person<string, int> p1("Sun", 999);
    //PrintPerson1(p1);
    //PrintPerson2(p1);
    PrintPerson3(p1);
    return 0;
}