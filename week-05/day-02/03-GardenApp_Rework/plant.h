#ifndef INC_03_GARDENAPP_REWORK_PLANT_H
#define INC_03_GARDENAPP_REWORK_PLANT_H

#include <iostream>

class Plant {
public:
    Plant(int currentWaterAmount, const std::string &color);

    virtual void absorbWater(double getWaterAmount) = 0;
    virtual bool needWater() = 0;

protected:
    double _currentWaterAmount;
    std::string _color;
    std::string _name;
public:
    const std::string &getName() const;

public:
    const std::string &getColor() const;

};


#endif //INC_03_GARDENAPP_REWORK_PLANT_H
