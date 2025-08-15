#include <iostream>
#include <string>
using namespace std;

class Phone
{
public:
    Phone(string name)
    {
        m_Name = name;
        cout << "Phone构造函数" << endl;
    }
    string m_Name;
};

class Person
{
public:

    Person(string name,string phone_name):m_Name(name),m_Phone(phone_name)
    {
        cout << "Person构造函数" << endl;
    }

    string m_Name;
    Phone m_Phone;
};

int main()
{
    Person p("张三","Apple");
    cout << p.m_Phone.m_Name << endl;
    return 0;
}