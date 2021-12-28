#pragma once

#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

class Task0101
{

private:
    vector<int> v1;
    vector<int> v2;

public:
    Task0101()
    {
    }

    void printVector(const vector<int> &v);
    void initVector(vector<int> &v, const int &start_range, const int &end_range);

    // «value: $value, indexes: [${first_array_index} | ${second_array_index}]»
    void sumSimsNoDuplicates(vector<int> v1, vector<int> v2);
    void sumSims(vector<int> v1, vector<int> v2);
};
