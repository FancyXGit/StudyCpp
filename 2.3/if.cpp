#include <iostream>
using namespace std;
int main()
{
    int score = 0;
    cin >> score;
    if (score >= 600)
    {
        cout << "Congratulations!";
    }
    else if (score >= 500)
    {
        cout << "good";
    }
    else
    {
        cout << "Don't worry!";
    }
    return 0;
}