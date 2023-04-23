#ifndef DESTRUCTOR
#define DESTRUCTOR

#include <iostream>
#include <cstring>

using namespace std;

class Person {
    private : 
        char * name;
        int age;

    public :
        Person(char * my_name, int my_age) {
            int len = strlen(my_name) + 1;
            name = new char[len];
            strcpy(name, my_name);
            age = my_age;
        }
        void show_person_info() const;
        ~Person() {
            delete []name;
            cout << "destructor invoked" << endl;
        }
};

#endif