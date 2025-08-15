#include <iostream>
using namespace std;

void func(int a);
void func(double a);

int main()
{
    func(3);
    return 0;
}

void func(int a)
{
    cout << "int";
}

void func(double a)
{
    cout << "double";
}