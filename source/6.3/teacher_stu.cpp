#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name_s;
    int score;
};
struct Teacher
{
    string name_t;
    Student stu_arr[5];
};

void input_info(Teacher arr[],int len);
void print_info(Teacher arr[],int len);

int main()
{
    Teacher tea_arr[3];
    input_info(tea_arr,3);
    print_info(tea_arr,3);
    return 0;
}

void input_info(Teacher arr[],int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "第" << i + 1 << "组\n" << "输入老师姓名：" << endl;
        cin >> arr[i].name_t;
        cout << "现在开始输入学生信息" << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "第" << j + 1 << "个学生\n" << "输入学生姓名：" <<endl;
            cin >> arr[i].stu_arr[j].name_s;
            cout << "输入学生分数" << endl;
            cin >> arr[i].stu_arr[j].score;
            cout << endl;
        }
        cout << endl;
    }
}

void print_info(Teacher arr[],int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "老师" << i + 1 << ":\n"
        << "姓名：" << arr[i].name_t << "\n"
        << "学生信息：" << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "学生" << j + 1 << ":\n"
            << "姓名：" << arr[i].stu_arr[j].name_s << "\n"
            << "分数：" << arr[i].stu_arr[j].score << endl;
        }
        cout << endl;
    }
}