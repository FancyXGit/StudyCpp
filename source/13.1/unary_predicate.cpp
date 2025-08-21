#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class GreaterThanFive
{
public:
    bool operator()(int val)
    {
        return val > 5;
    }
};

int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    auto pos = find_if(v.begin(), v.end(), GreaterThanFive());
    cout << *pos << endl;
    return 0;
}