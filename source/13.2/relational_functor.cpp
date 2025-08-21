#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

void PrintVector(const vector<int> &v)
{
    for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(50);
    v.push_back(40);
    v.push_back(20);
    sort(v.begin(), v.end(), greater<int>());
    PrintVector(v);
    return 0;
}