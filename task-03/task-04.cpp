#include "task-04.h"

void Task0304::calc(vector<string> v, string target)
{
    for (int i = 0; i < v.size(); ++i)
        for (int j = 0; j < v.size(); ++j)
            if (i != j && v[j] + v[i] == target)
                cout << "-(" << i << "," << j << ") \"" << v[i] << "\" + \"" << v[j] << "\"" << endl;
}