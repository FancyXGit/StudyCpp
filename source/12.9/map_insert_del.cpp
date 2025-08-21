#include <iostream>
#include <map>
using namespace std;

void PrintMap(const map<int,int> &m)
{
    cout << "{ ";
    for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "[ " << it->first << " : " << it->second << " ]" << " ";
    }
    cout << "}" << endl;
}

int main()
{
    map<int, int> m;
    m.insert(pair<int, int>(100, 200));
    m.insert(make_pair(200, 300));
    m.insert(map<int, int>::value_type(300, 400));
    m[400] = 500;
    PrintMap(m);

    m.erase(m.begin());
    PrintMap(m);

    m.erase(300);
    PrintMap(m);
    return 0;
}