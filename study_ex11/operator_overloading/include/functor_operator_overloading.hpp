#ifndef FUNCTOR_OPERATOR_OVERLOADING
#define FUNCTOR_OPERATOR_OVERLOADING

#include <iostream>

class Adder {
    public :
        Adder();
        virtual ~Adder();
        int operator()(const int& n1, const int& n2);
        double operator()(const double& e1, const double& e2);
        void show_adder() const;
};

class SortRule {
    public :
        SortRule();
        virtual ~SortRule();
        virtual bool operator()(int num1, int num2) const =0;
        void sort_data(const SortRule& functor);
};

class AscendingSort : public SortRule {
    public :
        AscendingSort();
        virtual ~AscendingSort();
        bool operator()(int num1, int num2) const;
};

class DescendingSort : public SortRule {
    public:
        DescendingSort();
        virtual ~DescendingSort();
        bool operator()(int num1, int num2) const;
};

class Number {
    private :
        int num;
    public :
        Number(int n);
        virtual ~Number();
        Number& operator=(const Number& ref);
        operator int ();
        void show_number() const;
        void show_data() const;
};

#endif