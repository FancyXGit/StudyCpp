#include <iostream>
using namespace std;

pair<int,int> compute(int a,int b)
{
    return make_pair(a + b, a - b);
}

int main()
{
    auto p = compute(10, 2);
    cout << p.first << " " << p.second << endl;
    return 0;
}