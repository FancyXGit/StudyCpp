#include <iostream>
#include <string>
using namespace std;

template<class T1,class T2>
class Person;

template<class T1,class T2>
void ShowPerson2(Person<T1, T2> &p)
{
    cout << p.m_Age << p.m_Name << endl;
}

template<class T1,class T2>
class Person
{
    friend void ShowPerson1(Person<T1, T2> &p)
    {
        cout << p.m_Age << p.m_Name << endl;
    }

    friend void ShowPerson2<>(Person<T1, T2> &p);

public:
    Person(T1 name, T2 age) : m_Name(name), m_Age(age) {}
private:
    T1 m_Name;
    T2 m_Age;
};

int main()
{
    Person<string,int> p1("A",100);
    //ShowPerson1(p1);
    ShowPerson2(p1);
    return 0;
}