#ifndef INC_03_GARDENAPP_REWORK_FLOWER_H
#define INC_03_GARDENAPP_REWORK_FLOWER_H

#include "plant.h"

class Flower : public Plant {
public:
    Flower(int currentWaterAmount, const std::string &color);
    void absorbWater(double getWaterAmount) override;
    bool needWater() override;

protected:

};


#endif //INC_03_GARDENAPP_REWORK_FLOWER_H
