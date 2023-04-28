#include "include/single_operator_overloading.hpp"

Point::Point(int x=0, int y=0) : xpos(x), ypos(y) {
    std::cout << "Point constructor invoked" << "\n";
}

Point::~Point() {
    std::cout << "Point destructor invoked" << "\n";
}

void Point::show_position() const {
    std::cout << '[' << xpos << ", " << ypos << ']' << "\n";
}

Point& Point::operator++() {
    xpos += 1;
    ypos += 1;
    return *this;
}

Point& operator--(Point &ref) {
    ref.xpos -= 1;
    ref.ypos -= 1;
    return ref;
}

void Point::show_point() {
    Point pos(1, 2);
    ++pos;
    pos.show_position();
    --pos;
    pos.show_position();
    ++(++pos);
    pos.show_position();
    --(--pos);
    pos.show_position();
}

Point operator*(int times, Point &ref) {
    std::cout << "point times : " << times << "\n";
    Point pos(ref.xpos * times, ref.ypos * times);
    return pos;
}

void Point::show_times_point() {
    int times = 5;
    Point pos(3, 4);
    Point pos1 = operator*(5, pos);
    pos1.show_position();
}

int main(void) {
    Point * p;
    p->show_point();
    p->show_times_point();

    return 0;
}