#ifndef INC_02_GARDENAPP_TREE_H
#define INC_02_GARDENAPP_TREE_H

#include "plants.h"


class Tree : public Plants {
public:
    Tree(const std::string &color, int currentWaterAmount);

    void absorbWater(double amount) override;
    bool needWater() override;

};


#endif //INC_02_GARDENAPP_TREE_H
