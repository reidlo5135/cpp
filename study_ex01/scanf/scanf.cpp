#include "include/scanf.hpp"

void scan(void) {
    int val1;
    std::cout<<"input first number : ";
    std::cin>>val1;

    int val2;
    std::cout<<"input second number : ";
    std::cin>>val2;

    int result = val1 + val2;
    std::cout<<"result : "<<result<<std::endl;
}

int local(void) {
    int val1, val2;
    int result = 0;
    std::cout<<"input number twice : ";
    std::cin>>val1>>val2;

    if(val1<val2) {
        for(int i=val1+1;i<val2;i++) {
            result += i;
        }
    } else {
        for(int j=val2+1;j<val1;j++) {
            result += j;
        }
    }
    return result;
}

int main(void) {
    scan();
    int result = local();
    std::cout<<"result : "<<result<<std::endl;
    return 0;
}