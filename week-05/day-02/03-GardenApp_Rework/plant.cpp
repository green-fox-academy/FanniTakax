#include "plant.h"

Plant::Plant(int currentWaterAmount, const std::string &color) : _currentWaterAmount(currentWaterAmount),
                                                                 _color(color) {}

const std::string &Plant::getColor() const {
    return _color;
}

const std::string &Plant::getName() const {
    return _name;
}

void Plant::waterPlants(double water, std::vector<Plant> _myGarden) {
    std::cout << "Watering with " << water << std::endl;

    std::vector<Plant> needWater;

    for (int i = 0; i < _myGarden.size(); ++i) {
        if(_myGarden[i].needWater()){
            needWater.push_back(_myGarden[i]);
        }
    }

    for (int j = 0; j < needWater.size(); ++j) {
        _myGarden[j].absorbWater(water/needWater.size());
    }
}
