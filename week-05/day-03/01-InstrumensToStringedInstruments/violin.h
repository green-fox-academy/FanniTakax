#ifndef INC_01_INSTRUMENSTOSTRINGEDINSTRUMENTS_VIOLIN_H
#define INC_01_INSTRUMENSTOSTRINGEDINSTRUMENTS_VIOLIN_H
#include "stringedinstruments.h"


class Violin : public StringedInstruments {
public:
    Violin(int numberOfStrings);
    Violin();

    void sound() override;

};


#endif //INC_01_INSTRUMENSTOSTRINGEDINSTRUMENTS_VIOLIN_H
