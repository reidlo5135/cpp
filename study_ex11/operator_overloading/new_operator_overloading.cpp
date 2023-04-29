#include "include/new_operator_overloading.hpp"

Point::Point(int x=0, int y=0) : xpos(x), ypos(y) {

}

Point::~Point() {

}

void * Point::operator new(size_t size) {
    std::cout << "operator new : " << size << "\n";
    void * adr = new char[size];
    return adr;
}

void Point::operator delete(void * adr) {
    std::cout << "operator delete" << "\n";
    delete []adr;
}

void Point::show_point() const {
    Point * ptr = new Point(3, 4);
    delete ptr;
}

Number::Number(int n) : num(n) {

}

Number::~Number() {
    
}

void Number::show_data() const {
    std::cout << num << "\n";
}

Number * Number::operator->() {
    return this;
}

Number& Number::operator*() {
    return *this;
}

void Number::show_number() const {
    Number num(20);
    num.show_data();

    (*num) = 30;
    num->show_data();
    (*num).show_data();
}

SmartPtr::SmartPtr(Point * ptr) : pptr(ptr) {

}

SmartPtr::~SmartPtr() {
    delete pptr;
}

Point& SmartPtr::operator*() const {
    return *pptr;
}

Point* SmartPtr::operator->() const {
    return pptr;
}

void SmartPtr::set_pos(int x, int y) {
    Point p(x, y);
}

void SmartPtr::show_smart_point() const {
    SmartPtr sptr1(new Point(1, 2));
    SmartPtr sptr2(new Point(2, 3));
    SmartPtr sptr3(new Point(3, 4));
    sptr1.set_pos(10, 20);
    sptr2.set_pos(15, 25);
    sptr3.set_pos(20, 30);
}

int main(void) {
    Point * p;
    p->show_point();

    Number * n;
    n->show_number();

    SmartPtr * sptr;
    sptr->show_smart_point();
    return 0;
}