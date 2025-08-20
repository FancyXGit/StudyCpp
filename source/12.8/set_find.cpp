#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(40);
    s1.insert(20);
    if (s1.find(20) != s1.end())
    {
        cout << "find" << endl;
    }
    else
    {
        cout << "not finding" << endl;
    }
    cout << s1.count(30) << endl;
    return 0;
}