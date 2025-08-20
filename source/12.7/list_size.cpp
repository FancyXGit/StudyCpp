#include <iostream>
#include <list>
using namespace std;

void PrintList(const list<int> &l)
{
    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    cout << l1.empty() << endl;
    cout << l1.size() << endl;

    l1.resize(10);
    PrintList(l1);
    return 0;
}