#include <iostream>
#include "AirVehicle.h"

int main() {
    AirVehicle av(5000);

    std::cout << "Initial weight: " << av.get_weight() << " kg" << std::endl;
    std::cout << "Initial fuel: " << av.get_fuel() << "%" << std::endl;
    std::cout << "Number of flights: " << av.get_numberOfFlights() << std::endl;

    av.fly(50, 30);

    std::cout << "Fuel after flight: " << av.get_fuel() << "%" << std::endl;
    std::cout << "Number of flights after flying: " << av.get_numberOfFlights() << std::endl;

    av.refuel();
    std::cout << "Fuel after refuel: " << av.get_fuel() << "%" << std::endl;

    return 0;
}
