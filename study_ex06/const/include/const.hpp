#ifndef CONST
#define CONST

#include <iostream>

using namespace std;

class Simple {
    private :
        int num;
    public :
        Simple(int n) : num(n) {};
        Simple& add_num(int n);
        void show_data();
        void show_data() const;
};

void custom_function(const Simple &obj);

#endif