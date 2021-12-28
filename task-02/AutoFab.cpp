#include "AutoFab.h"

void AutoFab::makeDetails(vector<Detail> det_box)
{
    for (Detail d : det_box)
    {

        bool stat = true;

        for (Detail md : autoDet)
        {

            if (!md.compareDetails(d))
                stat = false;
            else
            {
                stat = true;
                break;
            }
        }

        if (!stat)
        {
            cout << "===================================" << endl;
            cout << "=  Sorry You Are Not That Guy     =" << endl;
            cout << "===================================\n"
                 << endl;
        }
        else
        {
            cout << "===================================" << endl;
            cout << "=     Detail Build Success!!!     =" << endl;
            cout << "===================================\n"
                 << endl;
        }

        d.printResourses();
        d.printBuildTime();
        cout << endl;
    }
}