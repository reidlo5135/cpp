#include "include/oop.hpp"

void FruitSeller::init_members(int price, int num, int money) {
    cout<<"init member price : "<<price<<", num : "<<num<<", money : "<<money<<endl;
    APPLE_PRICE = price;
    num_of_apple = num;
    my_money = money;
}

int FruitSeller::sale_apples(int money) {
    cout<<"sale price : "<<APPLE_PRICE<<", remained : "<<num_of_apple<<", my money : "<<my_money<<endl;
    int num = money / APPLE_PRICE;
    num_of_apple -= num;
    my_money += money;
    return num;
}

void FruitSeller::show_sale_result() {
    cout<<"remained apples : "<<num_of_apple<<endl;
    cout<<"earned money : "<<my_money<<endl;
}

int main(void) {
    int price = 1000;
    int num = 20;
    int money = 10000;

    FruitSeller fs;
    fs.init_members(price, num, money);
    int number = fs.sale_apples(money);
    cout<<"sale apples number : "<<number<<endl;
    fs.show_sale_result();

    return 0;
}