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
    map<string,int> m1;
    cout << m1.empty() << endl;
    m1.insert(pair<string, int>("AAA", 100));
    cout << m1.empty() << endl;

    map<string, int> m2;
    m2.insert(pair<string, int>("BBB", 200));
    m2.swap(m1);
    PrintMap(m2);
    return 0;
}