#include <iostream>
using namespace std;

class Person
{
    int m_a;

    static int m_b;

    void func(){}

    static void func1(){}
};

int main()
{
    Person p1;
    cout << sizeof(p1);
    return 0;
}