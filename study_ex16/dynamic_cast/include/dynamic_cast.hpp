#ifndef DYNAMIC_CAST
#define DYNAMIC_CAST

#include <iostream>

class Car {
	private :
		int fuel_gauge;
	public :
		Car(int fuel);
		virtual ~Car();
		void show_car_state();
};

class Truck : public Car {
	private :
		int freight_weight;
	public :
		Truck(int fuel, int weight);
		virtual ~Truck();
		void show_truck_state();
};

void run();

#endif
