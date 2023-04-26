#include "include/member_virtual_function.hpp"

void show_data(Data* THIS) {
    std::cout << "Data : " << THIS->data << "\n";
}

void add(Data* THIS, int num) {
    THIS->data += num;
}

void AAA::func1() {
    std::cout << "AAA func1 : " << "\n";
}

void AAA::func2() {
    std::cout << "AAA func2 : " << "\n";
}

void BBB::func1() {
    std::cout << "BBB func1 : " << "\n";
}

int main(void) {
    // Data data1 = {15, show_data, add};
    // Data data2 = {7, show_data, add};

    // data1.add(&data1, 17);
    // data2.add(&data2, 9);

    // data1.show_data(&data1);
    // data2.show_data(&data2);

    AAA * aptr = new AAA();
    aptr->func1();

    BBB * bptr = new BBB();
    bptr->func1();

    return 0;
}