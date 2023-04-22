#ifndef ENCAPSULATION
#define ENCAPSULATION

#include <iostream>

class CONTAC600 {
    private :
        SinivelCap sin;
        SneezeCap sne;
        SnuffleCap snu;
    public :
        void take() const {
            sin.take();
            sne.take();
            snu.take();
        }
};

class SinivelCap {
    public :
        void take() const;
};

class SneezeCap {
    public :
        void take() const;
};

class SnuffleCap {
    public :
        void take() const;
};

#endif