#include "include/functor_operator_overloading.hpp"

Adder::Adder() {

}

Adder::~Adder() {

}

int Adder::operator()(const int& n1, const int& n2) {
    return n1 + n2;
}

double Adder::operator()(const double& e1, const double& e2) {
    return e1 + e2;
}

void Adder::show_adder() const {
    Adder adder;
    std::cout << adder(1, 3) << "\n";
    std::cout << adder(1.5, 3.7) << "\n";
}

SortRule::SortRule() {

}

SortRule::~SortRule() {

}

bool SortRule::operator()(int num1, int num2) const {

}

AscendingSort::AscendingSort() {

}

AscendingSort::~AscendingSort() {

}

bool AscendingSort::operator()(int num1, int num2) const {
    if(num1 > num2) {
        return true;
    } else {
        return false;
    }
}

DescendingSort::DescendingSort() {

}

DescendingSort::~DescendingSort() {

}

bool DescendingSort::operator()(int num1, int num2) const {
    if(num1 > num2) {
        return true;
    } else {
        return false;
    }
}

void SortRule::sort_data(const SortRule& functor) {
    
}

Number::Number(int n=0) : num(n) {
    std::cout << "Number(int n=0)" << "\n";
}

Number::~Number() {

}

Number& Number::operator=(const Number& ref) {
    std::cout << "number operator=()" << "\n";
    num = ref.num;
    return *this;
}

void Number::show_number() const {
    std::cout << "num : " << num << "\n";
}

Number::operator int () {
    return num;
}

void Number::show_data() const {
    Number num;
    num = 30;

    Number num2 = num + 20;
    num2.show_number();
}

int main(void) {
    Adder * adder;
    adder->show_adder();

    Number * num;
    num->show_data();
    return 0;
}