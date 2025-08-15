#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"
using namespace std;

class WorkerManagement
{
public:
    WorkerManagement();

    void ShowMenu();

    void ReadData();
    int getLineCount(const string &filename);

    void ShowData();
    string TransType(int WorkerType);

    void PrintSingleWorker(int index);

    void DelWorker();
    int FindWorker(int id);

    void ReviseWorker();

    void QueryWorker();

    void SortWorker();

    void ClearWorker();

    void SaveData();

    void AddWorker();

    void ExitSystem();

    ~WorkerManagement();

protected:
    int m_WorkerNum = 0;
    Worker **m_WorkerArray = nullptr;
    const string FILENAME = "D:\\Data\\Project\\StudyCpp\\10.1 Project_faculty_admin_system\\data\\WorkerData.txt";
    bool m_FileIsEmp;
};