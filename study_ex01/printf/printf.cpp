#include "include/printf.hpp"

void print(int num) {
    std::cout<<"Hello World!"<<std::endl;
    std::cout<<"Hello "<<"World!"<<std::endl;
    std::cout<<num<<' '<<'A';
    std::cout<<' '<<3.14<<std::endl;
}

int main(void) {
    int num = 20;
    print(num);
    return 0;
}