#include <iostream>
using namespace std;

class BasicPage
{
public:
    void header()
    {
        cout << "header" << endl;
    }

    void footer()
    {
        cout << "footer" << endl;
    }

    void left()
    {
        cout << "left" << endl;
    }
};

class Java : public BasicPage
{
public:
    void content()
    {
        cout << "Java Content" << endl;
    }
};

class Cpp : public BasicPage
{
public:
    void content()
    {
        cout << "Cpp Content" << endl;
    }
};

class Python : public BasicPage
{
public:
    void content()
    {
        cout << "Python Content" << endl;
    }
};

int main()
{
    Java ja;
    Cpp cp;
    Python py;
    cp.header();
    cp.content();
    return 0;
}