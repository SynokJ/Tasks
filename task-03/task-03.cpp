#include "task-03.h"

void Task0303::calc(vector<char> v)
{
    cout << "Before:\t";
    for (int i = 0; i < v.size(); ++i)
        cout << " " << v[i];
    cout << endl;

    for (int i = 0, j = v.size() - 1; i <= j; ++i, j--)
    {
        char temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }

    cout << "After:\t";
    for (int i = 0; i < v.size(); ++i)
        cout << " " << v[i];
    cout << endl;
}