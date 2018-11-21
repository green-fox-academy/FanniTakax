#ifndef INC_02_GARDENAPP_GARDEN_H
#define INC_02_GARDENAPP_GARDEN_H

#include <vector>
#include "plants.h"


class Garden {
public:
    Garden(const std::vector<Plants> &myGarden);

    void water(int amount);

protected:
    std::vector<Plants> _myGarden;


};


#endif //INC_02_GARDENAPP_GARDEN_H
