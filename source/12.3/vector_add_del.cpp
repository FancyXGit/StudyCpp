#include <iostream>
#include <vector>
using namespace std;

void PrintVector(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v1;
    for (int i = 10; i < 60; i += 10)
    {
        v1.push_back(i);
    }
    PrintVector(v1);

    v1.pop_back();
    PrintVector(v1);

    v1.insert(v1.begin() + 1, 88);
    PrintVector(v1);

    v1.insert(v1.begin(), 2, 999);
    PrintVector(v1);

    v1.erase(v1.begin());
    PrintVector(v1);
    return 0;
}