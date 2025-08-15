#include <iostream>
using namespace std;

class Person
{
public:
    static int m_A;
};

int Person::m_A = 100;

int main()
{
    Person p;
    cout << p.m_A << endl;
    Person p1;
    p1.m_A = 200;
    cout << p.m_A << endl;
    return 0;
}