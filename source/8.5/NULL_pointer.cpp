#include <iostream>
using namespace std;
class Person
{
public:
    void func1()
    {
        cout << "this is person class" << endl;
    }

    void func2()
    {
        m_A = 100;
        cout << m_A << endl;
    }

    int m_A;
};

int main()
{
    Person* p = nullptr;
    p->func1();
    //p->func2();
    return 0;
}