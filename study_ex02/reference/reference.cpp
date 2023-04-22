#include "include/reference.hpp"

void ref() {
    int num1 = 1020;
    int &num2 = num1;

    num2 = 3047;

    cout<<"VAL : "<<num1<<endl;
    cout<<"REF : "<<num2<<endl;
    
    cout<<"VAL : "<<&num1<<endl;
    cout<<"REF : "<<&num2<<endl;
}

void ref_arragne(int arr[]) {
    int &ref1 = arr[0];
    int &ref2 = arr[1];
    int &ref3 = arr[2];

    cout<<ref1<<endl;
    cout<<ref2<<endl;
    cout<<ref3<<endl;
}

void ref_pointer(int num) {
    int * ptr = &num;
    int **dptr = &ptr;

    int &ref = num;
    int *(&pref) = ptr;
    int **(&dpref) = dptr;

    cout<<ref<<endl;
    cout<<*pref<<endl;
    cout<<**dpref<<endl;
}

int main(void) {
    ref();

    int arr[3] = {1, 2, 3};
    ref_arragne(arr);

    int num = 12;
    ref_pointer(num);
    return 0;
}