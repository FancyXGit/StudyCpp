#include <iostream>
using namespace std;
void func(int a,int);
int main()
{
    func(10,20);
    return 0;
}

void func(int a,int)
{
    cout << "This is func";
}