#include <iostream>
using namespace std;

template<class T1,class T2>
class Person
{
public:
    Person(T1 name, T2 age);
    void ShowPerson();
    T1 m_Name;
    T2 m_Age;
};

template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age)
{
    m_Name = name;
    m_Age = age;
}

template<class T1,class T2>
void Person<T1,T2>::ShowPerson()
{
        cout << "姓名：" << m_Name << endl;
        cout << "年龄：" << m_Age << endl;
}

int main()
{
    Person<string, int> p1("Alice", 128);
    p1.ShowPerson();
    return 0;
}