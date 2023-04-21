#ifndef NAMESPACE
#define NAMESPACE

#include <iostream>

using namespace std;

namespace space_first {
    void func_first(void);
}

namespace space_second {
    void func_second(void);
}

namespace space_third {
    void func_third(void);

    namespace child_third {
        int num1;
        int num2;
    }
}

#endif