#include <iostream>
#include <set>
using namespace std;

void PrintSet(const set<int> &s)
{
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(40);
    s1.insert(20);
    PrintSet(s1);

    s1.erase(s1.begin());
    PrintSet(s1);
    s1.erase(40);
    PrintSet(s1);

    s1.clear();
    PrintSet(s1);
    return 0;
}