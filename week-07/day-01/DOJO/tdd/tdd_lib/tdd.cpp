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

    return maxCardPlayer1 > maxCardPlayer2;
}

bool isWinnerPlayer1_PAIR(std::vector<tdd> player1, std::vector<tdd> player2)
{
    int counter1 = 0;
    for (int i = 0; i < player1.size(); ++i) {
        for (int j = 0; j < player1.size(); ++j) {
            if(player1[i].getValue() == player1[j].getValue())
                counter1++;
        }
    }

    int counter2 = 0;
    for (int i = 0; i < player2.size(); ++i) {
        for (int j = 0; j < player2.size(); ++j) {
            if(player2[i].getValue() == player2[j].getValue())
                counter2++;
        }
    }

    return counter1/2 > counter2/2;
}

