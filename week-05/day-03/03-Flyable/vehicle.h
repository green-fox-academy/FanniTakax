#ifndef INC_03_FLYABLE_VEHICLE_H
#define INC_03_FLYABLE_VEHICLE_H

#include <iostream>

enum class Fuel{
    ELECTRICITY,
    PETROL
};

class Vehicle {
public:
    Vehicle(int wheels, int numberOfPeople, Fuel fuel);
    Vehicle();

protected:
    int _wheels;
    int _numberOfPeople;
public:
    int getWheels() const;

    int getNumberOfPeople() const;

    Fuel getFuel() const;

protected:
    Fuel _fuel;
};


#endif //INC_03_FLYABLE_VEHICLE_H
