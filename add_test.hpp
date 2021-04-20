#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"
#include "mocks/mock.hpp"

TEST(AddTest, AddEval_Ten_plus_NegSeven) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpNegSeven();
    Add* test = new Add(op1, op2);
    EXPECT_EQ(test->evaluate(), 3);
}

TEST(AddTest, AddEval_NegSeven_plus_Ten) {
    Base* op1 = new mockOpNegSeven();
    Base* op2 = new mockOpTen();
    Add* test = new Add(op1, op2);
    EXPECT_EQ(test->evaluate(), 3);
}

TEST(AddTest, AddString_Ten_plus_NegSeven) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpNegSeven();
    Add* test = new Add(op1, op2);
    std::string result = "(10+-7)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(AddTest, AddString_NegSeven_plus_Ten) {
    Base* op1 = new mockOpNegSeven();
    Base* op2 = new mockOpTen();
    Add* test = new Add(op1, op2);
    std::string result = "(-7+10)";
    EXPECT_EQ(test->stringify(), result);
}

#endif //__ADD_TEST_HPP__
