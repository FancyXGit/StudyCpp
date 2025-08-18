#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }

    cout << v1[7] << endl;
    cout << v1.at(7) << endl;
    return 0;
}