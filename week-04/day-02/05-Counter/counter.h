//
// Created by malajabi on 11/13/2018.
//

#ifndef INC_05_COUNTER_COUNTER_H
#define INC_05_COUNTER_COUNTER_H

#include <iostream>

class Counter {
public:
    Counter();
    Counter(int x);

    int get();
    void add(int i);
    void add();
    void reset();

private:
    int _value;
    int _initialValue;

};


#endif //INC_05_COUNTER_COUNTER_H
