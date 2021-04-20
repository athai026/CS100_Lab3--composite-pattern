#ifndef __MIXED_TEST_HPP__
#define __MIXED_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "rand.hpp"


TEST(MixedTest, test1) {
    Base* two = new Op(2);
    Base* three = new Op(3);
    Base* five = new Op(5);
    Base* nine = new Op(9);
    Base* add = new Add(three, five);
    Base* sub = new Sub(add, nine);
    Base* div = new Div(sub, two);
    std::string result = "(((3+5)-9)/2)";

    EXPECT_DOUBLE_EQ(div->evaluate(), -0.5);
    EXPECT_EQ(div->stringify(), result);
}

TEST(MixedTest, test2) {
    Base* two = new Op(2);
    Base* four = new Op(4);
    Base* eight = new Op(8);
    Base* pow = new Pow(four, two);
    Base* div = new Div(eight, four);
    Base* add = new Add(pow, div);
    std::string result = "((4**2)+(8/4))";

    EXPECT_DOUBLE_EQ(add->evaluate(), 18);
    EXPECT_EQ(add->stringify(), result);
}

#endif

