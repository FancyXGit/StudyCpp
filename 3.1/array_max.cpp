#include <iostream>
using namespace std;
int main()
{
    int weight_of_pigs[5] = {300,350,200,400,250};
    int max_of_weight = weight_of_pigs[0];
    for (int i = 0; i < 5; i ++)
    {
        if (max_of_weight < weight_of_pigs[i])
        {
            max_of_weight = weight_of_pigs[i];
        }
    }
    cout << max_of_weight;
    return 0;
}