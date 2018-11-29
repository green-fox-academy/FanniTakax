#include <gtest/gtest.h>
#include "fibonacci.h"

TEST(add, add_two_ints){
    EXPECT_EQ(add(6, 6), 12);
}

TEST(fibo, fibo_six){
    EXPECT_EQ(fibo(6), 8);
}

TEST(fibo, fibo_minus){
    EXPECT_EQ(fibo(-23), -1);
}

TEST(fibo, fibo_zero){
    EXPECT_EQ(fibo(0), 0);
}

TEST(fibo, fibo_uno){
    EXPECT_EQ(fibo(1), 1);
}

TEST(fibo, fibo_three){
    EXPECT_EQ(fibo(3), 2);
}


