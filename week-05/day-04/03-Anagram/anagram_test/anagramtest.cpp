#include <gtest/gtest.h>
#include "anagram.h"

//Write a function, that takes two strings and returns a boolean value based on if the two strings are Anagramms or not.
//Create a test for that.

TEST(anagrams, test_anagram_words){
    ASSERT_TRUE(isAnagram("apple", "alpep"));
}
TEST(anagrams, test_anagram_words2){
    ASSERT_FALSE(isAnagram("apple", "alpepo"));
}
TEST(anagrams, test_anagram_words3){
    ASSERT_FALSE(isAnagram("apple", "alpe"));
}