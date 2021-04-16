#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "op.hpp"

class Sub : public Base {
    public: 
        Sub(Base* left, Base* right) : Base() {
            l_value = left->evaluate();
            r_value = right->evaluate();
        }
        virtual double evaluate() {
            difference = l_value = r_value;
            return difference;
        }
        virtual std::string stringify() {
            l_string = left->stringify();
            r_string = right->stringify();
            return ("(" + l_string + "-" + r_string + ")");
        }

    public: 
        double l_value, r_value, difference;
        std::string l_string, r_string;
};

#endif //__SUB_HPP__

