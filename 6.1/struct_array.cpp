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
    Student stu_arr[3] = 
    {
        {"Alice",18,88.28},
        {"Bob",19,91.26},
        {"Cynic",17,85.34}
    };
    stu_arr[2].score = 92.34;
    for (int i = 0; i < 3; i++)
    {
        cout 
        << " 年龄：" << stu_arr[i].age << "\t"
        << " 姓名：" << stu_arr[i].name << "\t"
        << " 分数：" << stu_arr[i].score << "\t"
        << endl;
    }
    return 0;
}