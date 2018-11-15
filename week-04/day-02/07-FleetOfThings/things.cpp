//
// Created by malajabi on 11/14/2018.
//
#include "things.h"
#include <iostream>

Thing::Thing(const std::string& name)
{
    _name = name;
    _completed = false;
}

void Thing::complete()
{
    _completed = true;
}

std::string Thing::toString()
{
    return (_completed ? "[x] " : "[ ] ") + _name;
}