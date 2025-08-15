#include <iostream>
using namespace std;

class Person
{
public:
    Person(int a,int b):m_A(a),m_B(b){}
    /*
    Person operator+(const Person& b)
    {
        Person sum(0,0);
        sum.m_A = this->m_A + b.m_A;
        sum.m_B = this->m_B + b.m_B;
        return sum;
    }
    */

//private:
    int m_A;
    int m_B;

};

Person operator+(const Person& p1,const Person& p2)
{
    Person sum(0,0);
    sum.m_A = p1.m_A + p2.m_A;
    sum.m_B = p1.m_B + p2.m_B;
    return sum;
}

int main()
{
    Person p1(10,20);
    Person p2(50,90);
    Person p3 = p1 + p2;
    cout << p3.m_A << " " << p3.m_B;
    return 0;
}