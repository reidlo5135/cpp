#ifndef INHERITANCE
#define INHERITANCE

#include <iostream>
#include <cstring>

using namespace std;

class Person {
    private :
        char name[50];
        int age;
    public :
        Person(char * my_name, int my_age) : age(my_age) {
            strcpy(name, my_name);
        };
        void ask_name() const;
        void ask_age() const;
};

class UnivStudent : public Person {
    private :
        char major[50];
    public :
        UnivStudent(char * my_name, int my_age, char * my_major) : Person(my_name, my_age) {
            strcpy(major, my_major);
        };
        void ask_info() const;
};

class Super {
    private :
        int base_num;
    public :
        Super() : base_num(20) {
            cout << "Super()" << endl;
        };
        Super(int n) : base_num(n) {
            cout << "Super(int n)" << endl;
        };
        void show_base_data();
};

class Sub : public Super {
    private :
        int sub_num;
    public :
        Sub() : sub_num(30) {
            cout << "Sub()" << endl;
        };
        Sub(int n) : sub_num(n) {
            cout << "Sub(int n)" << endl;
        };
        Sub(int n1, int n2) : Super(n1), sub_num(n2) {
            cout << "Sub(int n1, int n2)" << endl;
        };
        void show_sub_data();
};

class Base {
    private :
        int base_num;
    public :
        Base(int n) : base_num(n) {
            cout << "Base() : " << base_num << endl;
        };
        ~Base() {
            cout << "~Base() : " << base_num << endl;
        };
};

class Derived : public Base {
    private :
        int derive_num;
    public :
        Derived(int n) : Base(n), derive_num(n) {
            cout << "Derived() : " << derive_num << endl;
        };
        ~Derived() {
            cout << "~Derived() : " << derive_num << endl;
        };
};

#endif