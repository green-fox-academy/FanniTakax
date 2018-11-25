#include "tree.h"

Tree::Tree(int currentWaterAmount, const std::string &color) : Plant(currentWaterAmount, color) {
    _name = "Tree";
}

void Tree::absorbWater(double getWaterAmount){
    _currentWaterAmount += getWaterAmount*0.40;

}

bool Tree::needWater() {
    if(_currentWaterAmount < 10){
        //std::cout << "The " << _color << " Tree needs water." << std::endl;
        return true;
    }else{
        //std::cout << "The " << _color << " Tree doesn't need water." << std::endl;
        return false;
    }
}