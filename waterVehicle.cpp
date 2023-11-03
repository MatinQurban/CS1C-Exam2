#include "waterVehicle.h"

WaterVehicle::WaterVehicle()
{
    vin = "-1";
    type = "-1";
    color = "-1";
    manufacturer = "-1";
    year = -1;

}

WaterVehicle::WaterVehicle(string vin, string type, string color, string manufacturer, int year) : Vehicle(vin, type, color, manufacturer, year)
{
    this->vin = vin;
    this->type = type;
    this->color = color;
    this->manufacturer = manufacturer;
    this->year = year;
}

WaterVehicle::~WaterVehicle()
{
    //dtor
}

void WaterVehicle::specialMove() const
{
    cout << "Embarking on Journey..." << endl;
}
