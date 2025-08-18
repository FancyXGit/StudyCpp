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
    cout << v1.empty() << endl;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    PrintVector(v1);
    cout << v1.empty() << endl;
    cout << v1.capacity() << endl;
    cout << v1.size() << endl;

    v1.resize(15);
    PrintVector(v1);

    return 0;
}