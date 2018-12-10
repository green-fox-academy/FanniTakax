#include <gtest/gtest.h>
#include "tdd.h"
#include <vector>

//Black: 2H 3D 5S 9C KD White: 2C 3H 4S 8C AH

TEST(poker, apoker_is_bigger){
    std::vector<tdd> Black;
    tdd card1(value::val_2, color::H);
    tdd card2(value::val_3, color::D);
    tdd card3(value::val_5, color::S);
    tdd card4(value::val_9, color::C);
    tdd card5(value::val_K, color::D);
    Black.push_back(card1);
    Black.push_back(card2);
    Black.push_back(card3);
    Black.push_back(card4);
    Black.push_back(card5);

    std::vector<tdd> White;
    tdd card6(value::val_2, color::C);
    tdd card7(value::val_3, color::H);
    tdd card8(value::val_4, color::S);
    tdd card9(value::val_8, color::C);
    tdd card10(value::val_A, color::H);
    White.push_back(card6);
    White.push_back(card7);
    White.push_back(card8);
    White.push_back(card9);
    White.push_back(card10);

    EXPECT_FALSE(isWinnerPlayer1(Black, White));
}