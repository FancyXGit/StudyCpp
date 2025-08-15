#pragma once
#include <iostream>
#include <string>
using namespace std;

class Worker
{
public:
    virtual void ShowInfo() = 0;
    virtual int getDepartmentName() = 0;

    int m_ID;
    string m_Name;
    int m_DepartmentID;
};