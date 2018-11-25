#include "flower.h"

Flower::Flower(int currentWaterAmount, const std::string &color) : Plant(currentWaterAmount, color) {
    _name = "Flower";
}

void Flower::absorbWater(double getWaterAmount){
    _currentWaterAmount += getWaterAmount*0.75;

}

bool Flower::needWater() {
    if(_currentWaterAmount < 5){
        //std::cout << "The " << _color << " Flower needs water." << std::endl;
        return true;
    }else{
        //std::cout << "The " << _color << " Flower doesn't need water." << std::endl;
        return false;
    }
}