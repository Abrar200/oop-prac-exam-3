#include <iostream>
#include "AirFleet.h"

int main() {
    AirFleet airFleet;

    AirVehicle** fleet = airFleet.get_fleet();

    for (int i = 0; i < 5; i++) {
        std::cout << "AirVehicle " << i + 1 << " info:" << std::endl;
        std::cout << "Weight: " << fleet[i]->get_weight() << " kg" << std::endl;
        std::cout << "Fuel: " << fleet[i]->get_fuel() << "%" << std::endl;
        std::cout << "Number of flights: " << fleet[i]->get_numberOfFlights() << std::endl;

        Helicopter* helicopter = dynamic_cast<Helicopter*>(fleet[i]);
        if (helicopter) {
            std::cout << "Helicopter name: " << helicopter->get_name() << std::endl;
        }

        Airplane* airplane = dynamic_cast<Airplane*>(fleet[i]);
        if (airplane) {
            std::cout << "Number of passengers: " << airplane->get_numPassengers() << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}
