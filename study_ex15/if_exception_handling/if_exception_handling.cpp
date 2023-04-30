#include "include/if_exception_handling.hpp"

void if_throwing() {
	int num1;
	int num2;
	std::cout << "input two numbers : ";
	std::cin >> num1 >> num2;

	if(num2 == 0) {
		std::cout << "number can't be 0" << "\n";
		std::cout << "rerun program" << "\n";
	} else {
		std::cout << "divide result quotient : " << num1 / num2 << "\n";
		std::cout << "divide result remainder : " << num1 % num2 << "\n";
	}
}

int main(void) {
	if_throwing();
	return 0;
}