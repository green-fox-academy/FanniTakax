#include "flower.h"


Flower::Flower(const std::string &color, int currentWaterAmount) : Plants(color, currentWaterAmount) {
    _name = "Flower";
}

bool Flower::needWater() {
    if(_currentWaterAmount < 10){
        return true;
    }else{
        return false;
    }
}

void Flower::absorbWater(double amount) {
    _currentWaterAmount += amount*0.4;
}