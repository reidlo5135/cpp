#ifndef STATIC_TEMPLATE
#define STATIC_TEMPLATE

#include <iostream>

template<typename T>
void show_static_value(void);
void show_entire_value();

template<typename T>
class SimpleStaticMem {
	private :
		static T mem;
	public :
		void add_mem(T num);
		void show_mem();
};

template<>
int SimpleStaticMem<int>::mem = 0;

template<>
double SimpleStaticMem<double>::mem = 0.0;

#endif