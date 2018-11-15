#include <iostream>

#include "animal.h"


int main() {

    Animal dog;
    dog.hungerThirst();
    dog.eat();
    dog.drink();
    dog.hungerThirst();
    dog.play();
    dog.hungerThirst();
    return 0;
}