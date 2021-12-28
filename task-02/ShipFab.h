#pragma once
#include "Detail.h"
#include <algorithm>

class ShipFab
{

private:
    vector<Detail> shipDet;

public:
    ShipFab()
    {
        shipDet = {
            Detail({"Friend", "Vodka", "Zakuska", "Udochka"}, 5),
            Detail({"Wood", "Clay", "Engine"}, 10),
            Detail({"Wood", "Web", "Mood"}, 100)
        };
    }

    ~ShipFab()
    {
    }

    void makeDetails(vector<Detail> det_box);
};