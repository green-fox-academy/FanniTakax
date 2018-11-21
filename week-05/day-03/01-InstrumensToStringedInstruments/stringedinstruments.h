#ifndef INC_01_INSTRUMENSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENTS_H
#define INC_01_INSTRUMENSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENTS_H

#include "instrument.h"
#include <iostream>

class StringedInstruments : Instrument{
public:
    StringedInstruments(const std::string &name, int numberOfStrings) : Instrument(name),
                                                                        _numberOfStrings(numberOfStrings) {}
    virtual void sound() = 0;
    void play() override;
protected:

    int _numberOfStrings;

};


#endif //INC_01_INSTRUMENSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENTS_H
