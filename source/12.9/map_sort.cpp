#include <iostream>
#include <map>
using namespace std;

class MyCompare
{
public:
    bool operator()(int v1,int v2) const
    {
        return v1 > v2;
    }
};

void PrintMap(const map<int,int,MyCompare> &m)
{
    cout << "{ ";
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << "[ " << it->first << " : " << it->second << " ]" << " ";
    }
    cout << "}" << endl;
}

int main()
{
    map<int, int, MyCompare> m;
    m.insert(make_pair(100, 20));
    m.insert(make_pair(180, 20));
    m.insert(make_pair(90, 20));
    m.insert(make_pair(130, 20));
    PrintMap(m);
    return 0;
}