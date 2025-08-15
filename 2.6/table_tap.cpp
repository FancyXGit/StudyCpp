#include <iostream>
using namespace std;
bool is_qualified(int num);
int main()
{
    for (int i = 1; i <= 100; i ++)
    {
        if (is_qualified(i))
        {
            cout << "敲桌子" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
    return 0;
}

bool is_qualified(int num)
{
    int ten_place = 0;
    int digit = 0;
    int temp = num;
    bool flag = 0;
    digit = temp % 10;
    temp /= 10;
    ten_place = temp % 10;
    if (digit == 7 || ten_place == 7 || num % 7 == 0)
    {
        flag = 1;
    }
    return flag;
}