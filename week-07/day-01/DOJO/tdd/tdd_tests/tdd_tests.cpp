#include <gtest/gtest.h>
#include "tdd.h"
#include <vector>


TEST(poker, apoker_high_card){

    tdd card1(value::val_2, color::H);
    tdd card2(value::val_3, color::D);
    tdd card3(value::val_5, color::S);
    tdd card4(value::val_9, color::C);
    tdd card5(value::val_K, color::D);
    std::vector<tdd> Black = {card1, card2, card3, card4, card5};

    tdd card6(value::val_2, color::C);
    tdd card7(value::val_3, color::H);
    tdd card8(value::val_4, color::S);
    tdd card9(value::val_8, color::C);
    tdd card10(value::val_A, color::H);
    std::vector<tdd> White = {card6, card7, card8, card9, card10};

    EXPECT_FALSE(isWinnerPlayer1(Black, White));
}

//Black: 2H 4S 4C 2D 4H White: 2S 8S AS QS 3S

TEST(poker, apoker_full_house){

    tdd card1(value::val_2, color::H);
    tdd card2(value::val_4, color::S);
    tdd card3(value::val_4, color::C);
    tdd card4(value::val_2, color::D);
    tdd card5(value::val_4, color::H);
    std::vector<tdd> Black = {card1, card2, card3, card4, card5};

    tdd card6(value::val_2, color::S);
    tdd card7(value::val_8, color::S);
    tdd card8(value::val_A, color::S);
    tdd card9(value::val_D, color::S);
    tdd card10(value::val_3, color::S);
    std::vector<tdd> White = {card6, card7, card8, card9, card10};

    EXPECT_FALSE(!isWinnerPlayer1_PAIR(Black, White));
}