#include <iostream>
#include "Detail.h"
#include "AutoFab.h"
#include "PlaneFab.h"
#include "ShipFab.h"

using namespace std;

int main()
{

    AutoFab car = AutoFab();
    PlaneFab plane = PlaneFab();
    ShipFab plane = ShipFab();

    vector<Detail> car_det = {
        Detail({"Iron", "Stone"}, 3),
        Detail({"Iron", "Leather", "Rubber"}, 30),
        Detail({"Iron", "Leather", "Rubber"}, 20),
        Detail({"Iron", "Rubber"}, 5),
        Detail({"Turbo", "Graffiti", "NO2"}, 10)};

    vector<Detail> plane_det = {
        Detail({"Fire", "Stone Age", "PalksCopalka"}, 3),
        Detail({"Nitro", "Flash", "Coca-Cola"}, 10),
        Detail({"Iron", "Leather", "Rubber", "Flashback"}, 200),
        Detail({"Wood", "Leather", "Rubber", "Wheel", "Pilot"}, 40),
        Detail({"SnoopDog", "Plane", "Rap"}, 1)};

    vector<Detail> ship_det = {
        Detail({"Veslo", "Phone"}, 30),
        Detail({"Boombox", "Cheese", "Coca-Cola"}, 100),
        Detail({"Friend", "Vodka", "Zakuska", "Udochka"}, 5),
        Detail({"Wood", "Clay", "Engine"}, 10),
        Detail({"Wood", "Web", "Mood"}, 100)};

    cout << "Created Auto Details Analys:" << endl;
    car.makeDetails(car_det);
    cout << endl;

    cout << "Create Plane Details Analys:" << endl;
    plane.makeDetails(plane_det);
    cout << endl;

    cout << "Create Ship Details Analys:" << endl;
    plane.makeDetails(ship_det);
    cout << endl;
}