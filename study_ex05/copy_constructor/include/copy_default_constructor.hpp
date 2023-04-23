#ifndef COPY_DEFAULT_CONSTRUCTOR
#define COPY_DEFAULT_CONSTRUCTOR

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
        };
        void show_person_info();
        ~Person() {
            delete []name;
            cout << "person destructor invoked" << endl;
        }
};

class Person2 {
    private :
        char * name;
        int age;
    public :
        Person2(char * my_name, int my_age) {
            int len = strlen(my_name) + 1;
            name = new char[len];
            strcpy(name, my_name);
            age = my_age;
        };
        Person2(const Person2 &copy) : age(copy.age) {
            int len = strlen(copy.name) + 1;
            name = new char[len];
            strcpy(name, copy.name);
        };
        void show_person2_info();
        ~Person2() {
            delete []name;
            cout << "person2 destructor invoked" << endl;
        }
};

#endif