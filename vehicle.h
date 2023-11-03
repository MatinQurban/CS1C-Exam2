#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

using namespace std;

class Vehicle
{
public:
    Vehicle();
    Vehicle(string vin, string type, string color, string manufacturer, int year);
    virtual ~Vehicle();

    string getVIN() const;
    string getType() const;
    string getColor() const;
    string getManufacturer() const;
    int getYear() const;

    void start();
    void stop();
    void moveForward();
    virtual void specialMove() const =0;

    void setColor(string color);
    void setType(string type);
    void setYear(int year);
    void setVIN(string vin);
    void setManufacturer(string manufacturer);

    virtual void print() const;

    friend ostream& operator<<(ostream& os, const Vehicle& vehicle);
    friend bool operator==(const Vehicle& lhs, const Vehicle& rhs);
    friend bool operator!=(const Vehicle& lhs, const Vehicle& rhs);

protected:
    string vin;
    string type;
    string color;
    string manufacturer;
    int year;
};


#endif // VEHICLE_H