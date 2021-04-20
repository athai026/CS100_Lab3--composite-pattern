#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"
#include "mocks/mock.hpp"

TEST(PowTest, PowEval_Ten_power_NegFour) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpNegFour();
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), 0.0001);
}

#endif
