// Main File to test vehicle classes

#include "airVehicle.h"
#include "landVehicle.h"
#include "waterVehicle.h"
#include <vector>

int main()
{

    AirVehicle airVehicle("123456789", "Plane", "Red", "Boeing", 2015);
    LandVehicle landVehicle("987654321", "Car", "Blue", "Ford", 2010);
    LandVehicle motorcycle("987654321", "Motorcycle", "Blue", "Ford", 2010);
    WaterVehicle waterVehicle("123456789", "Boat", "Green", "Boat", 2015);

    cout << "#### Using print() function ####" << endl;

    cout << "-------Air Vehicle-------" << endl;
    airVehicle.print();
    cout << "-------------------------" << endl;
    cout << "-------Land Vehicle-------" << endl;
    landVehicle.print();
    motorcycle.print();
    cout << "-------------------------" << endl;
    cout << "-------Water Vehicle-------" << endl;
    waterVehicle.print();
    cout << "-------------------------" << endl;
    cout << "\n\n ############################### \n\n" << endl;


    vector<Vehicle*> vehicles;
    vehicles.push_back(&airVehicle);
    vehicles.push_back(&landVehicle);
    vehicles.push_back(&waterVehicle);
    vehicles.push_back(&motorcycle);

    for (int i = 0; i < vehicles.size(); i++)
    {
        cout << "<< operator on " << vehicles[i]->getType() << endl;
        cout << *vehicles[i] << endl;
        cout << "Special Move: " << endl;
        vehicles[i]->specialMove();
        cout << "-------------------------" << endl;
        cout << "== operator on Vehicles[" << i << "] " << vehicles[i]->getType() << " and Vehicles[" << i << "] " << vehicles[i]->getType() << endl;
        cout << (*vehicles[i] == *vehicles[i]) << endl;
        cout << "\n-------------------------" << endl;
        cout << "!= operator on Vehicles[" << i << "] " << vehicles[i]->getType() << " and Vehicles[" << i << "] " << vehicles[i]->getType() << endl;
        cout << (*vehicles[i] != *vehicles[i]) << endl;
        cout << "\n-------------------------" << endl;
    }

    return 0;

}