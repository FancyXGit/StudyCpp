#pragma once
#include "Worker.h"
using namespace std;

class Boss:public Worker
{
public:
    Boss(int id, string name, int deptid);
    virtual void ShowInfo();
    virtual int getDepartmentName();
};