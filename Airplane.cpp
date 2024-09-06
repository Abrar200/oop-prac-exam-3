#include "Airplane.h"
#include <iostream>

Airplane::Airplane() : AirVehicle(), numPassengers(0) {}

Airplane::Airplane(int w, int p) : AirVehicle(w), numPassengers(p) {}

int Airplane::get_numPassengers() const {
    return numPassengers;
}

void Airplane::reducePassengers(int x) {
    numPassengers -= x;
    if (numPassengers < 0) {
        numPassengers = 0;
    }
}

void Airplane::fly(int headwind, int minutes) {
    if (get_fuel() < 20.0) {
        std::cout << "Not enough fuel to take off." << std::endl;
        return;
    }

    float fuelConsumedPerMinute = 0.25;
    if (headwind >= 60) {
        fuelConsumedPerMinute = 0.50;
    }

    float extraFuelPerPassenger = 0.001 * numPassengers;
    float totalFuelConsumed = (fuelConsumedPerMinute * minutes) + (extraFuelPerPassenger * minutes);

    float newFuel = get_fuel() - totalFuelConsumed;

    if (newFuel < 20.0) {
        std::cout << "Insufficient fuel to complete flight." << std::endl;
        return;
    }

    set_fuel(newFuel);
    set_numberOfFlights(get_numberOfFlights() + 1);

    std::cout << "Fuel after flight: " << newFuel << "%" << std::endl;
}
