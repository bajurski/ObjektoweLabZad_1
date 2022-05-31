//
// Created by Arkadiusz Bajura on 28/05/2022.
//

#include <iostream>
#include "car.h"

using namespace std;
int car::numberOfCars = 0;

//Default constructor with initializer list:
car::car() : manufacturer("unknown"), model("unknown"), numOfDoors(0), engineVol(0.0), averageBurn(0.0)
{
    numberOfCars++;
}

//Constructor taking parameters into initialization list.
car::car(std::string manufac, std::string mod, short numDoo, double engVol, double aveBurn,std::string regPl) :manufacturer(manufac),
    model(mod), numOfDoors(numDoo), engineVol(engVol), averageBurn(aveBurn), regPlate(regPl)
{
    numberOfCars++;
}
//Private methods
double car::calcFuelBurn(double distance) {
    double fuelBurn{};
    fuelBurn = (averageBurn*distance)/100.0;
    return fuelBurn;
}
//Public methods
double car::calcTripCost(double tripDistance, double fuelPrice) {
    double tripCost{};
    tripCost = calcFuelBurn(tripDistance) * fuelPrice;
    return tripCost;
}
void car::printInfo() {
    cout<< "+++++ Car data +++++"<<endl;
    cout<<"Car manufacturer : "<< manufacturer << endl;
    cout<<"Car model :        "<< model << endl;
    cout<<"Number of doors :  "<< numOfDoors << endl;
    cout<<"Engine Vol. :      "<< engineVol <<endl;
    cout<<"Average fuel burn  "<< averageBurn <<endl;
    cout<<"--------------------------------------------"<< endl;
}
void car::printNumberOfCars() {
    cout<<"Number of cars created is : " << numberOfCars << endl;
    cout<<"---------------------------------------------"<< endl;
}
//Setters - implementation
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
//Getters - implementation:

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
double car::getFuelBurnOnTrip(double distance) {
    return calcFuelBurn(distance);
}
std::string car::getRegPlate()
{
    return regPlate;
}












