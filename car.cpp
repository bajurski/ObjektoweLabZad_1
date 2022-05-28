//
// Created by Arkadiusz Bajura on 28/05/2022.
//

#include "car.h"

int car::numberOfCars = 0;

//Default constructor with initializer list:
car::car() : manufacturer("unknown"), model("unknown"), numOfDoors(0), engineVol(0.0), averageBurn(0.0)
{
    ++numberOfCars;
}

//Constructor taking parameters into initialization list.
car::car(std::string manufac, std::string mod, short numDoo, double engVol, double aveBurn) :manufacturer(manufac),
    model(mod), numOfDoors(numDoo), engineVol(engVol), averageBurn(aveBurn)
{
    ++numberOfCars;
}
void car::setManufacturer(std::string manu)
{
    manufacturer = manu;
}
void car::setModel(std::string mod)
{
    model = mod;
}
void car::setNumOfDoors(short numOfDo)
{
    numOfDoors = numOfDo;
}
void car::setEngVol(double engVol)
{
    engineVol = engVol;
}
void car::setAverBurn(double avBurn)
{
    averageBurn = avBurn;
}
std::string car::getManufacturer()
{
    return manufacturer;
}
std::string car::getModel()
{
    return model;
}
short car::getNumOfDoors()
{
    return numOfDoors;
}
double car::getEngVol()
{
    return engineVol;
}
double car::getAverBurn()
{
    return averageBurn;
}




