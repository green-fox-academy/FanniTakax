//
// Created by malajabi on 11/13/2018.
//

#include "animal.h"

Animal::Animal()
{
    _hunger = 50;
    _thirst = 50;
}

void Animal::eat()
{
    _hunger--;
}

void Animal::drink()
{
    _thirst--;
}

void Animal::play()
{
    _hunger++;
    _thirst++;
}

std::string Animal::hungerThirst()
{
    std::cout << "This animal's hunger is: " << _hunger << "\n" << "This animal's thirst is: " << _thirst << std::endl;
}