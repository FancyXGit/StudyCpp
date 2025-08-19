#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

void NotGood()
{
    srand(time(nullptr));
    vector<deque<int>> coms;
    coms.resize(5);
    for (vector<deque<int>>::iterator it = coms.begin(); it != coms.end(); it++)
    {
        it->resize(10);
        for (deque<int>::iterator it1 = it->begin(); it1 != it->end(); it1++)
        {
            *it1 = rand() % 100 + 1;
        }
    }
    
    // for (vector<deque<int>>::iterator it = coms.begin(); it != coms.end(); it++)
    // {
    //     for (deque<int>::iterator it1 = it->begin(); it1 != it->end(); it1++)
    //     {
    //         cout << *it1 << " ";
    //     }
    //     cout << endl;
    // }

    for (vector<deque<int>>::iterator it = coms.begin(); it != coms.end(); it++)
    {
        sort(it->begin(), it->end());
    }

    for (vector<deque<int>>::iterator it = coms.begin(); it != coms.end(); it++)
    {
        it->pop_front();
        it->pop_back();
    }

    vector<double> score;
    for (vector<deque<int>>::iterator it = coms.begin(); it != coms.end(); it++)
    {
        int score_sum = 0;
        double aver = 0;
        for (deque<int>::iterator it1 = it->begin(); it1 != it->end(); it1++)
        {
            score_sum += *it1;
        }
        aver = (double)score_sum / it->size();
        score.push_back(aver);
    }

    for (vector<double>::iterator it = score.begin(); it != score.end(); it++)
    {
        cout << *it << " ";
    }
}

void Good()
{
    srand(time(nullptr));
    vector<deque<int>> coms(5, deque<int>(10));
    vector<double> score_final;
    for (auto it1 = coms.begin(); it1 != coms.end(); it1++)
    {
        for (auto it2 = it1->begin(); it2 != it1->end(); it2++)
        {
            *it2 = rand() % 100 + 1;
        }
        sort(it1->begin(), it1->end());
        it1->pop_back();
        it1->pop_front();
        int score_sum = 0;
        double aver = 0;
        for (auto it2 = it1->begin(); it2 != it1->end(); it2++)
        {
            score_sum += *it2;
        }
        aver = (double)score_sum / it1->size();
        score_final.push_back(aver);
    }
    for (auto it = score_final.begin(); it != score_final.end(); it++)
    {
        cout << *it << " ";
    }
}

int main()
{
    //NotGood();
    Good();
    return 0;
}