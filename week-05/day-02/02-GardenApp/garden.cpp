#include "garden.h"
#include "tree.h"
#include "flower.h"

Garden::Garden(const std::vector<Plants> &myGarden) : _myGarden(myGarden) {}

void Garden::water(int amount)
{
    std::cout << "Watering with " << amount << std::endl;
    std::vector<Plants> plantsThatNeedWater;

    for(int i = 0; i < _myGarden.size(); i++){
        if(_myGarden[i].needWater()){
            plantsThatNeedWater.push_back(_myGarden[i]);
        }
    }

    for (int j = 0; j < plantsThatNeedWater.size(); ++j) {
        plantsThatNeedWater[j].absorbWater(amount/_myGarden.size());
    }
}
