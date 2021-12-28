#pragma once
#include "Detail.h"
#include <algorithm>

class PlaneFab
{

private:
    vector<Detail> planeDet;

public:
    PlaneFab()
    {
        planeDet = {
            Detail({"Iron", "Leather", "Rubber"}, 10),
            Detail({"Iron", "Wing"}, 100),
            Detail({"Paper", "Rubber", "Propeller"}, 50),
            Detail({"Wood", "Leather", "Rubber", "Wheel", "Pilot"}, 40),
            Detail({"SnoopDog", "Plane", "Rap"}, 1)
        };
    }

    ~PlaneFab()
    {
    }

    void makeDetails(vector<Detail> det_box);
};