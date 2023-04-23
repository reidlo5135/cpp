#include "include/destructor.hpp"

void Person::show_person_info() const {
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
}

int main(void) {
    Person p = Person("reidlo", 25);
    p.show_person_info();
    return 0;
}