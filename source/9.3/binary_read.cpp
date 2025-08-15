#include <iostream>
#include <fstream>
using namespace std;

class Person
{
public:
    char m_Name[64] = {0};
    int m_Age;
};

int main()
{
    ifstream ifs;
    ifs.open("person.txt", ios::in | ios::binary);
    if(!ifs.is_open())
    {
        cout << "打开失败" << endl;
    }
    else
    {
        Person p;
        ifs.read((char *)&p, sizeof(Person));
        cout << p.m_Age << " " << p.m_Name << endl;
        ifs.close();
    }
    return 0;
}