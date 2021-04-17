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

TEST(DivTest, DivString_Ten_div_Five) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpFive();
    Div* test = new Div(op1, op2);
    std::string result = "(10/5)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(DivTest, DivEval_Five_div_Ten) {
    Base* op1 = new mockOpFive();
    Base* op2 = new mockOpTen();
    Div* test = new Div(op1, op2);
    EXPECT_EQ(test->evaluate(), 0.5);
}

TEST(DivTest, DivString_Five_div_Ten) {
    Base* op1 = new mockOpFive();
    Base* op2 = new mockOpTen();
    Div* test = new Div(op1, op2);
    std::string result = "(5/10)";
    EXPECT_EQ(test->stringify(), result);
}

#endif //__DIV_TEST_HPP__

