//
// Created by Arkadiusz Bajura on 29/05/2022.
//

#include "garage.h"
#include "car.h"
#include <iostream>

using namespace std;

//Default constructor with initializer list:
garage::garage() : address ("Unknown"), capacity (0)
{

}
//Constructor taking parameters into initialization list.
garage::garage(std::string addr, short capa) :  address(addr), capacity(capa)
{
    //car cars[capacity];
      cars = new car[capacity];
}
//Destructor:
garage::~garage() {
    delete []cars;
}
//Private methods:
void garage::insertCar(car &carToInsert)
{
    car *carToIns;
    carToIns = &carToInsert;
    if(numberOfCarsParked >= capacity) {
        cout<<"The garage is full. Unable to insert the car"<<endl;
    } else {
        numberOfCarsParked++;
        cars[numberOfCarsParked-1] = {*carToIns};
        //cout<<cars[numberOfCarsParked-1]->getModel()<<endl;

    }
}
car garage::removeCar()
{
    car *removedCar;
    if(numberOfCarsParked == 0) {
        cout<<"The garage is empty."<<endl;
        exit(0);
    } else {
        removedCar = &cars[numberOfCarsParked-1];
       cars[numberOfCarsParked-1]={};
        numberOfCarsParked--;
    }
    return *removedCar;
}
void garage::printInfo()
{
    cout<<"+++++++ Garage info +++++++"<<endl;
    cout<<"Address : "<< address <<endl;
    cout<<"Capacity : "<< capacity <<endl;
    cout<<"Number of parked cars : "<< numberOfCarsParked <<endl;
    cout<<endl;
    cout<<"++++++ Details of cars parked in the garage ++++++"<<endl;
    for (int i=0; i<numberOfCarsParked; i++) {
       cars[i].printInfo();
    }
}
//Setters:
void garage::setAddress(std::string addr)
{
    address = addr;
}
void garage::setCapacity(short capac)
{
   capacity = capac;
   cars = new car[capacity];
}
//Getters:
std::string garage::getAddress()
{
   return address;
}
short garage::getCapacity()
{
    return capacity;
}
short garage::getNumberOfCars()
{
    return numberOfCarsParked;
}


