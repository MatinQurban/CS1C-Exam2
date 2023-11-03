#include "vehicle.h"


Vehicle::Vehicle()
{
    vin = "-1";
    type = "-1";
    color = "-1";
    manufacturer = "-1";
    year = -1;
}

Vehicle::Vehicle(string vin, string type, string color, string manufacturer, int year)
{
    this->vin = vin;
    this->type = type;
    this->color = color;
    this->manufacturer = manufacturer;
    this->year = year;
}

Vehicle::~Vehicle()
{
    //dtor
}

string Vehicle::getVIN() const
{
    return vin;
}

string Vehicle::getType() const
{
    return type;
}

string Vehicle::getColor() const
{
    return color;
}

string Vehicle::getManufacturer() const
{
    return manufacturer;
}

int Vehicle::getYear() const
{
    return year;
}

void Vehicle::setColor(string color)
{
    this->color = color;
}

void Vehicle::setType(string type)
{
    if(this->type == "-1"){
        this->type = type;
    }
}

void Vehicle::setYear(int year)
{
    if(this->year == -1){
        this->year = year;
    }
}

void Vehicle::setVIN(string vin)
{
    if(this->vin == "-1"){
        this->vin = vin;
    }
}

void Vehicle::setManufacturer(string manufacturer)
{
    if(this->manufacturer == "-1"){
        this->manufacturer = manufacturer;
    }
}

void Vehicle::start()
{
    cout << "Starting vehicle..." << endl;
}

void Vehicle::stop()
{
    cout << "Stopping vehicle..." << endl;
}

void Vehicle::moveForward()
{
    cout << "Moving forward..." << endl;
}

void Vehicle::specialMove() const
{
    cout << "Special move..." << endl;
}

void Vehicle::print() const
{
    cout << this << endl;
    cout << "Special Move: " << endl;
    specialMove();
}

ostream& operator<<(ostream& os, const Vehicle& vehicle)
{
    os << "VIN: " << vehicle.getVIN() << endl;
    os << "Color: " << vehicle.getColor() << endl;
    os << "Manufacturer: " << vehicle.getManufacturer() << endl;
    os << "Year: " << vehicle.getYear() << endl;
    os << "Type: " << vehicle.getType() << endl;
    return os;
}

bool operator==(const Vehicle& lhs, const Vehicle& rhs)
{
    if(lhs.vin == rhs.vin || lhs.color == rhs.color || lhs.manufacturer == rhs.manufacturer || lhs.year == rhs.year){
        return true;
    }
    return false;
}

bool operator!=(const Vehicle& lhs, const Vehicle& rhs)
{
    return !(lhs == rhs);
}

