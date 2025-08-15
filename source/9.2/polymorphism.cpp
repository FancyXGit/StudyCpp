#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void Speak()
    {
        cout << "叫叫叫" << endl;
    }
};

class Cat : public Animal
{
public:
    void Speak()
    {
        cout << "小猫叫叫叫" << endl;
    }
};

class Dog : public Animal
{
public:
    void Speak()
    {
        cout << "小狗叫叫叫" << endl;
    }
};

void doSpeak(Animal &a)
{
    a.Speak();
}

int main()
{
    Cat c;
    doSpeak(c);
    Dog d;
    doSpeak(d);
    return 0;
}