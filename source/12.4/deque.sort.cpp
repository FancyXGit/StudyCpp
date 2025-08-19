#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void PrintIntDeque(const deque<int> &d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);
    PrintIntDeque(d);
    
    sort(d.begin(), d.end());
    PrintIntDeque(d);
    return 0;
}