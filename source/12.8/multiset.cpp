#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    for (auto it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}