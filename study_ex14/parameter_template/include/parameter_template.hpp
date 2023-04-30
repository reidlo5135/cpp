#ifndef PARAMETER_TEMPLATE
#define PARAMETER_TEMPLATE

#include <iostream>

template<typename T = int, int len = 7>
class SimpleArray {
	private :
		T arr[len];
	public :
		T& operator[] (int idx);
		SimpleArray<T, len>& operator=(const SimpleArray<T, len> &ref);
};

void show_arr();

#endif