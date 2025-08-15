#include <iostream>
using namespace std;

template<typename T>
void BubbleSort(T *Array1,int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (Array1[j] > Array1[j + 1])
            {
                T temp = Array1[j];
                Array1[j] = Array1[j + 1];
                Array1[j + 1] = temp;
            }
        }
    }
}

template<typename T>
void PrintArray(T *Array1,int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << Array1[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a1[] = {3, 7, 8, 3, 6, 8, 2, 8, 9, 1, 2, 0};
    char a2[] = "GFEDCBA";
    BubbleSort(a1, sizeof(a1) / sizeof(a1[0]));
    BubbleSort(a2, sizeof(a2) / sizeof(a2[0]));
    PrintArray(a1, sizeof(a1) / sizeof(a1[0]));
    PrintArray(a2, sizeof(a2) / sizeof(a2[0]));
    return 0;
}