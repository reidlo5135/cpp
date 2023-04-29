#include "include/inhertiance_operator_overloading.hpp"

First::First(int n1=0, int n2=0) : num1(n1), num2(n2) {

}

First::~First() {

}

void First::show_data() {
    std::cout << "First num1 : " << num1 << ", num2 : " << num2 << "\n";
}

First& First::operator=(const First& ref) {
    std::cout << "First& operator" << "\n";
    num1 = ref.num1;
    num2 = ref.num2;
    return *this;
}

Second::Second(int n1, int n2, int n3, int n4) : First(n1, n2), num3(n3), num4(n4) {

}

Second::~Second() {

}

void Second::show_data() {
    First::show_data();
    std::cout << "Second num3 : " << num3 << ", num4 : " << num4 << "\n";
}

int main(void) {
    Second s(1, 2, 3, 4);
    s.show_data();
    return 0;
}