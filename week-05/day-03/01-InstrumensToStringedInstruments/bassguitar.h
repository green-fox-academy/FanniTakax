#ifndef INC_01_INSTRUMENSTOSTRINGEDINSTRUMENTS_BASSGUITAR_H
#define INC_01_INSTRUMENSTOSTRINGEDINSTRUMENTS_BASSGUITAR_H
#include "stringedinstruments.h"


class BassGuitar : public StringedInstruments {
public:
    BassGuitar(int numberOfStrings);
    BassGuitar();

    void sound() override;

};


#endif //INC_01_INSTRUMENSTOSTRINGEDINSTRUMENTS_BASSGUITAR_H
