#include "include/namespace.hpp"

void space_first::func_first(void) {
    std::cout<<"func_first from space_first"<<std::endl;
}

void space_second::func_second(void) {
    std::cout<<"func_second from space_second"<<std::endl;
}

void space_third::func_third(void) {
    cout<<"func_third from space_third"<<endl;
    space_third::child_third::num1 = 10;
    space_third::child_third::num2 = 20;
    int result = space_third::child_third::num1 + space_third::child_third::num2;
    cout<<"func_third result : "<<result<<endl;
}

int main(void) {
    space_first::func_first();
    space_second::func_second();
    space_third::func_third();
    return 0;
}