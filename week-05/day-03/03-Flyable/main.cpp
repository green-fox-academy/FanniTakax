#include <iostream>
#include "helicopter.h"
#include "bird.h"

int main() {

    Helicopter helicopter01(3, 8, Fuel::PETROL, "GT-658.C");


    std::cout << "The " << helicopter01.getType() << " type " << helicopter01.getName() << ", which has " <<
                helicopter01.getWheels() << " wheels and " << helicopter01.getNumberOfPeople() << " fit in it." << std::endl;

    helicopter01.takeOff();
    helicopter01.fly();
    helicopter01.land();

    std::cout << "______________________________________________" << std::endl;

    Bird bird01("pigeon");

    std::cout << bird01.breed() << std::endl;
    std::cout << bird01.getName() << std::endl;
    bird01.takeOff();
    bird01.fly();
    bird01.land();

    return 0;
}