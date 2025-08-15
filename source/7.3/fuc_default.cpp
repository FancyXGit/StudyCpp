#include <iostream>
using namespace std;
int add(int num1,int num2 = 100);
int main()
{
    cout << add(10);
    return 0;
}

int add(int num1,int num2)
{
    return num1 + num2;
}