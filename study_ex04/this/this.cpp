#include "include/this.hpp"

void SoSimple::show_simple() {
    cout << "show simple num : " << num << endl;
}

SoSimple * SoSimple::get_this_pointer() {
    return this;
}

SoSimple& SoSimple::add_num(int n) {
    num += n;
    return *this;
}

SoSimple& SoSimple::show_num() {
    cout << "show num : " << num << endl;
    return *this;
}

int main(void) {
    SoSimple sim1(100);
    SoSimple * ptr1 = sim1.get_this_pointer();
    cout << "ptr1 : " << ptr1 << ", ";
    ptr1 -> show_simple();

    SoSimple sim2(500);
    SoSimple * ptr2 = sim2.get_this_pointer();
    cout << "ptr2 : " << ptr2 << ", ";
    ptr2 -> show_simple();

    SoSimple sim3(3);
    SoSimple &ref = sim3.add_num(2);
    sim3.show_num();
    ref.show_num();
    ref.add_num(1).show_num().add_num(2).show_num();

    return 0;
}