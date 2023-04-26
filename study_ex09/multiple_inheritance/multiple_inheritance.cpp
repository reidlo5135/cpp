#include "include/multiple_inheritance.hpp"

void BaseOne::simple_func_one() {
    std::cout << "base one simple func" << "\n";
}

void BaseTwo::simple_func_two() {
    std::cout << "base two simple func" << "\n";
}

void BaseOne::simple() {
    std::cout << "base one simple" << "\n";
}

void BaseTwo::simple() {
    std::cout << "base two simple" << "\n";
}

void MultiDerived::complex_func() {
    simple_func_one();
    simple_func_two();

    BaseOne::simple();
    BaseTwo::simple();
}

Base::Base() {
    std::cout << "Base Constructor" << "\n";
}

void Base::simple_func() {
    std::cout << "Base simple func" << "\n";
}

MiddleDerivedOne::MiddleDerivedOne() : Base() {
    std::cout << "MiddleDerivedOne Constructor" << "\n";
}

void MiddleDerivedOne::middle_func_one() {
    simple_func();
    std::cout << "MiddleDerivedOne func" << "\n";
}

MiddleDerivedTwo::MiddleDerivedTwo() {
    std::cout << "MiddleDerivedTwo Constructor" << "\n";
}

void MiddleDerivedTwo::middle_func_two() {
    simple_func();
    std::cout << "MiddleDerivedTwo func" << "\n";
}

LastDerived::LastDerived() : MiddleDerivedOne(), MiddleDerivedTwo() {
    std::cout << "LastDerived Constructor" << "\n";
}

void LastDerived::complex_func() {
    middle_func_one();
    middle_func_two();
    simple_func();
}

int main(void) {
    MultiDerived mdr;
    mdr.complex_func();

    LastDerived ldr;
    ldr.complex_func();
    return 0;
}