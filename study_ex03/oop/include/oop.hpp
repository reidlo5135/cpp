#ifndef OOP
#define OOP

#include <iostream>

using namespace std;

class FruitSeller {
    private :
        int APPLE_PRICE;
        int num_of_apple;
        int my_money;

    public :
        void init_members(int price, int num, int money);
        int sale_apples(int money);
        void show_sale_result();
};

#endif