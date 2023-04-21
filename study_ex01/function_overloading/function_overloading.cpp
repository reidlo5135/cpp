#include "include/function_overloading.hpp"

void overload(int num) {
    std::cout<<"num : "<<num<<std::endl;
}

void overload(int num1, int num2) {
    int result = num1 + num2;
    std::cout<<"result : "<<result<<std::endl;
}

int main(void) {
    overload(10);
    overload(20, 30);
    return 0;
}