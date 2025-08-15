#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int ans = rand() % 100 +1;
    int num = 0;
    do
    {
        cin >> num;
        if (num > ans)
        {
            cout << "大了！" << endl;
        }
        else if (num < ans)
        {
            cout << "小了" <<endl;
        }
        else
        {
            cout << "对了，答案是" << ans <<endl;
        }
    } while (num != ans);
    
    return 0;
}