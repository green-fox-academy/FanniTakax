//
// Created by malajabi on 11/13/2018.
//

#ifndef INC_03_ANIMALS_ANIMAL_H
#define INC_03_ANIMALS_ANIMAL_H

#include <iostream>

class Animal {
public:
    Animal();

    void eat();
    void drink();
    void play();
    std::string hungerThirst();

private:
    int _hunger;
    int _thirst;

};


#endif //INC_03_ANIMALS_ANIMAL_H
