#include "include/static_cast.hpp"

Car::Car(int fuel) : fuel_gauge(fuel) {

}

Car::~Car() {

}

void Car::show_car_state() {
	std::cout << "remained fule : " << fuel_gauge << "\n";
}

Truck::Truck(int fuel, int weight) : Car(fuel), freight_weight(weight) {

}

Truck::~Truck() {

}

void Truck::show_truck_state() {
	show_car_state();
	std::cout << "weight : " << freight_weight << "\n";
}

void run() {
	Car * pcar1 = new Truck(80, 200);
	Truck * ptruck1 = static_cast<Truck*>(pcar1);
	ptruck1->show_truck_state();
	
	Car * pcar2 = new Car(120);
	Truck * ptruck2 = static_cast<Truck*>(pcar2);
	ptruck2->show_truck_state();
}

int main(void) {
	run();
	return 0;
}
