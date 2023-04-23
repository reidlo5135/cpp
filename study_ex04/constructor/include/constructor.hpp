#ifndef CONSTRUCTOR
#define CONSTRUCTOR

#include <iostream>

#define INDEX 0

using namespace std;

class Point {
    private : 
        int x;
        int y;

    public :
        Point(const int &xpos, const int &ypos) {
            cout << "point x : " << xpos << ", y :" << ypos << endl;
            x = xpos;
            y = ypos;
        };
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
        Rectangle(const int &x1, const int &y1, const int &x2, const int &y2) : up_left(x1, y1), low_right(x2, y2) {
            cout << "rect x1 : " << x1 << ", y1 : " << y1 << ", x2 : " << x2 << ", y2: " << y2 << endl;
            int ul_x = up_left.get_point_x();
            int ul_y = up_left.get_point_y();

            cout << "ul x : " << ul_x << endl;
            cout << "ul y : " << ul_y << endl;

            int lr_x = low_right.get_point_x();
            int lr_y = low_right.get_point_y();          

            cout << "lr x : " << lr_x << endl;
            cout << "lr y : " << lr_y << endl;
        };
        bool init_members(const Point &up_left, const Point &low_right);
        void show_rect_info(Rectangle &rect) const;
        Point get_point_up_left() const;
        Point get_point_low_right() const;
        bool set_point_up_left(const int up_left_arr[]);
        bool set_point_low_right(const int low_right_arr[]);
};

#endif