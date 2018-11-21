#include "raptile.h"

Raptile::Raptile(const std::string &name) : Animals(name) {}

std::string Raptile::getName(){
    return _name;
}

std::string Raptile::breed() {
    return "laying eggs.";
}
