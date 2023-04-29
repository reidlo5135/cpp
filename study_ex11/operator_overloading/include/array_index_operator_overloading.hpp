#ifndef ARRAY_INDEX_OPERATOR_OVERLOADING
#define ARRAY_INDEX_OPERATOR_OVERLOADING

#include <iostream>

class BoundChecktIntArray {
    private :
        int * arr;
        int arr_len;
    public :
        BoundChecktIntArray(int len);
        virtual ~BoundChecktIntArray();
        int& operator[] (int idx);
        int operator[] (int idx) const;
        void show_arr();
};

class Point {
    private :
        int x;
        int y;
    public :
        Point();
        Point(int x, int y);
        virtual ~Point();
};

class BoundCheckPointArray {
    private :
        Point * point_arr;
        int arr_len;
        BoundCheckPointArray(const BoundCheckPointArray& arr);
        BoundCheckPointArray& operator=(const BoundCheckPointArray& arr);
    public :
        BoundCheckPointArray(int len);
        virtual ~BoundCheckPointArray();
        Point& operator[] (int idx);
        Point operator[] (int idx) const;
        int get_arr_len() const;
        void show_point_arr() const;
};

#endif