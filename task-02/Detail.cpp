#include "Detail.h"

void Detail::printResourses()
{
    string res = "Detail Resourse List :";
    for (const string &s : resourses)
        res += "\t" + s;
        
    cout << res << endl;
}

void Detail::printBuildTime()
{
    cout << "Build Time:\t" << buildTime << endl;
}

bool Detail::compareDetails(Detail other)
{
    if (buildTime != other.getBuildTime())
        return false;

    vector<string> v1 = resourses;
    vector<string> v2 = other.getResList();

    if (!equal(v1.begin(), v1.end(), v2.begin()))
        return false;

    return true;
}