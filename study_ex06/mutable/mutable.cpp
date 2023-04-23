#include "include/mutable.hpp"

void CountryArea::copy_to_num2() const {
    num2 = num1;
}

void CountryArea::show_data() {
    copy_to_num2();
    cout << "num 1 : " << num1 << endl;
    cout << "num 2 : " << num2 << endl;
}

int main(void) {
    cout << "GERMANY area : " << CountryArea::GERMANY << "km" << endl;
    cout << "CANADA area : " << CountryArea::CANADA << "km" << endl;
    cout << "CHINA area : " << CountryArea::CHINA << "km" << endl;
    cout << "SOUTH_KOREA area : " << CountryArea::SOUTH_KOREA << "km" << endl;

    CountryArea ca(1, 2);
    ca.show_data();
    return 0;
}