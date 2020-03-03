#include "gtest/gtest.h"
#include "calculator.h"

TEST(CalculatorTestSuite, AddPositive) {
    // setup
    int a = 1;
    int b = 1;

    // run
    int result = Calculator::add(a, b);

    // verify
    int expected = 2;
    ASSERT_EQ(expected, result);
}

TEST(CalculatorTestSuite, AddNegative) {
    // setup
    int a = -1;
    int b = 1;

    // run
    int result = Calculator::add(a, b);

    // verify
    int expected = 0;
    ASSERT_EQ(expected, result);
}

TEST(CalculatorTestSuite, AddZero) {
    // setup
    int a = 1;
    int b = 0;

    // run
    int result = Calculator::add(a, b);

    // verify
    int expected = 1;
    ASSERT_EQ(expected, result);
}