#ifndef OPERATOR_OVERLOADING
#define OPERATOR_OVERLOADING

#include <iostream>

class Point {
    private :
        int xpos;
        int ypos;
    public :
        Point(int x, int y);
        virtual ~Point();
        void show_position() const;
        Point operator+(const Point &ref);
        friend Point operator+(const Point &pos1, const Point &pos2);
        void show_point();
        void show_second_point();
};

#endif