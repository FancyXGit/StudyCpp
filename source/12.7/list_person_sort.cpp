#include <iostream>
#include <list>
#include <string>
using namespace std;

class Person
{
public:
    Person(int age, int height, string name) : m_Age(age), m_Height(height), m_Name(name) {}
    int m_Age;
    int m_Height;
    string m_Name;
};

void PrintList(const list<Person> &l)
{
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << it->m_Age << "\t"
             << it->m_Height << "\t"
             << it->m_Name << endl;
    }
}

bool ComparePerson(const Person &p1,const Person &p2)
{
    bool flag = false;
    if (p1.m_Age < p2.m_Age)
    {
        flag = true;
    }
    else if (p1.m_Age == p2.m_Age && p1.m_Height < p2.m_Height)
    {
        flag = true;
    }
    return flag;
}

int main()
{
    Person p1(999, 100, "sun");
    Person p2(800, 200, "zhu");
    Person p3(800, 180, "sha");
    Person p4(40, 180, "tang");
    list<Person> p;
    p.push_back(p1);
    p.push_back(p2);
    p.push_back(p3);
    p.push_back(p4);
    PrintList(p);
    p.sort(ComparePerson);
    cout << endl;
    PrintList(p);
    return 0;
}