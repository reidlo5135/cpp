#include "include/stack_unwindling_handling.hpp"

int stoi(char * str) {
	int len = strlen(str);
	int num = 0;

	for(int i=0;i<len;i++) {
		if(str[i] < '0' || str[i] > '9') {
			throw str[i];
		}
		num += (int)(pow((double)10, (len-1) - i ) * (str[i] + (7 - '7')));
	}
	return num;
}

void run() {
	char str1[100];
	char str2[200];

	while(1) {
		std::cout << "input two numbers : ";
		std::cin >> str1 >> str2;
		try {
			std::cout << str1 << " + " << str2 << " = " << stoi(str1) + stoi(str2) << "\n";
			break;
		} catch(char ch) {
			std::cout << "character : " << ch << "in" << "\n";
			std::cout << "rerun" << "\n" << "\n";
		}
		std::cout << "terminate program" << "\n";
	}
}

int main(void) {
	run();
	return 0;
}