#ifndef STD_CONTAINER
#define STD_CONTAINER

#include <iostream>

class OsStream {
    public :
        void operator<< (char * str);
        void operator<< (char str);
        void operator<< (int num);
        void operator<< (double e);
        void operator<< (OsStream& (*fp)(OsStream &ostm));
};

OsStream& endl(OsStream &ostm);
OsStream cout;

class AnotherStream {
    public :
        AnotherStream& operator<< (char * str);
        AnotherStream& operator<< (char str);
        AnotherStream& operator<< (int num);
        AnotherStream& operator<< (double e);
        AnotherStream& operator<< (AnotherStream& (*fp)(AnotherStream &ostm));
};

AnotherStream& aendl(AnotherStream &aostm);
AnotherStream acout;

class Point {
    private :
        int xpos;
        int ypos;
    public :
        Point(int x, int y);
        virtual ~Point();
        friend AnotherStream& operator<<(AnotherStream&, const Point&);
};

#endif