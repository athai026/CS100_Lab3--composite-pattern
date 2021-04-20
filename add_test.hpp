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



#endif //__ADD_TEST_HPP__

