#ifndef INHERITANCE_OPEARTOR_OVERLOADING
#define INHERITANCE_OPEARTOR_OVERLOADING

#include <iostream>

class First {
    private :
        int num1;
        int num2;
    public :
        First(int n1, int n2);
        virtual ~First();
        void show_data();
        First& operator=(const First& ref);
};

class Second : public First {
    private :
        int num3;
        int num4;
    public :
        Second(int n1, int n2, int n3, int n4);
        virtual ~Second();
        void show_data();
};

#endif