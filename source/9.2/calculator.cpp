#include <iostream>
using namespace std;

class AbstractCalcualtor
{
public:

    virtual int getResult()
    {
        return 0;
    }

    int num1;
    int num2;
};

class AddCalculator:public AbstractCalcualtor
{
    public:

    int getResult()
    {
        return num1 + num2;
    }
};

class SubCalculator:public AbstractCalcualtor
{
    public:

    int getResult()
    {
        return num1 - num2;
    }
};

class MulCalculator:public AbstractCalcualtor
{
    public:

    int getResult()
    {
        return num1 * num2;
    }
};

int main()
{
    AbstractCalcualtor *abc = new AddCalculator;
    abc->num1 = 10;
    abc->num2 = 20;
    cout << abc->getResult();
    delete abc;
    abc = nullptr;
    return 0;
}