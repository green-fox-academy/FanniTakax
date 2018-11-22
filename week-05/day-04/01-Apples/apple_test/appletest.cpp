#include <gtest/gtest.h>
#include "apple.h"

TEST(test_apples, test_apple){
    EXPECT_EQ(getApple(), "apple");
}