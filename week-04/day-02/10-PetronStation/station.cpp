//
// Created by malajabi on 11/14/2018.
//
#include <iostream>
#include "station.h"

Station::Station(int gasAmount) : _gasAmount(gasAmount) {}

void Station::fill(Car &car){
    //fills 1 unit of gas until the car is on full.
    // Every time it transfers 1 unit it should print
    // "Filling car!" on the console. When the car is full
    // it should print the remaining gas amount of the station
    while(!car.isFull()){
        car.fill();
        _gasAmount--;
        std::cout << "Filling car!" << std::endl;
    }
    if(car.isFull()){
        std::cout << "car is full" << std::endl;

    std::cout << "There is " << getGasAmount() << " gas left in the station." << std::endl;
    }
}


int Station::getGasAmount() const {
    return _gasAmount;
}


