#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirVehicle.h"
#include "Helicopter.h"
#include "Airplane.h"

class AirFleet {
private:
    AirVehicle** fleet;

public:
    AirFleet();

    ~AirFleet();

    AirVehicle** get_fleet() const;
};

#endif
