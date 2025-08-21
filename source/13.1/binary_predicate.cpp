#include <iostream>
#include <vector>
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

class SortRule
{
public:
    bool operator()(int val1,int val2)
    {
        return val1 > val2;
    }
};

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(30);
    v.push_back(50);
    sort(v.begin(), v.end(),SortRule());
    PrintVector(v);
    return 0;
}