#include <iostream>
#include <vector>
using namespace std;

void PrintVector(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test1()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    PrintVector(v1);

    vector<int> v2;
    for (int i = 9; i > 0; i--)
    {
        v2.push_back(i);
    }
    PrintVector(v2);

    v1.swap(v2);
    PrintVector(v1);
    PrintVector(v2);
}

void test2()
{
    vector<int> v;
    for (int i = 0; i < 1e6; i++)
    {
        v.push_back(i);
    }
    cout << "容量" << v.capacity() << endl;
    cout << "大小" << v.size() << endl;

    v.resize(3);
    cout << "容量" << v.capacity() << endl;
    cout << "大小" << v.size() << endl;

    // vector<int>(v).swap(v);
    // cout << "容量" << v.capacity() << endl;
    // cout << "大小" << v.size() << endl;

    v.shrink_to_fit();
    cout << "容量" << v.capacity() << endl;
    cout << "大小" << v.size() << endl;
}

int main()
{
    //test1();
    test2();
    return 0;
}