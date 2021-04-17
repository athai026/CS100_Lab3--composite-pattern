#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"
#include "mocks/mock.hpp"

TEST(DivTest, DivEval_Ten_div_Five) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpFive();
    Div* test = new Div(op1, op2);
    EXPECT_EQ(test->evaluate(), 2);
}

#endif //__DIV_TEST_HPP__

