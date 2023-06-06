#include "gtest/gtest.h"
#include "day-of-year.hpp"

struct DayOfYearTestSuite {};

TEST(DayOfYearTestSuite, January1stIsFitstDayOfYear)
{
  ASSERT_EQ(dayOfYear(1, 1, 2020), 1);
}

TEST(DayOfYearTestSuite, RokPrzestrzepny){
  ASSERT_EQ(dayOfYear(3, 1, 2020), 61);
}

