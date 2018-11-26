#include "flower.h"

Flower::Flower(double currentWaterAmount, const std::string &color) : Plant(currentWaterAmount, color) {
    _name = "Flower";
}

void Flower::absorbWater(double getWaterAmount){
    _currentWaterAmount += getWaterAmount*0.75;

}

bool Flower::needWater() {
    if(_currentWaterAmount < 5) return true;
    else return false;
}