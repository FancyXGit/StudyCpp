#include <iostream>
#include <string>
using namespace std;
int main()
{
    const char *str = "Hello World";
    string s(str);
    cout << str << endl;
    string s1(10,'a');
    cout << s1 << endl;
    return 0;
}