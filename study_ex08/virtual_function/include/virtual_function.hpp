#ifndef VIRTUAL_FUNCTION
#define VIRTUAL_FUNCTION

#include <iostream>

class First {
    public :
        void my_func();
        void first_func();
        virtual void vi_func();
        virtual ~First();
};

class Second : public First {
    public :
        void my_func();
        void second_func();
        virtual void vi_func();
        virtual ~Second();
};

class Third : public Second {
    public :
        void my_func();
        void third_func();
        virtual void vi_func();
        virtual ~Third();
};

void total_func();
void ref_func();

#endif