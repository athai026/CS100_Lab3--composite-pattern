#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, RandEvaluateGE0) {
    Rand* test = new Rand();
    EXPECT_GE(test->evaluate(), 0);
}

TEST(RandTest, RandEvaluateLT100) {
    Rand* test = new Rand();
    EXPECT_LT(test->evaluate(), 100);
}


#endif //__RAND_TEST_HPP__
