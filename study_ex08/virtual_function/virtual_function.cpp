#include "include/virtual_function.hpp"

void First::my_func() {
    std::cout << "first function " << "\n";
}

void First::vi_func() {
    std::cout << "first virtual function " << "\n";
}

void First::first_func() {
    std::cout << "first function " << "\n";
}

First::~First() {
    std::cout << "first destructor" << "\n";
}

void Second::my_func() {
    std::cout << "second function " << "\n";
}

void Second::second_func() {
    std::cout << "second function " << "\n";
}

void Second::vi_func() {
    std::cout << "second virtual function " << "\n";
}

Second::~Second() {
    std::cout << "second destructor" << "\n";
}

void Third::my_func() {
    std::cout << "third function " << "\n\n";
}

void Third::third_func() {
    std::cout << "third function " << "\n";
}

void Third::vi_func() {
    std::cout << "third virtual function " << "\n";
}

Third::~Third() {
    std::cout << "third destructor" << "\n";
}

void total_func() {
    Third * tptr = new Third();
    Second * sptr = tptr;
    First * fptr = sptr;

    fptr->my_func();
    sptr->my_func();
    tptr->my_func();

    fptr->vi_func();
    sptr->vi_func();
    tptr->vi_func();
    delete tptr;
}

void ref_func() {
    Third obj;
    obj.first_func();
    obj.second_func();
    obj.third_func();

    Second & sref = obj;
    sref.first_func();
    sref.second_func();

    First & fref = obj;
    fref.first_func();
}

int main(void) {
    // total_func();
    ref_func();
    return 0;
}