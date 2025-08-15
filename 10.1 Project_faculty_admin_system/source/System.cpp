#include <iostream>
#include "WorkerManagement.h"
using namespace std;

int main()
{
    WorkerManagement sys;
    int index = 0;
    sys.ReadData();
    while(true)
    {
        sys.ShowMenu();
        cout << "请输入选择" << endl;
        cin >> index;

        switch(index)
        {
            case 0: //退出
                sys.SaveData();
                sys.ExitSystem();
                break;
            
            case 1: //增加
                sys.AddWorker();
                sys.SaveData();
                break;
            
            case 2: //显示
                sys.ShowData();
                break;
            
            case 3: //删除
                sys.DelWorker();
                sys.SaveData();
                break;
            
            case 4: //修改
                sys.ReviseWorker();
                sys.SaveData();
                break;
            
            case 5: //查找
                sys.QueryWorker();
                break;
            
            case 6: //排序
                sys.SortWorker();
                sys.SaveData();
                break;
            
            case 7: //清空
                sys.ClearWorker();
                break;

            default: //默认
                cout << "输入错误，请重新输入" << endl;
                break;
        }
    }
    return 0;
}