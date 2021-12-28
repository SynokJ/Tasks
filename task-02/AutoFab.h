#pragma once
#include "Detail.h"
#include <algorithm>

class AutoFab 
{

private:
    vector<Detail> autoDet;

public:
    AutoFab()
    {
        autoDet = {
            Detail({"Iron", "Leather", "Rubber"}, 30),
            Detail({"Iron", "Leather"}, 15),
            Detail({"Iron", "Rubber"}, 5),
            Detail({"Iron", "Leather", "Rubber", "Wheel"}, 45),
            Detail({"Turbo", "Graffiti", "NO2"}, 10)
        };
    }

    ~AutoFab()
    {
    }

    void makeDetails(vector<Detail> det_box);
};