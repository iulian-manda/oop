#include "gtest/gtest.h"
#include "calculator.h"

TEST(CalculatorTestSuite, AddTest) {
    int result = Calculator::add(1, 1);

    ASSERT_EQ(2, result);
}

TEST(CalculatorTestSuite, AddNegativeTest) {
    int result = Calculator::add(-1, 1);

    ASSERT_EQ(0, result);
}