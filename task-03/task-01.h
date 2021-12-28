#pragma once
#include <string>
#include <iostream>

using namespace std;

class Time
{
private:
    int hours;
    int minutes;

public:
    Time(string time)
    {
        hours = stoi(time.substr(0, time.find(":")));
        minutes = stoi(time.substr(time.find(":") + 1, time.length()));
    }

    void addTime(Time time);
    void printTime();

    int getH()
    {
        return hours;
    }

    int getM()
    {
        return minutes;
    }
};