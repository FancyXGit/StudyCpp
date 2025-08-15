#include "Employee.h"

Employee::Employee(int id, string name, int deptid)
{
    m_ID = id;
    m_Name = name;
    m_DepartmentID = deptid;
}

void Employee::ShowInfo()
{
    cout
        << "职工ID： " << m_ID << "\t"
        << "部门ID： " << m_DepartmentID << "\t"
        << "职工姓名：" << m_Name << endl;
}

int Employee::getDepartmentName()
{
    return 1;
}