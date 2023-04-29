#include "include/base_template.hpp"

template <typename T>
T sum(T num1, T num2) {
    return num1 + num2;
}

void sum_executor() {
    std::cout << sum<int>(15, 20) << "\n";
    std::cout << sum<double>(2.9, 3.7) << "\n";
    std::cout << sum<int>(3.2, 3.2) << "\n";
    std::cout << sum<double>(3.14, 2.75) << "\n";
}

template <class T1, class T2>
void show_double(double n) {
    std::cout << (T1)n << ", " << (T2)n << "\n";
}

void show_double_executor() {
    show_double<char, int>(65);
    show_double<char, int>(67);
    show_double<char, double>(68.9);
    show_double<short, double>(69.2);
    show_double<short, double>(70.4);
}

template <typename T>
T compare(T a, T b) {
    return a > b ? a : b;
}

void compare_executor() {
    std::cout << compare(11, 15) << "\n";
    std::cout << compare('T', 'Q') << "\n";
    std::cout << compare(3.5, 7.5) << "\n";
    std::cout << compare("Simple", "Best") << "\n";
}

template <typename T>
T specialize_compare(T a, T b) {
    return a > b ? a : b;
}

template <>
char* specialize_compare(char * a, char * b) {
    std::cout << "char * specialize compare : " << "\n";
    return strlen(a) > strlen(b) ? a : b;
}

template <>
const char* specialize_compare(const char * a, const char * b) {
    std::cout << "const char * specialize compare : " << "\n";
    return strcmp(a, b) > 0 ? a : b;
}

void specialize_compare_executor() {
    std::cout << specialize_compare(11, 15) << "\n";
    std::cout << specialize_compare('T', 'Q') << "\n";
    std::cout << specialize_compare(3.5, 7.5) << "\n";
    std::cout << specialize_compare("simple", "best") << "\n";

    char str1[] = "simple";
    char str2[] = "best";

    std::cout << specialize_compare(str1, str2) << "\n";
}

int main(void) {
    // sum_executor();
    // show_double_executor();
    // compare_executor();
    specialize_compare_executor();
    return 0;
}