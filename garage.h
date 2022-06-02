//
// Created by Arkadiusz Bajura on 29/05/2022.
//

#ifndef PROGOBJLAB_ZAD_1_GARRAGE_H
#define PROGOBJLAB_ZAD_1_GARRAGE_H


#include <string>
#include "car.h"

class garage {
    std::string address;
    short capacity;
    short numberOfCarsParked{0};
    car *cars;
public:
    //Constructors:
    garage();
    garage(std::string addr,short capa);
    //Destructor:
    ~garage();
    //Public methods:
    void insertCar(car &carToInsert);
    car removeCar();
    void printInfo();
    //Setters:
    void setAddress(std::string addr);
    void setCapacity(short capac);
    //Getters:
    std::string getAddress();
    short getCapacity();
    short getNumberOfCars();

};



#endif //PROGOBJLAB_ZAD_1_GARRAGE_H
