#include "task-02.h"

void Task0302::calc(vector<int> v1, vector<int> v2)
{
    //     vector<int> v1 = {1, 2}; //{1, 3};
    //     vector<int> v2 = {3, 4}; //{2};

    vector<int> res = v1;
    res.insert(res.end(), v2.begin(), v2.end());

    float med = 0;
    for (const int &v : res)
        med += v;

    cout << fixed << setprecision(5) << med / res.size() << endl;
}