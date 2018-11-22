#include <gtest/gtest.h>
#include "apple.h"

TEST(test_apples, test_apple){
    EXPECT_EQ(getApple(), "apple");
}


    //test your method with an empty list
    //with a list with one element in it
    //with multiple elements in it
    //with negative sum


TEST(test_sums, test_sum_positive){
    std::vector<int> vector = {1, 2, 3, 4};
    ASSERT_EQ(sum(vector), 10);
}
TEST(test_sums, test_sum_negative){
    std::vector<int> vector = {6, -3, -4, 2, -8};
    ASSERT_EQ(sum(vector), -7);
}
TEST(test_sums, test_sum_empty){
    std::vector<int> vector = {};
    ASSERT_EQ(sum(vector), 0);
}
TEST(test_sums, test_sum_onelement){
    std::vector<int> vector = {6};
    ASSERT_EQ(sum(vector), 6);
}

