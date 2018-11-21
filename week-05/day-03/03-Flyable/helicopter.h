#ifndef INC_03_FLYABLE_HELICOPTER_H
#define INC_03_FLYABLE_HELICOPTER_H

#include "vehicle.h"
#include "flyable.h"


class Helicopter : public Flyable, public Vehicle{
public:
    Helicopter(int wheels, int numberOfPeople, Fuel fuel, const std::string &type);

    void land() override;
    void fly() override;
    void takeOff() override;

protected:
    std::string _name;
    std::string _type;
public:
    const std::string &getName() const;

    const std::string &getType() const;

};


#endif //INC_03_FLYABLE_HELICOPTER_H
