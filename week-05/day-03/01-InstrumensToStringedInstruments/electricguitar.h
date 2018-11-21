#ifndef INC_01_INSTRUMENSTOSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H
#define INC_01_INSTRUMENSTOSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H
#include "stringedinstruments.h"
#include <iostream>


class ElectricGuitar : public StringedInstruments {
public:
    ElectricGuitar(int numberOfStrings);
    ElectricGuitar();

    void sound() override;

public:


};


#endif //INC_01_INSTRUMENSTOSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H
