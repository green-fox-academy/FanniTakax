#ifndef INC_02_ANIMALSINTHEZOO_BIRD_H
#define INC_02_ANIMALSINTHEZOO_BIRD_H

#include "animals.h"

class Bird : public Animals{
public:
    Bird(const std::string &name);

    std::string getName() override;
    std::string breed() override;

};


#endif //INC_02_ANIMALSINTHEZOO_BIRD_H
