#include "AirFleet.h"
#include <iostream>

AirFleet::AirFleet() {
    fleet = new AirVehicle*[5];

    fleet[0] = new Airplane(20, 10);                  
    fleet[1] = new Helicopter(10000, "BlackHawk");
    fleet[2] = new AirVehicle(5000);                  
    fleet[3] = new Helicopter(100, "WhiteHawk");     
    fleet[4] = new Airplane(15, 20);
}

AirFleet::~AirFleet() {
    for (int i = 0; i < 5; i++) {
        delete fleet[i];
    }
    delete[] fleet;
}

AirVehicle** AirFleet::get_fleet() const {
    return fleet;
}
