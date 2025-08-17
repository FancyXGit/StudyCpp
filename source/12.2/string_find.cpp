#include <iostream>
using namespace std;
int main()
{
    string s = "012345678945";
    size_t pos = s.find("45");//从左往右
    if (pos == string::npos)
    {
        cout << "未找到" << endl;
    }
    else
    {
        cout << "在第" << pos << "位" << endl;
    }

    size_t pos1 = s.rfind("45");//从左往右
    if (pos1 == string::npos)
    {
        cout << "未找到" << endl;
    }
    else
    {
        cout << "在第" << pos1 << "位" << endl;
    }
    return 0;
}