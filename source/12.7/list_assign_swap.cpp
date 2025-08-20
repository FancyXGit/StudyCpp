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

    list<int> l2;
    l2 = l1;
    PrintList(l2);

    list<int> l3;
    l3.assign(l2.begin(), l2.end());
    PrintList(l3);

    list<int> l4;
    l4.assign(10, 100);
    PrintList(l4);

    l1.swap(l4);
    PrintList(l1);
    return 0;
}