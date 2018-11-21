#include "violin.h"

Violin::Violin(int numberOfStrings) : StringedInstruments("Violin", numberOfStrings) {}

Violin::Violin() : StringedInstruments("Violin", 4) {}

void Violin::sound(){
    std::cout << "Screech" << std::endl;
}


