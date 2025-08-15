#include <iostream>
using namespace std;

void BubbleSort(int* arr,int len);
void PrintArrInt(int* arr,int len);

int main()
{
    int arr[9] = {9,8,7,6,5,4,3,2,1};
    BubbleSort(arr,9);
    PrintArrInt(arr,9);
    return 0;
}

void BubbleSort(int* arr,int len)
{
    int temp = 0;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void PrintArrInt(int* arr,int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] <<  " ";
    }
}