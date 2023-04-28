#ifndef SINGLE_OPERATOR_OVERLOADING
#define SINGLE_OPERATOR_OVERLOADING

#include <iostream>

class Point {
    private :
        int xpos;
        int ypos;
    public :
        Point(int x, int y);
        virtual ~Point();
        void show_position() const;
        Point& operator++();
        friend Point& operator--(Point &ref);
        void show_point();
        friend Point operator*(int times, Point &ref);
        void show_times_point();
};

#endif