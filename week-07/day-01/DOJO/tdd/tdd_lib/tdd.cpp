#include "tdd.h"

tdd::tdd(value value, color color) : _value(value), _color(color) {}

value tdd::getValue() const {
    return _value;
}

bool isWinnerPlayer1(std::vector<tdd> player1, std::vector<tdd> player2)
{
    value maxCardPlayer1 = value::val_2;
    value maxCardPlayer2 = value::val_2;

    for (int i = 0; i < player1.size(); ++i) {
       if(player1[i].getValue() > maxCardPlayer1){
           maxCardPlayer1 = player1[i].getValue();
       }
    }

    for (int j = 0; j < player2.size(); ++j) {
        if (player2[j].getValue() > maxCardPlayer2) {
            maxCardPlayer2 = player2[j].getValue();
        }
    }

    if(maxCardPlayer1 > maxCardPlayer2){
        return true;
    }else{
        return false;
    }
}
