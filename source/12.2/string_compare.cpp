#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "Xello";
    string s2 = "Hello";
    if (s1.compare(s2) == 0)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << s1.compare(s2) << endl;
    }
    return 0;
}