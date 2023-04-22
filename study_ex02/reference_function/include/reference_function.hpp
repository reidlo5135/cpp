#ifndef REFERENCE_FUNCTION
#define REFERENCE_FUNCTION

#include <iostream>

using namespace std;

void swap_by_ref(int &ref1, int &ref2);
void const_ref(const int &ref);
int& return_ref(int &ref);
int return_var(int &ref);

#endif