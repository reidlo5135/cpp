#include "include/const.hpp"

Simple& Simple::add_num(int n) {
    num += n;
    return *this;
}

void Simple::show_data() {
    cout << "num : " << num << endl;
}

void Simple::show_data() const {
    cout << "const num : " << num << endl;
}

void custom_function(const Simple &obj) {
    obj.show_data();
}

int main(void) {
    const Simple obj(7);
    Simple obj2(8);

    obj.show_data();
    obj2.show_data();

    custom_function(obj);
    custom_function(obj2);

    return 0;
}