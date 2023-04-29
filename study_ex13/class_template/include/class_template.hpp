#ifndef CLASS_TEMPLATE
#define CLASS_TEMPLATE

#include <iostream>

template <typename T>
class Point {
    private :
        T xpos;
        T ypos;
    public :
        Point(T x, T y);
        virtual ~Point();
        void show_position() const;
};

void point_data();

#endif