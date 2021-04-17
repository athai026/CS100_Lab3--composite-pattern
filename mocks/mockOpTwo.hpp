#ifndef __MOCK_OP_TWO__
#define __MOCK_OP_TWO__

#include "../base.hpp"

class mockOpTwo : public Base {
    public: 
        mockOpTw0() {}
        virtual double evaluate() {return 2;}
        virtual std::string stringify() {return "2";}
};

#endif //__MOCK_OP_TWO__
