#include <iostream>
#include "Helicopter.h"

int main() {
    Helicopter h(5690, "RescueChopper");

    std::cout << "Helicopter name: " << h.get_name() << std::endl;
    std::cout << "Initial fuel: " << h.get_fuel() << "%" << std::endl;
    std::cout << "Number of flights: " << h.get_numberOfFlights() << std::endl;

    h.fly(45, 10);

    std::cout << "Fuel after flight: " << h.get_fuel() << "%" << std::endl;
    std::cout << "Number of flights: " << h.get_numberOfFlights() << std::endl;

    return 0;
}
