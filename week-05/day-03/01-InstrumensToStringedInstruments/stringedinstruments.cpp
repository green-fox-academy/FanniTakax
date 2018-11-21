#include "stringedinstruments.h"

void StringedInstruments::play(){
    std::cout << _name << ", a " << _numberOfStrings << "-stringed instrument that goes ";
    sound();
}
