#ifndef INC_03_GARDENAPP_REWORK_TREE_H
#define INC_03_GARDENAPP_REWORK_TREE_H

#include "plant.h"

class Tree : public Plant {
public:
    Tree(int currentWaterAmount, const std::string &color);
    void absorbWater(double getWaterAmount) override;
    bool needWater() override;

protected:


};


#endif //INC_03_GARDENAPP_REWORK_TREE_H
