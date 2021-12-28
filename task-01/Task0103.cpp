#include "Task0103.h"

void Task0103::formatLineVer01()
{
    istringstream inp(line);
    string temp;
    string res = "";

    while (inp >> temp)
        if (find(box.begin(), box.end(), temp) == box.end())
            res += temp + " ";

    cout << line << endl;
    cout << res << endl;
}

void Task0103::formatLineVer02()
{
    for (int i = 0; i < box.size(); ++i)
        for (int pos = line.find(box[i]); pos != string::npos; pos = line.find(box[i]))
            line.erase(pos, pos + box[i].length());

    cout << cp << endl;
    cout << line << endl;
}