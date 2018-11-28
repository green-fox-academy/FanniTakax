#include "tree.h"

Tree::Tree(double currentWaterAmount, const std::string &color) : Plant(currentWaterAmount, color) {
    _name = "Tree";
}

void Tree::absorbWater(double getWaterAmount){
    _currentWaterAmount += getWaterAmount*0.40;
}

bool Tree::needWater() {
    return _currentWaterAmount < 10;
}