#include "Helicopter.h"
#include <iostream>

Helicopter::Helicopter() : AirVehicle(), name("") {}

Helicopter::Helicopter(int w, std::string n) : AirVehicle(w), name(n) {}

std::string Helicopter::get_name() const {
    return name;
}

void Helicopter::set_name(std::string n) {
    name = n;
}

void Helicopter::fly(int headwind, int minutes) {
    if (get_fuel() < 20.0) {
        std::cout << "Not enough fuel to take off." << std::endl;
        return;
    }

    float fuelConsumedPerMinute = 0.18;
    if (headwind >= 40) {
        fuelConsumedPerMinute = 0.40;
    }

    int weightOverLimit = get_weight() - 5670;
    float extraFuel = 0.0;
    if (weightOverLimit > 0) {
        extraFuel = 0.01 * (weightOverLimit / 1000.0f);
    }

    float totalFuelConsumed = (fuelConsumedPerMinute * minutes) + (extraFuel * minutes);

    float newFuel = get_fuel() - totalFuelConsumed;

    if (newFuel < 20.0) {
        std::cout << "Insufficient fuel to complete flight." << std::endl;
        return;
    }

    set_fuel(newFuel);
    set_numberOfFlights(get_numberOfFlights() + 1);

    std::cout << "Fuel after flight: " << newFuel << "%" << std::endl;
}
