#ifndef FRIEND_TEMPLATE
#define FRIEND_TEMPLATE

#include <iostream>

template<typename T>
class Point {
    private :
        T x;
        T y;
    public :
        Point(T x, T y);
        void show_position() const;
        friend Point<int> operator+(const Point<int>&, const Point<int>&);
};

Point<int> operator+(const Point<int>& pos1, const Point<int>& pos2);
void show_data();

#endif