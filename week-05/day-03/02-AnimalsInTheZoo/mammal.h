#ifndef INC_02_ANIMALSINTHEZOO_MAMMAL_H
#define INC_02_ANIMALSINTHEZOO_MAMMAL_H

#include "animals.h"

class Mammal : public Animals {
public:
    Mammal(const std::string &name);

    std::string getName() override;
    std::string breed() override;

};


#endif //INC_02_ANIMALSINTHEZOO_MAMMAL_H
