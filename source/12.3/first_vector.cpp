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

using namespace std;
int main()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    PrintVector(v1);

    vector<int> v2(v1);
    PrintVector(v2);

    vector<int> v3(10, 100);
    PrintVector(v3);

    vector<int> v4(v3.begin(), v3.end() - 5);
    PrintVector(v4);
    
    return 0;
}