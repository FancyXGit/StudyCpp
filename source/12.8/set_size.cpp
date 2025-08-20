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
    s1.insert(20);
    cout << s1.size() << endl;
    cout << s1.empty() << endl;
    set<int> s2;
    s2.swap(s1);
    cout << s1.empty() << endl;
    return 0;
}