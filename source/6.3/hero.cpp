#include <iostream>
#include <string>
using namespace std;

struct Hero
{
    string name;
    int age;
    bool sex;
};

void BubbleSort(int* arr,int len,int* seq);
void print_arr_seq(const Hero arr[],int len,int* seq);
string trans_sex(bool sex);

int main()
{
    Hero hero_info_arr[5] = 
    {
        {"刘备",23,1},
        {"关羽",22,1},
        {"张飞",20,1},
        {"赵云",21,1},
        {"貂蝉",19,0}
    };
    int seq[5] = {0};
    int age[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        age[i] = hero_info_arr[i].age;
    }
    BubbleSort(age,5,seq);
    print_arr_seq(hero_info_arr,5,seq);

    return 0;
}

void BubbleSort(int* arr,int len,int* seq)
{
    for (int i = 0; i < len; i++)
    {
        seq[i] = i;
    }
    int temp = 0;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                temp = seq[j];
                seq[j] = seq[j + 1];
                seq[j + 1] = temp;
            }
        }
    }
}

void print_arr_seq(const Hero arr[],int len,int* seq)
{
    for (int i = 0; i < len; i++)
    {
        cout 
        << "姓名：" << arr[seq[i]].name << "\t"
        << "年龄：" << arr[seq[i]].age << "\t"
        << "性别：" << trans_sex(arr[seq[i]].sex) << "\t"
        << endl;
    }
}

string trans_sex(bool sex)
{
    string sex_name = "";
    if (sex)
    {
        sex_name = "男";
    }
    else
    {
        sex_name = "女";
    }
    return sex_name;
}