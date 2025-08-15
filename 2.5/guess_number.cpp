#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int ans = rand() % 100 +1;
    int num = 0;
    while (true)
    {
        cout << "请输入数字" << endl;
        cin >> num;
        if (num == ans)
        {
            cout << "正确！数字为" << ans << endl;
            break;
        }
        else if (num > ans)
        {
            cout << "大了！" << endl;
        }
        else
        {
            cout << "小了！" << endl;
        }
    }
    return 0;
}