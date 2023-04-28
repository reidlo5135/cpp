#include "include/operator_overloading.hpp"

Point::Point(int x=0, int y=0) : xpos(x), ypos(y) {

}

Point::~Point() {

}

void Point::show_position() const {
    std::cout << '[' << xpos << ", " << ypos << ']' << "\n";
}

Point Point::operator+(const Point &ref) {
    Point pos(xpos + ref.xpos, ypos + ref.ypos);
    return pos;
};

Point operator+(const Point &pos1, const Point &pos2) {
    Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
    return pos;
}

void Point::show_point() {
    Point pos1(3, 4);
    Point pos2(10, 20);
    Point pos3 = pos1.operator+(pos2);

    pos1.show_position();
    pos2.show_position();
    pos3.show_position();
}

void Point::show_second_point() {
    Point pos1(3, 4);
    Point pos2(10, 20);
    Point pos3 = pos1 + pos2;

    pos1.show_position();
    pos2.show_position();
    pos3.show_position();
}

int main(void) {
    Point * p;
    p->show_point();

    Point * p2;
    p2->show_second_point();
}