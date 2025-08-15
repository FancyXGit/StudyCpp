#include <iostream>
using namespace std;
int main()
{
    for (int num2 = 1; num2 <= 9; num2 ++)
    {
        for (int num1 = 1; num1 <= num2; num1 ++)
        {
            cout << num1 << " x " << num2 << " = " << num1 * num2;
            cout << "\t";
        }
        if (num2 != 9)
        {
            cout << endl;
        }
    }
    return 0;
}