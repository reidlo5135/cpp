#include "include/static_template.hpp"

template<typename T>
void show_static_value(void) {
	static T n = 0;
	n += 1;
	std::cout << n << "";
}

void show_entire_value() {
	show_static_value<int>();
	show_static_value<int>();
	show_static_value<int>();

	std::cout << "\n";

	show_static_value<long>();
	show_static_value<long>();
	show_static_value<long>();

	std::cout << "\n";

	show_static_value<double>();
	show_static_value<double>();
	show_static_value<double>();

	std::cout << "\n";
}

template<typename T>
void SimpleStaticMem<T>::add_mem(T num) {
	mem += num;
}

template<typename T>
void SimpleStaticMem<T>::show_mem() {
	std::cout << mem << "\n";
}

int main(void) {
	// show_entire_value();
	SimpleStaticMem<int> * simple_int;
	simple_int->show_mem();
	simple_int->add_mem(5);
	simple_int->show_mem();

	SimpleStaticMem<double> * simple_double;
	simple_double->show_mem();
	simple_double->add_mem(7.7);
	simple_double->show_mem();

	return 0;
}