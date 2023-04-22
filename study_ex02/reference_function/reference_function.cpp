#include "include/reference_function.hpp"

void swap_by_ref(int &ref1, int &ref2) {
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

void const_ref(const int &ref) {
    cout<<ref<<endl;
}

int& return_ref(int &ref) {
    cout<<"return_ref before ref : "<<ref<<endl;
    ref++;
    cout<<"return_ref after ref : "<<ref<<endl;
    return ref;
}

int return_var(int &ref) {
    cout<<"return_var before ref : "<<ref<<endl;
    ref++;
    cout<<"return_var after ref : "<<ref<<endl;
    return ref;
}

int main(void) {
    int val1 = 10;
    int val2 = 20;
    swap_by_ref(val1, val2);
    cout<<"val1 : "<<val1<<endl;
    cout<<"val2 : "<<val2<<endl;

    int num = 24;
    const_ref(num);

    int &num2 = return_ref(num);
    int num3 = return_var(num);

    cout<<"before num : "<<num<<endl;
    cout<<"before num2 : "<<num2<<endl;
    cout<<"before num3 : "<<num3<<endl;

    num++;
    num2++;
    num3++;

    cout<<"after num : "<<num<<endl;
    cout<<"after num2 : "<<num2<<endl;
    cout<<"after num3 : "<<num3<<endl;

    return 0;
}