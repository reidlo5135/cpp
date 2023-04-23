#ifndef ARRAY_WITH_CLASS
#define ARRAY_WITH_CLASS

#include <iostream>

using namespace std;

class Person {
    private :
        string name;
        int age;
    
    public :
        Person(string new_name, int new_age) {
            name = new_name;
            age = new_age;
        }
};

#endif