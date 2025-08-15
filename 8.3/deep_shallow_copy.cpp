#include <iostream>
using namespace std;

class Person
{
public:
    Person(int age,int height)
    {
        m_Age = age;
        m_Height = new int(height);
    }

    Person(const Person& p)
    {
        m_Age = p.m_Age;
        m_Height = new int(*(p.m_Height));
    }

    ~Person()
    {
        if (m_Height != NULL)
        {
            delete m_Height;
            m_Height = NULL;
        }
    }

private:
    int m_Age;
    int* m_Height;
};

int main()
{
    Person p1(19,175);
    Person p2(p1);
    return 0;
}