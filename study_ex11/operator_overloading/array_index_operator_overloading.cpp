#include "include/array_index_operator_overloading.hpp"

BoundChecktIntArray::BoundChecktIntArray(int len) : arr_len(len) {
    arr = new int[len];
}

BoundChecktIntArray::~BoundChecktIntArray() {
    delete []arr;
}

int& BoundChecktIntArray::operator[] (int idx) {
    if(idx < 0 || idx >= arr_len) {
        std::cout << "Array index out of bound" << "\n";
        exit(1);
    }
    return arr[idx];
}

int BoundChecktIntArray::operator[] (int idx) const {
    if(idx < 0 || idx >= arr_len) {
        std::cout << "[const] Array index out of bound" << "\n";
        exit(1);
    }
    return arr[idx];
}

void BoundChecktIntArray::show_arr() {
    BoundChecktIntArray arr(5);
    for(int i=0;i<5;i++) {
        arr[i] = (i + 1) * 11;
    }
    for(int j=0;j<6;j++) {
        std::cout << "arr[" << j << "] : " << arr[j] << "\n";
    }
}

Point::Point(int x, int y) : x(x), y(x) {

}

Point::~Point() {
    
}

BoundCheckPointArray::BoundCheckPointArray(int len) : arr_len(len) {
    point_arr = new Point[len];
}

BoundCheckPointArray::~BoundCheckPointArray() {
    delete []point_arr;
}

Point& BoundCheckPointArray::operator[] (int idx) {
    if(idx < 0 || idx >= arr_len) {
        std::cout << "Point Array index out of bound" << "\n";
        exit(1);
    }
    return point_arr[idx];
}

Point BoundCheckPointArray::operator[] (int idx) const {
    if(idx < 0 || idx >= arr_len) {
        std::cout << "[const] Point Array index out of bound" << "\n";
        exit(1);
    }
    return point_arr[idx];
}

int BoundCheckPointArray::get_arr_len() const {
    return arr_len;
}

void BoundCheckPointArray::show_point_arr() const {
    BoundCheckPointArray point_arr(3);
    point_arr[0] = Point(3, 4);
    point_arr[1] = Point(5, 6);
    point_arr[2] = Point(7, 8);

    for(int i=0;i<point_arr.get_arr_len();i++) {
        std::cout << "point_arr[" << i << "] : " << "\n";
    }
}

int main(void) {
    BoundChecktIntArray * b;
    b->show_arr();

    BoundCheckPointArray * p;
    p->show_point_arr();
    return 0;
}