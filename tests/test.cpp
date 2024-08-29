#include <gtest/gtest.h>
#include "calculator.h"
#include <stdexcept>

class CalculatorTest : public ::testing::Test {
    protected:
    Calculator calc;
};

// Test for Addition
TEST_F(CalculatorTest, AddTest) {
    EXPECT_EQ(calc.add(2, 3), 5);
    EXPECT_EQ(calc.add(10, 20), 30);
    EXPECT_EQ(calc.add(-2, -3), -5);
}

// Test for Subtraction
TEST_F(CalculatorTest, SubtractTest) {
    EXPECT_EQ(calc.subtract(5, 4), 1);
    EXPECT_EQ(calc.subtract(-40, -20), -20);
    EXPECT_EQ(calc.subtract(100, 99), 1);
}

// Test for Multiply
TEST_F(CalculatorTest, MultiplyTest) {
    EXPECT_EQ(calc.multiply(2, 3), 6);
    EXPECT_EQ(calc.multiply(10, 30), 300);
    EXPECT_EQ(calc.multiply(-5, -10), 50);
}

// Test for Divide 
TEST_F(CalculatorTest, DivideTest) {
    EXPECT_DOUBLE_EQ(calc.divide(10, 5), 2.0);
    EXPECT_DOUBLE_EQ(calc.divide(300, 3), 100.0);
    EXPECT_THROW(calc.divide(100, 0), std::invalid_argument);
}

