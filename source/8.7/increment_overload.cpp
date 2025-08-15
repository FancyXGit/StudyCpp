#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream& operator<<(ostream& cout,const MyInteger& myint);

public:
    MyInteger(int a):m_Num(a){}

    MyInteger& operator++()
    {
        m_Num++;
        return *this;
    }

    MyInteger operator++(int)
    {
        MyInteger temp = *this;
        m_Num++;
        return temp;
    }

private:
    int m_Num;
};

ostream& operator<<(ostream& cout,const MyInteger& myint)
{
    cout << myint.m_Num;
    return cout;
}

int main()
{
    MyInteger myint(10);
    cout << myint++ << endl;
    cout << myint << endl;
    return 0;
}