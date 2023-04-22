#ifndef HIDE_INFO
#define HIDE_INFO

#include <iostream>

#define INDEX 0

using namespace std;

class Point {
    private : 
        int x;
        int y;

    public :
        bool init_members(int xpos, int ypos);
        int get_point_x() const;
        int get_point_y() const;
        bool set_point_x(int xpos);
        bool set_point_y(int ypos);
};

class Rectangle {
    private :
        Point up_left;
        Point low_right;

    public :
        bool init_members(const Point &up_left, const Point &low_right);
        void show_rect_info(Rectangle &rect) const;
        Point get_point_up_left() const;
        Point get_point_low_right() const;
        bool set_point_up_left(const int up_left_arr[]);
        bool set_point_low_right(const int low_right_arr[]);
};

#endif