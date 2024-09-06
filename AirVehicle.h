#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle {
private:
    int weight;
    float fuel;
    int numberOfFlights;

public:
    AirVehicle();
    AirVehicle(int w);

    int get_weight() const;
    void set_weight(int w);

    float get_fuel() const;
    void set_fuel(float f);

    int get_numberOfFlights() const;
    void set_numberOfFlights(int nf);


    void refuel();
    virtual void fly(int headwind, int minutes);
};

#endif
