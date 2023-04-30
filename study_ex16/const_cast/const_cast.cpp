#include "include/const_cast.hpp"

void show_string(char * str) {
	std::cout << str << "\n";
}

void show_add_result(int& n1, int& n2) {
	std::cout << n1 + n2 << "\n";
}

int main(void) {
	const char * name = "reidlo";
	show_string(const_cast<char*>(name));

	const int& n1 = 100;
	const int& n2 = 200;
	show_add_result(const_cast<int&>(n1), const_cast<int&>(n2));
	return 0;
}