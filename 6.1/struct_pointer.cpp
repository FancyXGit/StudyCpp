#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    double score;
};

int main()
{
    Student s1 = {"Alice",18,91.34};
    Student* p = &s1;
    cout << p->name;
    return 0;
}