#include <iostream>
using namespace std;

class Person
{
public:
    Person(int age)
    {
        this->age = age;
    }

    Person& add_age(int age)
    {
        this->age += age;
        return *this;
    }

    int age;
};

int main()
{
    Person p1(18);
    cout << p1.age << endl;
    p1.add_age(2).add_age(2).add_age(2).add_age(2);
    cout << p1.age << endl;
    return 0;
}