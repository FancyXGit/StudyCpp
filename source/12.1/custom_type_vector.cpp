#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person
{
public:
    Person(int age,string name):m_Age(age),m_Name(name){}

    int m_Age;
    string m_Name;
};

int main()
{
    vector<Person> p;
    Person p1(20, "AAA");
    Person p2(22, "BBB");
    Person p3(25, "CCC");
    Person p4(27, "DDD");
    Person p5(29, "EEE");

    p.push_back(p1);
    p.push_back(p2);
    p.push_back(p3);
    p.push_back(p4);
    p.push_back(p5);

    for (vector<Person>::iterator it = p.begin(); it != p.end(); it++)
    {
        cout << it->m_Age << " " << it->m_Name << endl;
    }
        return 0;
}