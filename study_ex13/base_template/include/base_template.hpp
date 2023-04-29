#ifndef TEMPLATE_ONE
#define TEMPLATE_ONE

#include <iostream>
#include <cstring>

template <typename T>
T sum(T num1, T num2);

void sum_executor();

template <class T1, class T2>
void show_double(double n);

void show_double_executor();

template <typename T>
T compare(T a, T b);

void compare_executor();

template <typename T>
T specialize_compare(T a, T b);

template <>
char* specialize_compare(char * a, char * b);

template <>
const char* specialize_compare(const char * a, const char * b);

void specialize_compare_executor();

#endif