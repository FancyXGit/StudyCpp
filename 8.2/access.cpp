#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string m_name;

protected:
    string m_car;

private:
    int m_Password;

public:
    void fuc()
    {
        m_name = "张三";
        m_car = "拖拉机";
        m_Password = 123456;
    }
};

int main()
{
    Person p1;
    p1.m_name = "李四";
    //p1.m_car = "奔驰";
    //p1.m_password = 123123;
    return 0;
}