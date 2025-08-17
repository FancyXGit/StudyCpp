#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void test1()
{
    vector<int> v;
    for (int i = 10; i < 50; i += 10)
    {
        v.push_back(i);
    }
    vector<int>::iterator itBegin = v.begin();
    vector<int>::iterator itEnd = v.end();

    while (itBegin != itEnd)
    {
        cout << *itBegin << endl;
        itBegin++;
    }
}

void test2()
{
    vector<int> v;
    for (int i = 10; i < 50; i += 10)
    {
        v.push_back(i);
    }

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
}

void myPrint(int val)
{
    cout << val << endl;
}

void test3()
{
    vector<int> v;
    for (int i = 10; i < 50; i += 10)
    {
        v.push_back(i);
    }

    for_each(v.begin(), v.end(), myPrint);
}

int main()
{
    //test1();
    //test2();
    test3();
    return 0;
}