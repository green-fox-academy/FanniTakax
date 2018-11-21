#ifndef INC_02_GARDENAPP_PLANTS_H
#define INC_02_GARDENAPP_PLANTS_H

#include <iostream>

class Plants {
public:
    Plants(const std::string &color, int currentWaterAmount);

    virtual void absorbWater(double amount)=0;
    virtual bool needWater()=0;

protected:
    std::string _name;
    std::string _color;
    int _currentWaterAmount;



};


#endif //INC_02_GARDENAPP_PLANTS_H
