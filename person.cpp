//
// Created by Arkadiusz Bajura on 30/05/2022.
//

#include "person.h"
#include "car.h"
#include <iostream>

using namespace std;

//Default constructor with initializer list:
    person::person() : firstName("unknown"), familyName("unknown"),homeAddress("unknown"), numberOfCarsOwed(0)
    {
    }
//Constructor taking parameters into initialization list:
    person::person(string firNam,string famNam,string homAddr, short numOfCar) :
    firstName(firNam),familyName(famNam),homeAddress(homAddr),numberOfCarsOwed(numOfCar)
    {
    }
//Public methods:
    void person::addCarToPerson(string regPlat)
    {
        /*car insertedCar;
        regPlat = insertedCar.getRegPlate();*/
        if(numberOfCarsOwed<3){
            carRegPlates[numberOfCarsOwed]=regPlat;
            numberOfCarsOwed++;
            //cout<<"Numer : "<<carRegPlates[numberOfCarsOwed-1]<<endl;
        } else {
            cout<<firstName<<" owes already 3 cars."<<endl;
        }

    }
    void person::removeCarfromPerson(string regPlat)
    {
        string plateToremove = regPlat;
        for (int i = 0; i < 3; ++i) {
          if(carRegPlates[i] == plateToremove)  {
              carRegPlates[i]={};
          }
        }
    }
    void person::printInfo()
    {

    }
