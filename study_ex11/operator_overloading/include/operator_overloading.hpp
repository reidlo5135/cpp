#ifndef OPERATOR_OVERLOADING
#define OPERATOR_OVERLOADING

#include <iostream>
#include <cstring>

class First {
    private :
        int num1;
        int num2;
    public :
        First(int n1, int n2);
        virtual ~First();
        void show_data();
        First& operator=(const First &ref);
        void substitution_frist();
};

class Person {
    private :
        char * name;
        int age;
    public :
        Person(char * my_name, int my_age);
        virtual ~Person();
        void show_person_info() const;
        Person& operator=(const Person &ref);
};

#endif