//
// Created by malajabi on 11/14/2018.
//

#ifndef INC_11_SHARPIESET_SHARPIE_SET_H
#define INC_11_SHARPIESET_SHARPIE_SET_H
#include "sharpie.h"
#include <vector>

class SharpieSet {
public:
    SharpieSet(const std::vector<Sharpie> &mySharpieSet);

    void fillMySet(Sharpie& sharpie);

    void countUsable();

private:
    std::vector<Sharpie> _mySharpieSet;

};


#endif //INC_11_SHARPIESET_SHARPIE_SET_H
