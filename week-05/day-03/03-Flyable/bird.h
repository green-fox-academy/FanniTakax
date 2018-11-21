#ifndef INC_03_FLYABLE_BIRD_H
#define INC_03_FLYABLE_BIRD_H
#include "animals.h"
#include "flyable.h"


class Bird : public Animals, public Flyable{
public:
    Bird(const std::string &name);

    void land() override;
    void fly() override;
    void takeOff() override;

    std::string getName() override;

};


#endif //INC_03_FLYABLE_BIRD_H
