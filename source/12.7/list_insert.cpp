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
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_front(100);
    l.push_front(200);
    l.push_front(300);
    PrintList(l);

    l.pop_back();
    l.pop_front();
    PrintList(l);

    l.insert(l.begin(), 1000);
    PrintList(l);

    l.erase(l.begin());
    PrintList(l);

    l.push_back(1e4);
    l.push_back(1e4);
    l.push_back(1e4);
    l.push_back(1e3);
    l.push_back(1e4);
    PrintList(l);
    l.remove(1e4);//删除所有1e4
    PrintList(l);

    l.clear();
    cout << l.empty() << endl;
    return 0;
}