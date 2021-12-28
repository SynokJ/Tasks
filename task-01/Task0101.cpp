#include "Task0101.h"
#include <iostream>

using namespace std;

void Task0101::initVector(vector<int> &v, const int &start_range, const int &end_range)
{
    for (int i = 0; i < v.size(); ++i)
        v[i] = rand() % end_range + start_range;
}

void Task0101::printVector(const vector<int> &v)
{
    for (const int &num : v)
        cout << " " << num;
    cout << endl;
}

// «value: $value, indexes: [${first_array_index} | ${second_array_index}]»
void Task0101::sumSimsNoDuplicates(vector<int> v1, vector<int> v2)
{
    vector<int> res;

    for (int i = 0; i < v1.size(); ++i)
        for (int j = 0; j < v2.size(); ++j)
            if (v1[i] == v2[j] && find(res.begin(), res.end(), v1[i]) == res.end())
            {
                res.emplace_back(v1[i]);
                cout << "value: " << v1[i] << ", indexes: " << i << " | " << j << endl;
            }

    cout << res.size() << endl;
}

void Task0101::sumSims(vector<int> v1, vector<int> v2)
{

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    vector<int> res;
    int sum = 0;

    for (int i = 0; i < v1.size(); ++i)
        for (int j = 0; j < v2.size(); ++j)
            if (v1[i] == v2[j])
            {
                cout << "value: " << v2[j] << ", indexes: " << i + sum << " | " << j + sum << endl;

                if (i == v1.size() - 1)
                    break;

                v1.erase(v1.begin() + i);
                v2.erase(v2.begin() + j);

                j--;

                sum++;
            }
    cout << sum << endl;
}
