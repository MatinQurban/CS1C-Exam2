#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

#include "vehicle.h"


class AirVehicle : public Vehicle
{
    public:
        AirVehicle();
        AirVehicle(string vin, string type, string color, string manufacturer, int year);
        virtual ~AirVehicle();

        void specialMove() const override;

};

#endif // AIRVEHICLE_H