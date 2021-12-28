#pragma once

#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

class Task0102
{

private:
    vector<int> v1;
    vector<int> v2;

public:
    Task0102()
    {
    }

    void printVector(const vector<int> &v);
    void initVector(vector<int> &v, const int &start_range, const int &end_range);

    vector<int> findNegNums(const vector<int> &v);

};
