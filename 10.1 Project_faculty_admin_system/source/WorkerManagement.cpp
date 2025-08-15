#include "WorkerManagement.h"

WorkerManagement::WorkerManagement()
{

}

void WorkerManagement::ShowMenu()
{
    cout << endl;
    cout << "*******欢迎使用职工管理系统!*******" << endl;
    cout << "********* 0.退出管理程序 *********" << endl; 	
    cout << "********* 1.增加职工信息 *********" << endl;
    cout << "********* 2.显示职工信息 *********" << endl;
    cout << "********* 3.删除离职员工 *********" << endl;
    cout << "********* 4.修改职工信息 *********" << endl;
    cout << "********* 5.查找职工信息 *********" << endl;
    cout << "********* 6.按照编号排序 *********" << endl;
    cout << "********* 7.清空所有文档 *********" << endl;
    cout << endl;
}

void WorkerManagement::ReadData()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    if (!ifs.is_open())
    {
        cout << "文件不存在，将创建新文件" << endl;
        m_WorkerNum = 0;
        m_WorkerArray = nullptr;
        m_FileIsEmp = true;
        ifs.close();
    }
    else if (ifs.peek() == EOF)
    {
        cout << "文件为空" << endl;
        m_WorkerNum = 0;
        m_WorkerArray = nullptr;
        m_FileIsEmp = true;
        ifs.close();
    }
    else
    {
        cout << "文件存在且不为空，正在读写" << endl;
        m_WorkerNum = getLineCount(FILENAME);
        m_WorkerArray = new Worker *[m_WorkerNum];
        Worker* temp_w = nullptr;
        int id;
        string name;
        int DepartmentID;
        int WorkerType;
        for (int i = 0; i < m_WorkerNum; i++)
        {
            ifs >> WorkerType >> id >> name >> DepartmentID;
            switch (WorkerType)
            {
            case 1:
                temp_w = new Employee(id, name, DepartmentID);
                break;

            case 2:
                temp_w = new Manager(id, name, DepartmentID);
                break;

            case 3:
                temp_w = new Boss(id, name, DepartmentID);
                break;
            
            default:
                cout << "WorkerType cannot be" << WorkerType << "!" << endl;
                break;
            }
            m_WorkerArray[i] = temp_w;
        }
        cout << "已读取到" << m_WorkerNum << "条数据" << endl;
    }
}

int WorkerManagement::getLineCount(const string& filename)
{
    ifstream ifs;
    ifs.open(filename, ios::in);
    int LineCount = 0;
    string line;
    while (getline(ifs,line))
    {
        LineCount++;
    }
    return LineCount;
}

void WorkerManagement::ShowData()
{
    if (m_FileIsEmp)
    {
        cout << "数据为空" << endl;
    }
    else
    {
        cout << "查询到" << m_WorkerNum << "名员工" << endl;
        for (int i = 0; i < m_WorkerNum; i++)
        {
            PrintSingleWorker(i);
        }
    }
}

string WorkerManagement::TransType(int WorkerType)
{
    string Stype = "NULL";
    switch (WorkerType)
    {
        case 1:
            Stype = "职工";
            break;
        case 2:
            Stype = "经理";
            break;
        case 3:
            Stype = "老板";
            break;
        default:
            break;
    }
    return Stype;
}

void WorkerManagement::PrintSingleWorker(int index)
{
    cout
        << "ID： " << m_WorkerArray[index]->m_ID << "\t"
        << "姓名： " << m_WorkerArray[index]->m_Name << "\t"
        << "部门ID： " << m_WorkerArray[index]->m_DepartmentID << "\t"
        << "级别： " << TransType(m_WorkerArray[index]->getDepartmentName())
        << endl;
}

void WorkerManagement::DelWorker()
{
    int DelID = -1;
    cout << "输入需要删除的员工ID" << endl;
    cin >> DelID;
    int index = FindWorker(DelID);
    if (index == -1)
    {
        cout << "未找到员工" << endl;
    }
    else
    {
        cout << "找到员工" << endl;
        PrintSingleWorker(index);

        for (int i = index; i < m_WorkerNum - 1; i++)
        {
            m_WorkerArray[i] = m_WorkerArray[i + 1];
        }
        m_WorkerNum--;
        cout << "删除成功！" << endl;
    }
}

void WorkerManagement::ReviseWorker()
{
    int RevID = -1;
    cout << "输入需要修改的员工ID" << endl;
    cin >> RevID;
    int index = FindWorker(RevID);
    if (index == -1)
    {
        cout << "未找到员工" << endl;
    }
    else
    {
        cout << "找到员工" << endl;
        PrintSingleWorker(index);

        int NewID;
        string NewName;
        int NewDepartmentID;
        int NewType;
        Worker *NewWorker;
        cout << "输入新ID" << endl;
        cin >> NewID;
        cout << "输入新的姓名" << endl;
        cin >> NewName;
        cout << "输入新的部门ID" << endl;
        cin >> NewDepartmentID;
        cout << "输入新的员工类型" << endl;
        cout << "1.职工" << endl;
        cout << "2.经理" << endl;
        cout << "3.老板" << endl;
        cin >> NewType;
        switch (NewType)
        {
        case 1:
            NewWorker = new Employee(NewID, NewName, NewDepartmentID);
            break;
        
        case 2:
            NewWorker = new Manager(NewID, NewName, NewDepartmentID);
            break;

        case 3:
            NewWorker = new Boss(NewID, NewName, NewDepartmentID);
            break;
        
        default:
            cout << "WorkerType cannot be" << NewType << endl;
            break;
        }
        delete m_WorkerArray[index];
        m_WorkerArray[index] = NewWorker;
        cout << "修改完成" << endl;
    }
}

