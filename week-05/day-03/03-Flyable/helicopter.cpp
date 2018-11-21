#include "helicopter.h"

Helicopter::Helicopter(int wheels, int numberOfPeople, Fuel fuel, const std::string &type)
        : Vehicle(wheels, numberOfPeople, fuel), _name("Helicopter"), _type(type) {}

void Helicopter::land(){
    std::cout << "We have started landing. Please, fasten your seatbelts." << std::endl;
}

void Helicopter::fly(){
    std::cout << "Dear passangers. Please, enjoy the view and don't freak out from the height." << std::endl;
};

void Helicopter::takeOff(){
    std::cout << "Welcome on board, Ladies and Gentleman, Please, take your seat, fasten your seatbelts, "
                 "and get ready for an unforgettable journey." << std::endl;
}

const std::string &Helicopter::getName() const {
    return _name;
}

const std::string &Helicopter::getType() const {
    return _type;
}
