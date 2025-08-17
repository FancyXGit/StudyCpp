#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "abcdef";
    string sub_str = str.substr(1, 3);
    cout << sub_str << endl;
    cout << str << endl;
    return 0;
}