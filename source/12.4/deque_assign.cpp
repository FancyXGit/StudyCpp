#include <iostream>
#include <deque>
using namespace std;

void PrintIntDeque(deque<int> &d)
{
    for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    deque<int> d1;
    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    PrintIntDeque(d1);

    deque<int> d2;
    d2 = d1;
    PrintIntDeque(d2);

    deque<int> d3;
    d3.assign(d2.begin(), d2.end());
    PrintIntDeque(d3);

    deque<int> d4;
    d4.assign(10,100);
    PrintIntDeque(d4);
    
    return 0;
}