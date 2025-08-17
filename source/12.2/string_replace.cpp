#include <iostream>
using namespace std;
int main()
{
    string s = "ABCDEFG";
    string s1 = "1111";
    s.replace(1, 3, s1);
    cout << s << endl;
    return 0;
}