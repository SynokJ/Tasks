#include "task-01.h"

void Time::addTime(Time time)
{
    if (time.getM() + minutes < 60)
    {
        hours += time.getH();
        minutes += time.getM();
    }
    else if (time.getM() + minutes >= 60)
    {
        hours += time.getH() + 1;
        minutes = (time.getM() + minutes) - 60;
    }
}

void Time::printTime()
    {
        if (minutes / 10 != 0)
            cout << hours << ":" << minutes << endl;
        else
            cout << hours << ":0" << minutes << endl;
    }
