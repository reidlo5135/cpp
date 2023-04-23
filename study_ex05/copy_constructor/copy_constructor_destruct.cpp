#include "include/copy_constructor_destruct.hpp"

void Temporary::show_temp_info() {
    cout << "my num is" << num << endl;
}

int main(void) {
    Temporary(100);
    cout << "****** after make ******" << endl << endl;

    Temporary(200).show_temp_info();
    cout << "****** after make ******" << endl << endl;

    const Temporary &ref = Temporary(300);
    cout << "****** after make ******" << endl << endl;
    return 0;
}