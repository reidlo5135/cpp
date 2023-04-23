#ifndef MUTABLE
#define MUTABLE

#include <iostream>

using namespace std;

class CountryArea {
    private :
        int num1;
        mutable int num2;
    public :
        CountryArea(int n1, int n2) : num1(n1), num2(n2) {};
        const static int GERMANY = 1707540;
        const static int CANADA = 998467;
        const static int CHINA = 957290;
        const static int SOUTH_KOREA = 9922;

        void copy_to_num2() const;
        void show_data();
};

#endif