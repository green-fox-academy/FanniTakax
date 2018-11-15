//
// Created by malajabi on 11/14/2018.
//
#ifndef FLEET_OF_THINGS_THING_H
#define FLEET_OF_THINGS_THING_H

#include <string>
#include <iostream>

class Thing
{
public:
    Thing(const std::string& name);

    void complete();
    std::string toString();

private:
    std::string _name;
    bool _completed;
};


#endif //FLEET_OF_THINGS_THING_H