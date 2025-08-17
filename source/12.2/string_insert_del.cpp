#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "hello";
    str.insert(1, "111");
    cout << str << endl;
    str.erase(1, 3);
    cout << str << endl;
    return 0;
}