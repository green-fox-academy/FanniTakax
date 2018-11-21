#ifndef INC_03_FLYABLE_ANIMALS_H
#define INC_03_FLYABLE_ANIMALS_H


#include <iostream>

class Animals {
public:
    Animals(const std::string &name);
    virtual std::string getName() = 0;
    virtual std::string breed() = 0;


protected:
    std::string _name;
    int _age;



};


#endif //INC_03_FLYABLE_ANIMALS_H
