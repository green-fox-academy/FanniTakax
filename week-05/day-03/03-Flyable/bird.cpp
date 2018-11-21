#include "bird.h"

Bird::Bird(const std::string &name) : Animals(name) {}

void Bird::land(){
    std::cout << "Bird is landing." << std::endl;
}

void Bird::fly(){
    std::cout << "Bird is flying." << std::endl;
};

void Bird::takeOff(){
    std::cout << "Bird is taking off." << std::endl;
}

std::string Bird::getName() {
    return _name;
}
