#include "include/static.hpp"

void counter() {
    static int cnt;
    cnt++;
    cout << "current cnt : " << cnt << endl;
}

int main(void) {
    // for(int i=0;i<10;i++) {
    //     counter();
    // }

    cout << "[" << Simple::sim_obj_cnt << "] simple object" << endl;
    Simple sim1;
    Simple sim2;
    cout << "[" << Simple::sim_obj_cnt << "] simple object" << endl;
    cout << "[" << sim1.sim_obj_cnt << "] simple 1 object" << endl;
    cout << "[" << sim2.sim_obj_cnt << "] simple 2 object" << endl;
    return 0;
}