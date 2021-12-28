#include "Task0102.h"
#include <iostream>

using namespace std;

void Task0102::initVector(vector<int> &v, const int &start_range, const int &end_range)
{
    for (int i = 0; i < v.size(); ++i)
        v[i] = rand() % end_range + start_range;
}

void Task0102::printVector(const vector<int> &v)
{
    for (const int &num : v)
        cout << " " << num;
    cout << endl;
}

vector<int> Task0102::findNegNums(const vector<int> &v)
{
    vector<int> res;

    for(const int &n : v)
        if(n < 0)
            res.emplace_back(n);

    sort(res.begin(), res.end());

    return res;
}