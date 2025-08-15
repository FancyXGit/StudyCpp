#include <iostream>
using namespace std;

class Person
{
public:

    void showPerson() const
    {
        m_A = 100;
    }

    mutable int m_A;
};

int main()
{
    Person p1;
    p1.showPerson();
    cout << p1.m_A;
    return 0;
}