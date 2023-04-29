#include "include/class_template.hpp"

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y) {

}

template <typename T>
Point<T>::~Point() {

}

template <typename T>
void Point<T>::show_position() const {
    std::cout << '[' << xpos << ", " << ypos << ']' << "\n";
}

void point_data() {
    Point<int> pos1(3, 4);
    pos1.show_position();

    Point<double> pos2(2.4, 3.6);
    pos2.show_position();

    Point<char> pos3('P', 'F');
    pos3.show_position();
}

int main(void) {
    point_data();
    return 0;
}