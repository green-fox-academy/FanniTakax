//
// Created by malajabi on 11/13/2018.
//

#ifndef INC_04_SHARPIE_SHARPIE_H
#define INC_04_SHARPIE_SHARPIE_H

#include <iostream>

class Sharpie {
public:
    Sharpie(std::string color, float width);
    void use();

private:
    std::string _color;
    float _width;
    float _inkAmount;

};


#endif //INC_04_SHARPIE_SHARPIE_H
