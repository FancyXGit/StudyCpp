#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string m_Name;
    int m_Age;
    string m_Idol;

public:
    void init(string name,int age,string idol)
    {
        m_Name = name;
        m_Age = age;
        m_Idol = idol;
    }

    void print_info()
    {
        cout << m_Name << m_Age << m_Idol;
    }
};

int main()
{
    Person p1;
    p1.init("Alice",19,"self");
    p1.print_info();
    return 0;
}