#include "include/parameter_template.hpp"

template<typename T, int len>
T& SimpleArray<T, len>::operator[] (int idx) {
	return arr[idx];
}

template<typename T, int len>
SimpleArray<T, len>& SimpleArray<T, len>::operator=(const SimpleArray<T, len> &ref) {
	for(int i=0;i<len;i++) {
		arr[i] = ref.arr[i];
	}
}

void show_arr() {
	SimpleArray<> arr;

	for(int i=0;i<7;i++) {
		arr[i] = i + 1;
	}

	for(int j=0;j<7;j++) {
		std::cout<< arr[j] << " ";
	}
    
	std::cout << "\n";
}

int main(void) {
	show_arr();
	return 0;
}