void WorkerManagement::QueryWorker()
{
    cout << "输入查找方式" << endl;
    cout << "1.按职工ID查找" << endl;
    cout << "2.按职工姓名查找" << endl;
    int QueryWay = 0;
    cin >> QueryWay;
    switch (QueryWay)
    {
        case 1:
        {
            cout << "输入职工ID：" << endl;
            int QID;
            cin >> QID;
            int index = FindWorker(QID);
            if (index == -1)
            {
                cout << "查无此人" << endl;
            }
            else
            {
                cout << "找到职工" << endl;
                PrintSingleWorker(index);
            }
            break;
        }
            
        case 2:
        {
            cout << "输入职工姓名" << endl;
            string QueryName;
            cin >> QueryName;
            int index = -1;
            for (int i = 0; i < m_WorkerNum; i++)
            {
                if (m_WorkerArray[i]->m_Name == QueryName)
                {
                    index = i;
                    break;
                }
            }
            if (index == -1)
            {
                cout << "查无此人" << endl;
            }
            else
            {
                cout << "找到职工" << endl;
                PrintSingleWorker(index);
            }
            break;
        }
            
        default:
            cout << "QueryWay cannot be" << QueryWay << endl;
    }
}

int WorkerManagement::FindWorker(int id)
{
    int seq = -1;
    for (int i = 0; i < m_WorkerNum; i++)
    {
        if (m_WorkerArray[i]->m_ID == id)
        {
            seq = i;
            break;
        }
    }
    return seq;
}

void WorkerManagement::SortWorker()
{
    cout << "对员工ID进行升序排列" << endl;
    Worker *temp_worker = nullptr;
    for (int i = 0; i < m_WorkerNum - 1; i++)
    {
        for (int j = 0; j < m_WorkerNum - 1 - i; j++)
        {
            if (m_WorkerArray[j]->m_ID > m_WorkerArray[j + 1]->m_ID)
            {
                temp_worker = m_WorkerArray[j];
                m_WorkerArray[j] = m_WorkerArray[j + 1];
                m_WorkerArray[j + 1] = temp_worker;
            }
        }
    }
    cout << "排序完成" << endl;
}

void WorkerManagement::SaveData()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out);
    for (int i = 0; i < m_WorkerNum; i++)
    {
        ofs
            << m_WorkerArray[i]->getDepartmentName() << " "
            << m_WorkerArray[i]->m_ID << " "
            << m_WorkerArray[i]->m_Name << " "
            << m_WorkerArray[i]->m_DepartmentID
            << endl;
    }
    ofs.close();
    cout << "文件已保存！" << endl;
}

void WorkerManagement::ClearWorker()
{
    cout << "是否删除全部数据？" << endl;
    cout << "1.是 2.否" << endl;
    int if_clear = 2;
    cin >> if_clear;
    if (if_clear == 2)
    {
        cout << "删除已取消" << endl;
    }
    else if (if_clear == 1)
    {
        cout << "正在删除" << endl;
        ofstream ofs(FILENAME, ios::trunc);
        ofs.close();

        if (m_WorkerArray != nullptr)
        {
            for (int i = 0; i < m_WorkerNum; i++)
            {
                delete m_WorkerArray[i];
                m_WorkerArray[i] = nullptr;
            }
            delete[] m_WorkerArray;
            m_WorkerArray = nullptr;
        }
        m_WorkerNum = 0;
        m_FileIsEmp = true;
        cout << "删除成功！" << endl;
    }
    else
    {
        cout << "输入错误" << endl;
    }
}

void WorkerManagement::AddWorker()
{
    cout << "输入添加的数量" << endl;
    int add_num = 0;
    cin >> add_num;
    if (add_num > 0)
    {
        int final_num = add_num + m_WorkerNum;
        Worker **final_array = new Worker*[final_num];
        if (m_WorkerArray != nullptr)
        {
            for (int i = 0; i < m_WorkerNum; i++)
            {
                final_array[i] = m_WorkerArray[i];
            }
        }

        int id = 0;
        string name;
        int deptid = 0;
        int add_worker_type = 0;
        Worker *temp_w = nullptr;
        for (int i = 0; i < add_num; i++)
        {
            if(i != 0)
            {
                cout << "-----------------------" << endl;
            }
            cout << "正在输入第" << i + 1 << "个" << endl;

            cout << "输入ID" << endl;
            cin >> id;
            cout << "输入姓名" << endl;
            cin >> name;
            cout << "输入部门ID" << endl;
            cin >> deptid;

            cout << "输入添加的类别" << endl;
            cout << "1.职工" << endl;
            cout << "2.经理" << endl;
            cout << "3.老板" << endl;
            cin >> add_worker_type;

            switch(add_worker_type)
            {
                case 1:
                    temp_w = new Employee(id, name, deptid);
                    break;
                
                case 2:
                    temp_w = new Manager(id, name, deptid);
                    break;
                
                case 3:
                    temp_w = new Boss(id, name, deptid);
                    break;
                
                default:
                    cout << "WorkerType cannot be" << add_worker_type << "!" << endl;
                    break;
            }

            final_array[i + m_WorkerNum] = temp_w;
        }
        if (m_WorkerArray != nullptr)
        {
            delete[] m_WorkerArray;
        }
        m_WorkerArray = final_array;
        m_WorkerNum = final_num;

        cout << "添加成功！" << endl;
        cout << "成功添加" << add_num << "名新职工" << endl;
    }
    else
    {
        cout << "输入有误" << endl;
    }
}

void WorkerManagement::ExitSystem()
{
    cout << "程序已退出，欢迎下次使用" << endl;
    exit(0);
}

WorkerManagement::~WorkerManagement()
{
    if(m_WorkerArray != nullptr)
    {
        delete[] m_WorkerArray;
        m_WorkerArray = nullptr;
    }
}