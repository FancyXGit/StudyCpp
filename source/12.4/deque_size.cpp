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
    cout << d1.empty() << endl;
    cout << d1.size() << endl;
    
    d1.resize(15);
    PrintIntDeque(d1);

    d1.resize(20, 1);
    PrintIntDeque(d1);
    
    return 0;
}