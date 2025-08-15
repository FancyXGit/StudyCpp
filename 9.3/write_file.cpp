#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream ofs;
    ofs.open("test.txt", ios::out);
    ofs << "姓名：张三" << endl;
    ofs << "性别：男" << endl;
    ofs << "年龄：18 前面有空格" << endl;
    return 0;
}