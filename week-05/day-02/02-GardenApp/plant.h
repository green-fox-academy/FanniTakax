#ifndef INC_03_GARDENAPP_REWORK_PLANT_H
#define INC_03_GARDENAPP_REWORK_PLANT_H

#include <iostream>

class Plant {
public:
    Plant(double currentWaterAmount, const std::string &color);

    virtual void absorbWater(double getWaterAmount) = 0;
    virtual bool needWater() = 0;
    const std::string &getColor() const;
    const std::string &getName() const;

protected:
    std::string _color;
    std::string _name;
    double _currentWaterAmount;
};


#endif //INC_03_GARDENAPP_REWORK_PLANT_H
