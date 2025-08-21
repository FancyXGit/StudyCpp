#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> m;
    m.insert(pair<int, int>(1, 20));
    m.insert(pair<int, int>(9, 30));
    m.insert(pair<int, int>(5, 70));

    auto pos = m.find(4);
    if (pos != m.end())
    {
        cout << pos->second << endl;
    }
    else
    {
        cout << "none" << endl;
    }
    return 0;
}