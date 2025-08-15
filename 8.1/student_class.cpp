#include <iostream>
#include <string>
using namespace std;

class Student 
{
public:
    string m_name;
    int m_id;

    void show()
    {
        cout << m_name << m_id;
    }
};

int main()
{
    Student s1;
    s1.m_name = "Alice";
    s1.m_id = 37243729;
    s1.show();

    Student s2;
    s2.m_name = "Bob";
    s2.m_id = 97317712;
    s2.show();
    return 0;
}