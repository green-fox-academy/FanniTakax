#include "plant.h"

Plant::Plant(double currentWaterAmount, const std::string &color) : _currentWaterAmount(currentWaterAmount),
                                                                 _color(color) {}

const std::string &Plant::getColor() const {
    return _color;
}

const std::string &Plant::getName() const {
    return _name;
}

double Plant::getCurrentWaterAmount() const {
    return _currentWaterAmount;
}

