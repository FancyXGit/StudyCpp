#include <iostream>
using namespace std;

class Person
{
    friend ostream& operator<<(ostream& cout,Person& p);
public:
    Person(int a,int b):m_A(a),m_B(b){}    
private:
    int m_A;
    int m_B;
};

ostream& operator<<(ostream& cout,Person& p)
{
    cout << "m_A = " << p.m_A << endl;
    cout << "m_B = " << p.m_B << endl;
    return cout;
}

int main()
{
    Person p1(10,20);
    cout << p1 << "hello world" << endl;
    return 0;
}