#include <iostream>
#include <map>
#include <string>
using namespace std;

void PrintMap(const map<string,int> &m)
{
    cout << "{ ";
    for (map<string, int>::const_iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "[ " << it->first << " : " << it->second << " ]" << " ";
    }
    cout << "}" << endl;
}

int main()
{
    map<string, int> m;
    m.insert(pair<string, int>("A", 291));
    m.insert(pair<string, int>("C", 654));
    m.insert(pair<string, int>("B", 321));
    m.insert(pair<string, int>("D", 328));
    PrintMap(m);
    return 0;
}