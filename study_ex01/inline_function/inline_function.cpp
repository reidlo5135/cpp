#include "include/inline_function.hpp"

inline int SQUARE(int x) {
    x *= x;
    return x;
}

int main(void) {
    std::cout<<SQUARE(5)<<std::endl;
    std::cout<<SQUARE(10)<<std::endl;
    return 0;
}