#include <iostream>
#include <cmath>
using namespace std;
int num_len(int num);
bool is_flower_number(int num,int len);
int main()
{
    for (int i = 10;i < 1e5;i ++)
    {
        if (is_flower_number(i,num_len(i)))
        {
            cout << i << endl;
        }
    }
    return 0;
}

bool is_flower_number(int num,int len)
{
    int a = 0;
    int tem = num;
    int sum = 0;
    int flag = 0;
    while (num > 0)
    {
        a = num % 10;
        num /= 10;
        sum += pow(a,len);
    }
    if (tem == sum)
    {
        flag = 1;
    }
    return flag;
}

int num_len(int num)
{
    int len = 0;
    while (num > 0)
    {
        num /= 10;
        len ++;
    }
    return len;
}