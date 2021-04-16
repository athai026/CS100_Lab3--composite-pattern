#ifndef __OP_HPP__
#define __OP_HPP__

#include "iostream"
#include <iomanip>
#include "base.hpp"

class Op : public Base {
    public:
        Op(double value) : Base(), value(value) { }
        virtual double evaluate() { return value; }
        virtual std::string stringify() {
            ostringstream  ss;
            ss << setprecision(8) << noshowpoint << value;
            return ss.str();
        }
    private: 
        double value;
};

#endif //__OP_HPP__
