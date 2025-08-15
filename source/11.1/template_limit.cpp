#include <iostream>
using namespace std;

class Person
{
public:
    Person(int a, int b) : m_A(a), m_B(b) {}

    int m_A;
    int m_B;
};

template<typename T>
bool myCompare(T obj1, T obj2)
{
    bool flag = false;
    if (obj1 == obj2)
    {
        flag = true;
    }
    return flag;
}

template<> bool myCompare(Person p1, Person p2)
{
    bool flag = false;
    if (p1.m_A == p2.m_A && p1.m_B == p2.m_B)
    {
        flag = true;
    }
    return flag;
}

int main()
{
    Person p1(10, 20);
    Person p2(10, 20);
    cout << myCompare<Person>(p1, p2) << endl;
    return 0;
}