#include "landVehicle.h"


LandVehicle::LandVehicle()
{
    vin = "-1";
    type = "-1";
    color = "-1";
    manufacturer = "-1";
    year = -1;
}

LandVehicle::LandVehicle(string vin, string type, string color, string manufacturer, int year) : Vehicle(vin, type, color, manufacturer, year)
{
    this->vin = vin;
    this ->type = type;
    this->color = color;
    this->manufacturer = manufacturer;
    this->year = year;
}

LandVehicle::~LandVehicle()
{
    //dtor
}

void LandVehicle::specialMove() const
{
    cout << "Moving backwards.." << endl;
}

