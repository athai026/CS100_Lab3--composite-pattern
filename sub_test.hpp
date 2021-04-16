#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "sub.hpp"
#include "mocks/mock.hpp"

TEST(SubTest, SubEval_Ten_minus_Five) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpFive();
    Sub* test = new Sub(op1, op2);
    EXPECT_EQ(test->evaluate(), 5);
}

TEST(SubTest, SubEval_Five_minus_Ten) {
    Base* op1 = new mockOpFive();
    Base* op2 = new mockOpTen();
    Sub* test = new Sub(op1, op2);
    EXPECT_EQ(test->evaluate(), -5);
}

TEST(SubTest, SubString_Ten_minus_Five) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpFive();
    Sub* test = new Sub(op1, op2);
    std::string result = "(10-5)";
    EXPECT_EQ(test->stringify(), result);
}


#endif //__SUB_TEST_HPP__

