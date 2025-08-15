#include "Manager.h"

Manager::Manager(int id, string name, int deptid)
{
    m_ID = id;
    m_Name = name;
    m_DepartmentID = deptid;
}
void Manager::ShowInfo()
{
    cout
        << "经理ID： " << m_ID << "\t"
        << "部门ID： " << m_DepartmentID << "\t"
        << "经理姓名：" << m_Name << endl;
}

int Manager::getDepartmentName()
{
    return 2;
}