#ifndef COPY_CONSTRUCTOR
#define COPY_CONSTRUCTOR

#include <iostream>

using namespace std;

class Simple {
    private :
        int num1;
        int num2;
    public :
        Simple(int n1, int n2) : num1(n1), num2(n2) {};
        void show_simple_data();
};

class SecondSimple {
    private :
        int num1;
        int num2;
    public :
        SecondSimple(int n1, int n2) : num1(n1), num2(n2) {};
        SecondSimple(SecondSimple &copy) : num1(copy.num1), num2(copy.num2) {
            cout << "SecondSimple constructor invoked" << endl;
        };
        void show_second_simple_data();
};

#endif