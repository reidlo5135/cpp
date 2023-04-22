#include "include/hide_info.hpp"

int Point::get_point_x() const {
    return x;
}

int Point::get_point_y() const {
    return y;
}

bool Point::set_point_x(int xpos) {
    if(xpos < 0 || xpos > 100) {
        cerr<<"point set x : "<<xpos<<" is out of range"<<endl;
        return false;
    }
    x = xpos;
    return true;
}

bool Point::set_point_y(int ypos) {
    if(ypos < 0 || ypos > 100) {
        cerr<<"point set y : "<<ypos<<" is out of range"<<endl;
        return false;
    }
    y = ypos;
    return true;
}

bool Rectangle::init_members(const Point &ul, const Point &lr) {
    if(ul.get_point_x() > lr.get_point_x() || ul.get_point_y() > lr.get_point_y()) {
        cerr<<"rectangle init member wrong parameters"<<endl;
        return false;
    }
    up_left = ul;
    low_right = lr;
    return true;
}

Point Rectangle::get_point_up_left() const {
    return up_left;
}

Point Rectangle::get_point_low_right() const {
    return low_right;
}

bool Rectangle::set_point_up_left(const int up_left_arr[]) {
    up_left.set_point_x(up_left_arr[INDEX]);
    up_left.set_point_y(up_left_arr[INDEX+1]);

    cout<<"ul point x : "<<up_left.get_point_x()<<endl;
    cout<<"ul point y : "<<up_left.get_point_y()<<endl;

    bool is_set_point_done = (up_left.get_point_x() == up_left_arr[INDEX]) && (up_left.get_point_y() == up_left_arr[INDEX+1]);
    return is_set_point_done;
}

bool Rectangle::set_point_low_right(const int low_right_arr[]) {
    low_right.set_point_x(low_right_arr[INDEX]);
    low_right.set_point_y(low_right_arr[INDEX+1]);

    cout<<"lr point x : "<<low_right.get_point_x()<<endl;
    cout<<"lr point y : "<<low_right.get_point_y()<<endl;

    bool is_set_point_done = (low_right.get_point_x() == low_right_arr[INDEX]) && (low_right.get_point_y() == low_right_arr[INDEX+1]);
    return is_set_point_done;
}

void Rectangle::show_rect_info(Rectangle &rect) const {
    cout<<"show rect info up left x : "<<rect.get_point_up_left().get_point_x();
    cout<<", y : "<<rect.get_point_up_left().get_point_y()<<endl;

    cout<<"show rect info low right x : "<<rect.get_point_low_right().get_point_x();
    cout<<", y : "<<rect.get_point_low_right().get_point_y()<<endl;
}

int main(void) {
    int up_left_arr[2] = {1, 2};
    int low_right_arr[2] = {4, 5};

    Rectangle rect;
    bool is_set_point_success = rect.set_point_up_left(up_left_arr) && rect.set_point_low_right(low_right_arr);
    
    if(is_set_point_success) {
        bool is_set_rect_success = rect.init_members(rect.get_point_up_left(), rect.get_point_low_right());
        if(is_set_rect_success) {
            cout<<"initialize rect success"<<endl;
            rect.show_rect_info(rect);
        }
    }

    return 0;
}