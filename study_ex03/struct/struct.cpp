#include "include/struct.hpp"

void Car::show_car_state(Car car) {
    cout<<"car id : "<<car.gamer_id<<endl;
    cout<<"car gamer : "<<car.gamer<<endl;
    cout<<"car fuel : "<<car.fuel<<endl;
    cout<<"car current speed : "<<car.cur_speed<<endl;
}

void Car::accel(unsigned int cur_speed) {
    cur_speed++;
    cout<<"car accel curent speed : "<<cur_speed<<endl;
}

void Car::stop(unsigned int cur_speed) {
    cur_speed = 0;
    cout<<"car stop current speed : "<<cur_speed<<endl;
}

void Boat::show_boat_sate(Boat boat) {
    cout<<"boat id : "<<boat.gamer_id<<endl;
    cout<<"boat fuel : "<<boat.fuel_gauge<<endl;
    cout<<"boat current speed : "<<boat.cur_speed<<endl;
}

void Boat::accel(unsigned int cur_speed) {
    cur_speed++;
    cout<<"boat accel current speed : "<<cur_speed<<endl;
}

void Boat::stop(unsigned int cur_speed) {
    cur_speed = BREAK;
    cout<<"boat stop current speed : "<<cur_speed<<endl;
}

int main(void) {
    char * gamer_id = "on";
    string gamer = "reidlo";
    unsigned int fuel = 5;
    unsigned int cur_speed = 50;

    Car car = {gamer_id, gamer, fuel, cur_speed};
    car.show_car_state(car);
    car.accel(car.cur_speed);
    car.stop(car.cur_speed);

    cout<<endl;

    Boat boat = {gamer_id, fuel, cur_speed};
    boat.show_boat_sate(boat);
    boat.accel(boat.cur_speed);
    boat.stop(boat.cur_speed);

    return 0;
}