#include "include/try_exception_handling.hpp"

void try_throwing() {
	int num1;
	int num2;

	std::cout << "input two numbers : ";
	std::cin >> num1 >> num2;

	try {
		if(num2 == 0) throw num2;
		std::cout << "divide result quotient : " << num1 / num2 << "\n";
		std::cout << "divide result remainder : " << num1 % num2 << "\n";
	} catch(int expn) {
		std::cout << "num2 can't be " << expn << "\n";
		std::cout << "rerun program" << "\n";
	}
	std::cout << "end of main" << "\n";
}

int main(void) {
	try_throwing();
	return 0;
}