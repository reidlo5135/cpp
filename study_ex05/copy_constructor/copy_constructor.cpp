#include "include/copy_constructor.hpp"

void Simple::show_simple_data() {
    cout << "num 1: " << num1 << endl;
    cout << "num 2: " << num2 << endl;
}

void SecondSimple::show_second_simple_data() {
    cout << "second simple num 1 : " << num1 <<endl;
    cout << "second simple num 2 : " << num2 <<endl;
}

int main(void) {
    Simple sim1(15, 20);
    Simple sim2 = sim1;
    sim2.show_simple_data();

    SecondSimple ssim1(15, 30);
    cout << "before second simple initialize" << endl;

    SecondSimple ssim2 = ssim1;
    cout << "after second simple initialize" << endl;
    ssim2.show_second_simple_data();

    return 0;
}