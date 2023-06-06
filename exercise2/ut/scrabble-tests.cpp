#include "gtest/gtest.h"
#include "scrabble.hpp"

struct test{};

TEST(test, one){
    ASSERT_EQ(scrabble("cabbage"), 14);
}