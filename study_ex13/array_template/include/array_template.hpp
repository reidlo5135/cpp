#ifndef ARRAY_TEMPLATE
#define ARRAY_TEMPLATE

#include <iostream>

template <typename T>
class BoundCheckArray {
    private :
        T * arr;
        int arr_len;
        BoundCheckArray(const BoundCheckArray& arr);
        BoundCheckArray& operator=(const BoundCheckArray& arr);
    public :
        BoundCheckArray(int len);
        virtual ~BoundCheckArray();
        T& operator[] (int idx);
        T operator[] (int idx) const;
        int get_arr_len() const;
};

void show_arr();

#endif