#include <iostream>
#include <vector>
using namespace std;

void test1()
{
    vector<int> v;
    //v.reserve(1e6);
    int num = 0;
    int *p = nullptr;
    for (int i = 0; i < 1e6; i++)
    {
        v.push_back(i);
        if (p != &v[0])
        {
            p = &v[0];
            num++;
        }
    }
    cout << num << endl;
}

int main()
{
    test1();
    return 0;
}