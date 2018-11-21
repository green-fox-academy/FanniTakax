#include "electricguitar.h"

ElectricGuitar::ElectricGuitar(int numberOfStrings) : StringedInstruments("Electric Guitar", numberOfStrings) {}

ElectricGuitar::ElectricGuitar() : StringedInstruments("Electric Guitar", 6) {}

void ElectricGuitar::sound() {
    std::cout << "Twang" << std::endl;
}


