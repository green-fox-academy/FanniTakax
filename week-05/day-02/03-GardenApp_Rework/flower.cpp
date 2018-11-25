#include "flower.h"
#include "plant.h"


Flower::Flower(int currentWaterAmount, const std::string &color) : Plant(currentWaterAmount, color) {
    _name = "Flower";
}

void Flower::absorbWater(double getWaterAmount){
    _currentWaterAmount += getWaterAmount*0.75;

}
