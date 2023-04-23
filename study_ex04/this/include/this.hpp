#ifndef THIS
#define THIS

#include <iostream>

using namespace std;

class SoSimple {
    private : 
        int num;
    
    public :
        SoSimple(int n) : num(n) {
            cout << "num : " << num << ", ";
            cout << "address : " << this << endl;
        }
        SoSimple& add_num(int n);
        SoSimple& show_num();
        void show_simple();
        SoSimple * get_this_pointer();
};

#endif