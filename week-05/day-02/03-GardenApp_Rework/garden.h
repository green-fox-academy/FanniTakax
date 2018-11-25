#ifndef INC_03_GARDENAPP_REWORK_GARDEN_H
#define INC_03_GARDENAPP_REWORK_GARDEN_H

#include <vector>
#include "plant.h"


class Garden {
public:
    Garden(const std::vector<Plant> &myGarden);

    //void waterPlants(double water);

protected:
    std::vector<Plant> _myGarden;
};


#endif //INC_03_GARDENAPP_REWORK_GARDEN_H
