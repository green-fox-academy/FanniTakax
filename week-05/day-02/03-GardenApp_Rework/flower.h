#ifndef INC_03_GARDENAPP_REWORK_FLOWER_H
#define INC_03_GARDENAPP_REWORK_FLOWER_H

#include "plant.h"
#include <iostream>


class Flower : public Plant {
public:
    Flower(int currentWaterAmount, const std::string &color);
    virtual void absorbWater(double getWaterAmount) override;
public:

private:
    std::string _name;
};


#endif //INC_03_GARDENAPP_REWORK_FLOWER_H
