//
// Created by malajabi on 11/14/2018.
//

#include "sharpie_set.h"


SharpieSet::SharpieSet(const std::vector<Sharpie> &mySharpieSet) : _mySharpieSet(mySharpieSet)
{

}

void SharpieSet::fillMySet(Sharpie& sharpie)
{
    _mySharpieSet.push_back(sharpie);
}

//countUsable() -> sharpie is usable if it has ink in it
//removeTrash() -> removes all unusable sharpies

void SharpieSet::countUsable()
{
    for(int i = 0; i < _mySharpieSet.size(); i++){
        if(_mySharpieSet[i].usable()){
            std::cout << i << "it's usable";
        }else{
            std::cout << i << "it's not usable";
        }
    }
}
