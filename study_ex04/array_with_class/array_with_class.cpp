#include "include/array_with_class.hpp"

int main(void) {
    Person * arr[3];
    arr[0] = new Person("reidlo", 25);
    arr[1] = new Person("reidlo_two", 26);
    arr[2] = new Person("reidlo_three", 27);
    return 0;
}