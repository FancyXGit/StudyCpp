#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "我";
    s1 += "是";
    cout << s1 << endl;
    s1.append("人");
    cout << s1 << endl;
    return 0;
}