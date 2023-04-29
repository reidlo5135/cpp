#include "include/operator_overloading.hpp"

First::First(int n1=0, int n2=0) : num1(n1), num2(n2) {
    std::cout << "First constructor invoked" << "\n";
}

First::~First() {
    std::cout << "First destructor invoked" << "\n";
}

void First::show_data() {
    std::cout << "num1 : " << num1 << ", num2 : " << num2 << "\n";
}

First& First::operator=(const First &ref) {
    num1 = ref.num1;
    num2 = ref.num2;
    return *this;
}

void First::substitution_frist() {
    First f(5, 5);
    First f2;
    f2.operator=(f);
    f2.show_data();
}

Person::Person(char * my_name, int my_age) : name(my_name), age(my_age) {
    std::cout << "Person constructor invoked" << "\n";
    int len = strlen(my_name) + 1;
    name = new char[len];
    strcpy(name, my_name);
    age = my_age;
}

Person::~Person() {
    delete []name;
    std::cout << "Person destructor invoked" << "\n";
}

void Person::show_person_info() const {
    std::cout << "name : " << name << "\n";
    std::cout << "age : " << age << "\n";
}

Person& Person::operator=(const Person& ref) {
    delete []name;
    int len = strlen(ref.name) + 1;
    name = new char[len];
    strcpy(name, ref.name);
    age = ref.age;
    return *this;
}

int main(void) {
    First f1;
    f1.substitution_frist();

    Person man1("reidlo", 25);
    Person man2("reidlo2", 27);
    man2 = man1;
    man1.show_person_info();
    man2.show_person_info();
    return 0;
}