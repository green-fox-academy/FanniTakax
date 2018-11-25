#include "garden.h"
#include <vector>

Garden::Garden(const std::vector<Plant> &myGarden) : _myGarden(myGarden) {}

/*void Garden::waterPlants(double water) {
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
}*/