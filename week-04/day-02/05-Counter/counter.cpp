//
// Created by malajabi on 11/13/2018.
//

#include "counter.h"

Counter::Counter()
{
    _value = 0;
    _initialValue = 0;
}

Counter::Counter(int x)
{
    _value = x;
    _initialValue = x;
}

int Counter::get()
{
    return _value;
}

void Counter::add(int i)
{
    _value += i;
}

void Counter::add()
{
    _value++;
}

void Counter::reset()
{
    _value = _initialValue;
}