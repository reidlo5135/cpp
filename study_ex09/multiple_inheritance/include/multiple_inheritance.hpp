#ifndef MULTIPLE_INHERITANCE
#define MULTIPLE_INHERITANCE

#include <iostream>

class BaseOne {
    public :
        void simple_func_one();
        void simple();
};

class BaseTwo {
    public :
        void simple_func_two();
        void simple();
};

class MultiDerived : public BaseOne, protected BaseTwo {
    public :
        void complex_func();
};

class Base {
    public :
        Base();
        void simple_func();
};

class MiddleDerivedOne : virtual public Base {
    public :
        MiddleDerivedOne();
        void middle_func_one();
};

class MiddleDerivedTwo : virtual public Base {
    public :
        MiddleDerivedTwo();
        void middle_func_two();
};

class LastDerived : public MiddleDerivedOne, public MiddleDerivedTwo {
    public :
        LastDerived();
        void complex_func();
};

#endif