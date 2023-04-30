#ifndef SECOND_DYNAMIC_CAST
#define SECOND_DYNAMIC_CAST

#include <iostream>

class SoSimple {
	public :
		SoSimple();
		virtual ~SoSimple();
		virtual void show_simple_info();
};

class SoComplex : public SoSimple {
	public :
		SoComplex();
		virtual ~SoComplex();
		void show_simple_info();
};

#endif
