#include "include/std_container.hpp"

void OsStream::operator<<(char * str) {
    printf("%s", str);
}

void OsStream::operator<<(char str) {
    printf("%c", str);
}

void OsStream::operator<<(int num) {
    printf("%d", num);
}

void OsStream::operator<<(double e) {
    printf("%g", e);
}

void OsStream::operator<<(OsStream& (*fp)(OsStream &ostm)) {
    fp(*this);
}

OsStream& endl(OsStream &ostm) {
    ostm << '\n';
    fflush(stdout);
    return ostm;
}

AnotherStream& AnotherStream::operator<<(char * str) {
    printf("%s", str);
    return *this;
}

AnotherStream& AnotherStream::operator<<(char str) {
    printf("%c", str);
    return *this;
}

AnotherStream& AnotherStream::operator<<(int num) {
    printf("%d", num);
    return *this;
}

AnotherStream& AnotherStream::operator<<(double e) {
    printf("%g", e);
    return *this;
}

AnotherStream& AnotherStream::operator<<(AnotherStream& (*fp)(AnotherStream &ostm)) {
    return fp(*this);
}

AnotherStream& aendl(AnotherStream &aostm) {
    aostm << '\n';
    fflush(stdout);
    return aostm;
}

Point::Point(int x=0, int y=0) : xpos(x), ypos(y) {
    std::cout << "Point constructor invoked " << "\n";
}

Point::~Point() {
    std::cout << "Point destructor invoked " << "\n";
}

AnotherStream& operator<<(AnotherStream& aos, const Point& pos) {
    aos << '[' << pos.xpos << ", " << pos.ypos << ']' << aendl;
    return aos;
}

int main(void) {
    cout << "simple string";
    cout << endl;
    cout << 3.14;
    cout << endl;
    cout << 123;
    endl(cout);

    acout << "simple string second" << aendl << 3.14 << aendl;
    aendl(acout);

    Point pos(100, 150);
    acout << pos;
    return 0;
}