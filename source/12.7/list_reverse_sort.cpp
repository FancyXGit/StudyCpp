#include <iostream>
#include <list>
using namespace std;

void PrintList(const list<int> &l)
{
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l;
    l.push_back(20);
    l.push_back(40);
    l.push_back(10);
    l.push_back(90);
    l.push_back(30);
    PrintList(l);

    l.reverse();
    PrintList(l);

    l.sort();
    PrintList(l);
    return 0;
}