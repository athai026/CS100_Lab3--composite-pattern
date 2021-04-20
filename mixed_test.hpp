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

#endif

