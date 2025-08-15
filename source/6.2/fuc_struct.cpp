#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int age;
    double score;
};

void print_stu_info_value(student s);
void print_stu_info_pointer(student* p);

int main()
{
    student s = {"Alice",19,88.88};
    print_stu_info_value(s);
    cout
    << "Main_value:  " << "\t"
    << "姓名： " << s.name << "\t"
    << "年龄： " << s.age << "\t"
    << "分数： " << s.score << "\t"
    << endl;

    print_stu_info_pointer(&s);
    cout
    << "Main_pointer:  " << "\t"
    << "姓名： " << s.name << "\t"
    << "年龄： " << s.age << "\t"
    << "分数： " << s.score << "\t"
    << endl;
    return 0;
}

void print_stu_info_value(student s)
{
    s.name = "Bob";
    cout
    << "fuc_value:  " << "\t"
    << "姓名： " << s.name << "\t"
    << "年龄： " << s.age << "\t"
    << "分数： " << s.score << "\t"
    << endl;
}


void print_stu_info_pointer(student* p)
{
    p->name = "Yes";
    cout
    << "fuc_pointer:  " << "\t"
    << "姓名： " << p->name << "\t"
    << "年龄： " << p->age << "\t"
    << "分数： " << p->score << "\t"
    << endl;
}