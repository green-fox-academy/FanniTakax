#ifndef INC_03_GARDENAPP_REWORK_TREE_H
#define INC_03_GARDENAPP_REWORK_TREE_H

#include "plant.h"

class Tree : public Plant {
public:
    Tree(double currentWaterAmount, const std::string &color);
    void absorbWater(double getWaterAmount) override;
    bool needWater() override;
};


#endif //INC_03_GARDENAPP_REWORK_TREE_H
