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
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(2 * i);
    }
    PrintVector(v1);

    vector<int> v2;
    v2 = v1;
    PrintVector(v2);

    vector<int> v3;
    v3.assign(v1.begin(), v1.end());
    PrintVector(v3);

    return 0;
}