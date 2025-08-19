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

    deque<int> d2(d1.begin(), d1.end());
    PrintIntDeque(d2);

    deque<int> d3(10, 100);
    PrintIntDeque(d3);

    deque<int> d4(d3);
    PrintIntDeque(d4);
    
    return 0;
}