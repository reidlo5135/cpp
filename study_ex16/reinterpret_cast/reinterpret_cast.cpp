#include "include/reinterpret_cast.hpp"

void run() {
	int n = 0x010203;
	char * ptr = reinterpret_cast<char*>(&n);

	for(int i=0;i<sizeof(n);i++) {
		std::cout << static_cast<int>(*(ptr + i )) << "\n";
	}
}

int main(void) {
	run();
	return 0;
}