#include "bird.h"

Bird::Bird(const std::string &name) : Animals(name) {}

std::string Bird::getName(){
    return _name;
}

std::string Bird::breed() {
    return "laying eggs.";
}