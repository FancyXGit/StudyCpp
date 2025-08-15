#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    virtual void speak() = 0;
    virtual ~Animal() 
    {
        
    }
};

class Cat:public Animal
{
public:
    Cat(string name)
    {
        m_Name = new string(name);
    }

    void speak()
    {
        cout << *m_Name << "小猫叫叫叫" << endl;
    }

    ~Cat()
    {
        delete m_Name;
        m_Name = nullptr;
        cout << "~Cat" << endl;
    }

    string *m_Name;
};

int main()
{
    Animal *a = new Cat("Maow");
    a->speak();
    delete a;
    a = nullptr;
    return 0;
}