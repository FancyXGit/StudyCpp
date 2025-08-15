#pragma once
#include "Worker.h"
using namespace std;

class Manager : public Worker
{
public:
    Manager(int id, string name, int deptid);
    virtual void ShowInfo();
    virtual int getDepartmentName();
};