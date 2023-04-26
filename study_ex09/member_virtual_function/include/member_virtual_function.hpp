#ifndef MEMBER_VIRTUAL_FUNCTION
#define MEMBER_VIRTUAL_FUNCTION

#include <iostream>

typedef struct Data {
    int data;
    void (*show_data)(Data*);
    void (*add)(Data*, int);
} Data;

void show_data(Data* THIS);
void add(Data* THIS, int num);

class AAA {
    private :
        int num1;
    public :
        virtual void func1();
        virtual void func2();
};

class BBB : public AAA {
    private :
        int num2;
    public :
        virtual void func1();
        void func3();
};

#endif