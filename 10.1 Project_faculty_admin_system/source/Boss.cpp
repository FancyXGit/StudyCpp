#include "Boss.h"

Boss::Boss(int id, string name, int deptid)
{
    m_ID = id;
    m_Name = name;
    m_DepartmentID = deptid;
}

void Boss::ShowInfo()
{
    cout
        << "老板ID： " << m_ID << "\t"
        << "部门ID： " << m_DepartmentID << "\t"
        << "老板姓名：" << m_Name << endl;
}

int Boss::getDepartmentName()
{
    return 3;
}