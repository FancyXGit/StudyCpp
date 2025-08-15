#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person(string name,int age):m_Name(name),m_Age(age){}

    bool operator==(const Person& p2)
    {
        bool flag = false;
        if (m_Age == p2.m_Age && m_Name == p2.m_Name)
        {
            flag = true;
        }
        return flag;
    }

private:
    string m_Name;
    int m_Age;
};

int main()
{
    Person p1("Tom",18);
    Person p2("Tom",19);
    if (p1 == p2)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "NO" <<endl;
    }
    return 0;
}