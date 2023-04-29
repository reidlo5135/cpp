#include "include/array_template.hpp"

template <typename T>
BoundCheckArray<T>::BoundCheckArray(int len) : arr_len(len) {
    arr = new int[len];
}

template <typename T>
BoundCheckArray<T>::~BoundCheckArray<T>() {
    delete []arr;
}

template <typename T>
T& BoundCheckArray<T>::operator[] (int idx) {
    if(idx < 0 || idx >= arr_len) {
        std::cout << "Array index out of bound" << "\n";
        exit(1);
    }
    return arr[idx];
}

template <typename T>
T BoundCheckArray<T>::operator[] (int idx) const {
    if(idx < 0 || idx >= arr_len) {
        std::cout << "[const] Array index out of bound" << "\n";
        exit(1);
    }
    return arr[idx];
}

void show_arr() {
    BoundCheckArray<int> arr(5);
    for(int i=0;i<5;i++) {
        arr[i] = (i + 1) * 11;
    }
    for(int j=0;j<6;j++) {
        std::cout << "arr[" << j << "] : " << arr[j] << "\n";
    }
}

int main(void) {
    show_arr();
    return 0;
}