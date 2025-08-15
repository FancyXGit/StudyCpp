#include <iostream>
using namespace std;
int main()
{
    int arr1[5] = {1,3,2,5,4};
    int arr2[5] = {0};
    for (int i = 0; i < 5; i ++)
    {
        arr2[i] = arr1[4 - i];
        cout << arr2[i];
    }
    return 0;
}