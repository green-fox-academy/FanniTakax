#ifndef TDD_TDD_H
#define TDD_TDD_H

#include <vector>

enum class color {
    C,
    D,
    H,
    S
};

enum class value {
    val_2,
    val_3,
    val_4,
    val_5,
    val_6,
    val_7,
    val_8,
    val_9,
    val_J,
    val_D,
    val_K,
    val_A
};

class tdd {
public:
    tdd(value value, color color);

protected:
    value _value;
public:
    value getValue() const;

protected:
    color _color;
};

bool isWinnerPlayer1(std::vector<tdd> player1, std::vector<tdd> player2);

#endif //TDD_TDD_H
