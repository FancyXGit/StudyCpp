#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int age;
    double score;
};
struct teacher
{
    int id;
    string name;
    int age;
    student stu;
};

int main()
{
    teacher t = {22436,"Wang",34,{"Liu",18,94.57}};
    cout
    << "老师姓名： " << t.name << "\t"
    << "老师ID: " << t.id << "\t"
    << "老师年龄: " << t.age << "\t"
    << "学生姓名: " << t.stu.name << "\t"
    << "学生年龄: " << t.stu.age << "\t"
    << "学生成绩: " << t.stu.score << "\t"
    << endl;
    return 0;
}