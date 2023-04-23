#include "include/inheritance.hpp"

void Person::ask_name() const {
    cout << "name is " << name << endl;
}

void Person::ask_age() const {
    cout << "age is " << age << endl;
}

void UnivStudent::ask_info() const {
    ask_name();
    ask_age();
    cout << "major is : " << major << endl;
}

void Super::show_base_data() {
    cout << "super base_num : " << base_num << endl;
}

void Sub::show_sub_data() {
    show_base_data();
    cout << "sub sub_num : " << sub_num << endl;
}

int main(void) {
    // char * name = "reidlo";
    // int age = 25;
    // char * major = "cpp";

    // UnivStudent u(name, age, major);
    // u.ask_info();

    // cout << "case1...." << endl;
    // Sub sub1;
    // sub1.show_sub_data();
    // cout << "----------" << endl;

    // cout << "case2...." << endl;
    // Sub sub2(12);
    // sub2.show_sub_data();
    // cout << "----------" << endl;

    // cout << "case3...." << endl;
    // Sub sub3(23, 24);
    // sub3.show_sub_data();

    Derived derived1(15);
    Derived derived2(27);

    return 0;
}