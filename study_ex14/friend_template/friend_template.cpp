#include "include/friend_template.hpp"

template<typename T>
Point<T>::Point(T x=0, T y=0) : x(x), y(y) {

}

template<typename T>
void Point<T>::show_position() const {
    std::cout << '[' << x << ", " << y << ']' << "\n";
}

Point<int> operator+(const Point<int>&, const Point<int>&) {
    
}

Point<int> operator+(const Point<int>& pos1, const Point<int>& pos2) {
    std::cout << pos1.x << pos2.x << "\n";
    return Point<int>(pos1.x + pos2.x, pos1.y + pos2.y);
}

void show_data() {
    Point<int> p(5, 6);
    Point<int> p2(1, 2);
    p.show_position();
    p2.show_position();
    operator+(p, p2);
}

int main(void) {
    show_data();
    return 0;
}