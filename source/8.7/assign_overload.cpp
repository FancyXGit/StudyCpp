#include <iostream>
using namespace std;

class Person
{
public:
    Person(int age)
    {
        m_age = new int(age);
    }
    Person(const Person& p)
    {
        m_age = new int(*(p.m_age));
    }
    ~Person()
    {
        delete m_age;
        m_age = nullptr;
    }

    Person& operator=(Person& p)
    {
        delete m_age;
        m_age = new int(*(p.m_age));
        return *this;
    }

    void printage()
    {
        cout << *m_age;
    }

private:
    int* m_age;
};

int main()
{
    Person p1(18);
    Person p2(20);
    Person p3(30);
    p3 = p2 = p1;
    p2.printage();
    p3.printage();
    return 0;
}