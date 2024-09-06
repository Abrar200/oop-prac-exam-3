#include <iostream>
#include "Airplane.h"

int main() {
    Airplane a(5000, 100);

    std::cout << "Number of passengers: " << a.get_numPassengers() << std::endl;
    std::cout << "Initial fuel: " << a.get_fuel() << "%" << std::endl;
    std::cout << "Number of flights: " << a.get_numberOfFlights() << std::endl;

    a.fly(65, 120);

    std::cout << "Fuel after flight: " << a.get_fuel() << "%" << std::endl;
    std::cout << "Number of flights: " << a.get_numberOfFlights() << std::endl;

    a.reducePassengers(50);
    std::cout << "Number of passengers after reducing: " << a.get_numPassengers() << std::endl;

    return 0;
}
