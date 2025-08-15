#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void way1(char *buffer, ifstream &ifs);
void way2(char *buffer, ifstream &ifs, int size);
void way3(string &buff, ifstream &ifs);

int main()
{
    ifstream ifs;
    ifs.open("test.txt", ios::in);
    if (!ifs.is_open())
    {
        cout << "打开失败" << endl;
    }
    else
    {
        char buff[1024] = {0};
        //way1(buff, ifs);
        //way2(buff, ifs, sizeof(buff));
        string buff1;
        way3(buff1, ifs);
    }
    return 0;
}

void way1(char *buffer,ifstream &ifs)
{
    while (ifs >> buffer)
        {
            cout << buffer << endl;
        }
}

void way2(char *buffer,ifstream &ifs,int size)
{
    while(ifs.getline(buffer,size))
    {
        cout << buffer << endl;
    }
}

void way3(string &buff,ifstream &ifs)
{
    while(getline(ifs,buff))
    {
        cout << buff << endl;
    }
}