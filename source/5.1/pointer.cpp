#include <iostream>
using namespace std;
int main()
{
    const int a = 1;
    int b = 12;
    const int* p = &a;
    int* const q = &b;
    return 0;
}