#include "airVehicle.h"

AirVehicle::AirVehicle()
{
    vin = "-1";
    type = "-1";
    color = "-1";
    manufacturer = "-1";
    year = -1;

}

AirVehicle::AirVehicle(string vin, string type, string color, string manufacturer, int year) : Vehicle(vin, type, color, manufacturer, year)
{
    this->vin = vin;
    this->type = type;
    this->color = color;
    this->manufacturer = manufacturer;
    this->year = year;
}

AirVehicle::~AirVehicle()
{
    //dtor
}

void AirVehicle::specialMove() const
{
    cout << "Taking Flight..." << endl;
}
