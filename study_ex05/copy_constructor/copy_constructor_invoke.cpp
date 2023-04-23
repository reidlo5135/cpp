#include "include/copy_constructor_invoke.hpp"

void Simple::show_data() {
    cout << "num : " << num << endl;
}

void simple_func_obj(Simple obj) {
    obj.show_data();
}

Simple& Simple::add_num(int n) {
    num += n;
    return *this;
}

Simple simple_func_obj_with_return(Simple obj) {
    cout << "before return" << endl;
    return obj;
}

int main(void) {
    Simple obj(7);
    simple_func_obj(obj);
    simple_func_obj_with_return(obj).add_num(30).show_data();
    return 0;
}