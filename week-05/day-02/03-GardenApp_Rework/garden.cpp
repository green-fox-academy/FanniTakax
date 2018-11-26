#include "garden.h"
#include <vector>

Garden::Garden(const std::vector<Plant*> &myGarden) : _myGarden(myGarden) {}

void Garden::waterPlants(double water, std::vector<Plant*> garden) {
    std::cout << "Watering with " << water << std::endl;

    for (int i = 0; i < garden.size(); ++i) {
        if(garden[i]->needWater()){
            garden[i]->absorbWater(water/garden.size());
        }
    }


}



