#ifndef INC_01_INSTRUMENSTOSTRINGEDINSTRUMENTS_INSTRUMENT_H
#define INC_01_INSTRUMENSTOSTRINGEDINSTRUMENTS_INSTRUMENT_H

#include <iostream>

class Instrument {
public:
    Instrument(const std::string &name);
    virtual void play() = 0;

protected:

    std::string _name;

};


#endif //INC_01_INSTRUMENSTOSTRINGEDINSTRUMENTS_INSTRUMENT_H
