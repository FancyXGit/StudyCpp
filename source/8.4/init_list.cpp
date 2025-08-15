#include <iostream>
using namespace std;

class Person
{
public:
    Person(int a,int b,int c):m_A(a),m_B(b),m_C(c){}

//private:
    int m_A;
    int m_B;
    int m_C;
};

int main()
{
    Person p(30,20,10);
    cout << p.m_A << "\n" << p.m_B << "\n" << p.m_C << endl;
    return 0;
}