#include "tree.h"

Tree::Tree(const std::string &color, int currentWaterAmount) : Plants(color, currentWaterAmount) {
    _name = "Tree";
}

bool Tree::needWater() {
    if(_currentWaterAmount < 10){
        return true;
    }else{
        return false;
    }
}

void Tree::absorbWater(double amount) {
    _currentWaterAmount += amount*0.4;
}
