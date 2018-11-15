//
// Created by malajabi on 11/13/2018.
//

#include "sharpie.h"

Sharpie::Sharpie(std::string color, float width)
{
    _color = color;
    _width = width;
    _inkAmount = 100;
}

void Sharpie::use()
{
    _inkAmount -= 2;
    std::cout << _inkAmount << "ink is left from the 100." << std::endl;
}
