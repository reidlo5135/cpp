#ifndef COPY_CONSTRUCTOR_DESTRUCT
#define COPY_CONSTRUCTOR_DESTRUCT

#include <iostream>

using namespace std;

class Temporary {
    private :
        int num;
    public :
        Temporary(int n) : num(n) {
            cout << "create obj : " << num << endl;
        };
        ~Temporary() {
            cout << "destroy obj : " << num << endl;
        };
        void show_temp_info();
};

#endif