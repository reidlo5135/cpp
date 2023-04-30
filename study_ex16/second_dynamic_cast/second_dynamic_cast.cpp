#include "include/second_dynamic_cast.hpp"

SoSimple::SoSimple() {

}

SoSimple::~SoSimple() {

}

void SoSimple::show_simple_info() {
	std::cout << "so simple base class " << "\n";
}

SoComplex::SoComplex() {

}

SoComplex::~SoComplex() {

}

void SoComplex::show_simple_info() {
	std::cout << "so complex derived class" << "\n";
}

int main(void) {
	SoSimple * sim_ptr = new SoComplex;
	SoComplex * com_ptr = dynamic_cast<SoComplex*>(sim_ptr);
	com_ptr->show_simple_info();
	return 0;
}
