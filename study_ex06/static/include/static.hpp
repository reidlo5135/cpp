#ifndef STATIC
#define STATIC

#include <iostream>

using namespace std;

void counter();

class Simple {
    public :
        static int sim_obj_cnt;
    public :
        Simple() {
            sim_obj_cnt++;
        }
};

int Simple::sim_obj_cnt = 0;

class Simple2 {
    private :
        int num1;
        static int num2;
    public :
        Simple2(int n) : num1(n) {};
        static void add(int n) {
            // num1 += n; //compile error
            num2 += n;
        };
};

int Simple2::num2 = 0;

#endif