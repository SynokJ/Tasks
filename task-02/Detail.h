#pragma once
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Detail
{
private:
    vector<string> resourses;
    float buildTime;

public:
    Detail()
    {
        buildTime = 5.0f;
    }

    Detail(vector<string> box, const float &other_time) : resourses(box), buildTime(other_time)
    {
    }

    ~Detail()
    {
    }

    void printResourses();
    void printBuildTime();
    bool compareDetails(Detail other);

    vector<string> getResList()
    {
        return resourses;
    }

    float getBuildTime()
    {
        return buildTime;
    }


};