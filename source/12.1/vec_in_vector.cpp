#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> v;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;

    for (int i = 0; i < 5; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 1);
        v3.push_back(i + 2);
        v4.push_back(i + 3);
    }

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    for (vector<vector<int>>::iterator it1 = v.begin(); it1 != v.end(); it1++)
    {
        for (vector<int>::iterator it2 = it1->begin(); it2 != it1->end(); it2++)
        {
            cout << *it2 << " ";
        }
        cout << endl;
    }
    return 0;
}