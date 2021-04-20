#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"
#include "mocks/mock.hpp"

TEST(MultTest, MultEval_Ten_times_NegSeven) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpNegSeven();
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), -70);
}

TEST(MultTest, MultEval_NegSeven_times_Ten) {
    Base* op1 = new mockOpNegSeven();
    Base* op2 = new mockOpTen();
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), -70);
}

#endif
