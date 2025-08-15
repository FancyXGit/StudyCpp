#include <iostream>
#include <string>
using namespace std;

class MyPrint
{
public:
    void operator()(string text)
    {
        cout << text;
    }
    void operator()(int a,int b)
    {
        cout << a + b;
    }
};

int main()
{
    MyPrint p1;
    p1("Hello World");
    p1(10,20);
    return 0;
}