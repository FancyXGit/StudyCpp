#include <iostream>
using namespace std;

class Animal
{
public:
    int m_Age;
};

class Sheep : virtual public Animal
{
};

class Camel : virtual public Animal
{
};

class Alpaca : public Sheep, public Camel
{
};

int main()
{
    Alpaca a1;
    a1.Sheep::m_Age = 10;
    a1.Camel::m_Age = 20;
    cout << a1.Sheep::m_Age << endl;
    cout << a1.Camel::m_Age << endl;
    return 0;
}