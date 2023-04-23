#include "include/copy_default_constructor.hpp"

void Person::show_person_info() {
    cout << "show person name : " << name << endl;
    cout << "show person age : " << age << endl;
}

void Person2::show_person2_info() {
    cout << "show person2 name : " << name << endl;
    cout << "show person2 age : " << age << endl;
}

int main(void) {
    // Person p1("reidlo", 25);
    // Person p2 = p1;
    // p1.show_person_info();
    // p2.show_person_info();

    Person2 p1("reidlo", 25);
    Person2 p2 = p1;
    p1.show_person2_info();
    p2.show_person2_info();
    return 0;
}