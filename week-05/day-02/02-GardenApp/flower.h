#ifndef INC_02_GARDENAPP_FLOWER_H
#define INC_02_GARDENAPP_FLOWER_H

#include "plants.h"

class Flower : public Plants {
public:
    Flower(const std::string &color, int currentWaterAmount);

    void absorbWater(double amount) override;
    bool needWater() override;


};


#endif //INC_02_GARDENAPP_FLOWER_H
