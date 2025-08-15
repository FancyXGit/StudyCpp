#include <iostream>
using namespace std;

class Father
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son1:public Father
{
    void func()
    {
        m_A = 10;//public
        m_B = 10;//protectced
    }
};

int main()
{
    Son1 s;
    s.m_A = 10;
    return 0;
}