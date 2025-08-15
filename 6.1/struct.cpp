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
    Student s1;
    s1.name = "Alice";
    s1.age = 18;
    s1.score = 91.28;
    cout << "name: " << s1.name << " age: " << s1.age << " score: " << s1.score << endl;

    Student s2 = {"Bob",19,92.43};
    cout << "name: " << s2.name << " age: " << s2.age << " score: " << s2.score << endl;
    
    return 0;
}