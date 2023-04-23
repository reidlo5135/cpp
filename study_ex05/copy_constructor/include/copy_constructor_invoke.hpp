#ifndef COPY_CONSTRUCTOR_INVOKE
#define COPY_CONSTRUCTOR_INVOKE

#include <iostream>

using namespace std;

class Simple {
    private :
        int num;
    public :
        Simple(int n) : num(n) {};
        Simple(const Simple &copy) : num(copy.num) {
            cout << "Simple constructor(const Simple &copy) invoked" << endl;
        };
        void show_data();
        Simple& add_num(int n);
};

void simple_func_obj(Simple obj);
Simple simple_func_obj_with_return(Simple obj);

#endif