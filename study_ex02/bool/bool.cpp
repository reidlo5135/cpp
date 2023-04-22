#include "include/bool.hpp"

void without_bool() {
    int num = 10;
    int i = 0;

    cout<<"true : "<<true<<endl;
    cout<<"false : "<<false<<endl;

    while(true) {
        cout<<i++<<' ';
        if(i>num) break;
    }

    cout<<endl;

    cout<<"sizeof 1 : "<<sizeof(1)<<endl;
    cout<<"sizeof 0 : "<<sizeof(0)<<endl;
    cout<<"sizeof true : "<<sizeof(true)<<endl;
    cout<<"sizeof false : "<<sizeof(false)<<endl;
}

void with_bool() {
    bool isPos;
    int num;

    cout<<"input number : ";
    cin>>num;
    
    isPos = is_positive(num);
    if(isPos) {
        cout<<"positive number"<<endl;
    } else {
        cout<<"negative number"<<endl;
    }    
}

bool is_positive(int num) {
    if(num<0) {
        return false;
    }
    else {
        return true;
    }
}

int main(void) {
    // without_bool();
    with_bool();
    return 0;
}