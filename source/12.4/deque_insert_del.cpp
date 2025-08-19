#include <iostream>
#include <deque>
using namespace std;

void PrintIntDeque(const deque<int> &d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test1()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(30);
    d1.push_front(40);
    PrintIntDeque(d1);

    d1.pop_back();
    PrintIntDeque(d1);

    d1.pop_front();
    PrintIntDeque(d1);
}

void test2()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(30);
    d1.push_front(40);
    PrintIntDeque(d1);

    d1.insert(d1.begin(), 1000);
    PrintIntDeque(d1);

    d1.insert(d1.begin(),2,10000);
    PrintIntDeque(d1);

    deque<int> d2;
    d2.push_back(1);
    d2.push_back(2);
    d2.push_back(3);

    d1.insert(d1.begin(), d2.begin(), d2.end());
    PrintIntDeque(d1);
}

void test3()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(30);
    d1.push_front(40);
    PrintIntDeque(d1);

    deque<int>::iterator it = d1.begin();
    it += 2;
    d1.erase(it);
    PrintIntDeque(d1);

    d1.clear();
    cout << d1.empty() << endl;
}

int main()
{
    // test1();
    // test2();
    test3();
    return 0;
}