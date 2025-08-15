#include <iostream>
using namespace std;

const double pi = 3.1415;

class Circle
{
public:
    double m_r;
    double calculateZC()
    {
        return 2 * pi * m_r;
    }
};

int main()
{
    Circle c1;
    c1.m_r = 10;
    cout << c1.calculateZC();
    return 0;
}