#include <iostream>
#include <string>
using namespace std;

template<class NameType, class AgeType>
class Person
{
public:
    Person(NameType name,AgeType age)
    {
        m_Name = name;
        m_Age = age;
    }
    NameType m_Name;
    AgeType m_Age;
};

int main()
{
    Person<string, int> p1("Sun", 999);
    cout << p1.m_Name << "" << p1.m_Age << endl;
    return 0;
}