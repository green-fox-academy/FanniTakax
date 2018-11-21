#ifndef INC_02_ANIMALSINTHEZOO_RAPTILE_H
#define INC_02_ANIMALSINTHEZOO_RAPTILE_H
#include "animals.h"


class Raptile : public Animals{
public:
    Raptile(const std::string &name);

    std::string getName() override;
    std::string breed() override;


protected:

};


#endif //INC_02_ANIMALSINTHEZOO_RAPTILE_H
