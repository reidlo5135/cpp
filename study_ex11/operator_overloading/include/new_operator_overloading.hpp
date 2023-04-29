#ifndef NEW_OPERATOR_OVERLOADING
#define NEW_OPERATOR_OVERLOADING

#include <iostream>

class Point {
    private :
        int xpos;
        int ypos;
    public :
        Point(int x, int y);
        virtual ~Point();
        void * operator new (size_t size);
        void operator delete (void * adr);
        void show_point() const;
};

class Number {
    private :
        int num;
    public :
        Number(int n);
        virtual ~Number();
        void show_data() const;
        Number * operator->();
        Number& operator*();
        void show_number() const;
};

class SmartPtr {
    private :
        Point * pptr;
    public :
        SmartPtr(Point * ptr);
        virtual ~SmartPtr();
        Point& operator*() const;
        Point* operator->() const;
        void set_pos(int x, int y);
        void show_smart_point() const;
};

#endif