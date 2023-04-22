#ifndef STRUCT
#define STRUCT

#include <iostream>

#define BREAK 0

using namespace std;

struct Car {
    char * gamer_id;
    string gamer;
    unsigned int fuel;
    unsigned int cur_speed;

    void show_car_state(Car car);
    void accel(unsigned int cur_speed);
    void stop(unsigned int cur_speed);
};

struct Boat {
    enum {
        ID_LEN = 20,
        MAX_SPEED = 200,
        FUEL_STEP = 2,
        ACCEL_STEP = 10,
        BREAK_STEP = 10
    };

    char * gamer_id;
    unsigned int fuel_gauge;
    unsigned int cur_speed;

    void show_boat_sate(Boat boat);
    void accel(unsigned int cur_speed);
    void stop(unsigned int cur_speed);
};

#endif