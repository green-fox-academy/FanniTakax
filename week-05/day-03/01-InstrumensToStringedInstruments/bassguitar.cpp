#include "bassguitar.h"

BassGuitar::BassGuitar(int numberOfStrings) : StringedInstruments("Bass Guitar", numberOfStrings) {}

BassGuitar::BassGuitar() : StringedInstruments("Bass Guitar", 4) {}

void BassGuitar::sound(){
    std::cout << "Duum-duum-duum" << std::endl;
}


