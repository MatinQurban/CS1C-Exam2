#ifndef LANDVEHICLE_H
#define LANDVEHICLE_H

#include "vehicle.h"


class LandVehicle : public Vehicle
{
public:
    LandVehicle();
    LandVehicle(string vin, string type, string color, string manufacturer, int year);
    virtual ~LandVehicle();

    void specialMove() const override;

    friend ostream& operator<<(ostream& os, const LandVehicle& vehicle);
    friend bool operator==(const LandVehicle& lhs, const LandVehicle& rhs);
    friend bool operator!=(const LandVehicle& lhs, const LandVehicle& rhs);

};


#endif // LANDVEHICLE_H