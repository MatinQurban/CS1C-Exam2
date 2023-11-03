#ifndef WATERVEHICLE_H
#define WATERVEHICLE_H

#include "vehicle.h"


class WaterVehicle : public Vehicle
{
    public:
        WaterVehicle();
        WaterVehicle(string vin, string type, string color, string manufacturer, int year);
        virtual ~WaterVehicle();

        void specialMove() const override;

};


#endif // WATERVEHICLE_H