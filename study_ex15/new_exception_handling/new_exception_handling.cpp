#include "include/new_exception_handling.hpp"

void run() {
	int n = 0;
	try {
		while(1) {
			n++;
			std::cout << n << "st allocate" << "\n";
			new int[10000][10000];
		}
	} catch(bad_alloc &bad) {
		std::cerr << bad.what() << "\n";
		std::cerr << "can't allocate any more" << "\n";
	}
}

int main(void) {
	run();
	return 0;
}
