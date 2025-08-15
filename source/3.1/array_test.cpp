#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    cin >> n;
    int arr[n] = {0};
    cout << sizeof(arr) / sizeof(arr[0]);
    return 0;
}