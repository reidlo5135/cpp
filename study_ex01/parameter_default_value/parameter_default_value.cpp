#include "include/parameter_default_value.hpp"

void one(int num=7) {
    num++;
    std::cout<<"num one : "<<num<<std::endl;
}

void two(int num1=5, int num2=7) {
    int result = num1 + num2;
    std::cout<<"result : "<<result<<std::endl;
}

int main(void) {
    one();
    one(17);
    two();
    two(9, 10);
    return 0;
}