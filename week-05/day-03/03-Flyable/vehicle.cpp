#include "vehicle.h"

Vehicle::Vehicle(int wheels, int numberOfPeople, Fuel fuel) : _wheels(wheels), _numberOfPeople(numberOfPeople),
                                                              _fuel(fuel) {}

Vehicle::Vehicle() {
    _wheels = 4;
    _numberOfPeople = 5;
    _fuel = Fuel::PETROL;
}

int Vehicle::getWheels() const {
    return _wheels;
}

int Vehicle::getNumberOfPeople() const {
    return _numberOfPeople;
}

Fuel Vehicle::getFuel() const {

    return _fuel;
}
