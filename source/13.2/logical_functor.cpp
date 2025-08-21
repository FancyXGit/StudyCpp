#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

void PrintVector(const vector<bool> &v)
{
    for (vector<bool>::const_iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test1()
{
    vector<bool> v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(true);
    PrintVector(v);
    vector<bool> v2;
    transform(v.begin(), v.end(), back_inserter(v2), logical_not<bool>());
    PrintVector(v2);
}

int main()
{
    test1();
    return 0;
}