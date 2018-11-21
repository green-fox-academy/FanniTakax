#include "mammal.h"

Mammal::Mammal(const std::string &name) : Animals(name) {}

std::string Mammal::getName(){
    return _name;
}

std::string Mammal::breed() {
    return "pushing miniature versions out.";
}