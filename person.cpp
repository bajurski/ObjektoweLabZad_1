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
        if(numberOfCarsOwed<3){
            carRegPlates[numberOfCarsOwed]=regPlat;
            numberOfCarsOwed++;
        } else {
            cout<<"Procedure to add a car to the list reports: -->"<<firstName<< " owes already max number of 3 cars."<<endl;
        }

    }
    void person::removeCarfromPerson(string regPlat)
    {
        bool wasRemoved = false;
        string plateToremove = regPlat;
        for (int i = 0; i < 3; ++i) {
          if(carRegPlates[i] == plateToremove)  {
              carRegPlates[i]={};
              wasRemoved = true;

          }
        }
        if(wasRemoved)  {
            numberOfCarsOwed--;
            cout<<"Procedure to remowe car from the list reports : --> The car with the registration :"<< plateToremove <<" was removed from the data record of "<< firstName<<endl;
        } else {
            cout<<"Procedure to remowe car from the list reports : --> The car with the registration :"<< plateToremove <<" wasn't in the data record of "<< firstName<<endl;
        }
    }
    void person::printInfo()
    {
        cout<<"---------------------------------------------------"<<endl;
        cout<<"Procedure printInfo reports about "<<firstName<<" : --> "<<endl;
        cout<<firstName<<" "<<familyName<<" lives in "<<homeAddress<<endl;
        cout<<"Number of cars owed by "<< firstName <<" is : "<<numberOfCarsOwed<<endl;
        cout<<"Registration numbers of cars owed by "<<firstName<<":"<<endl;
        for (int i = 0; i < 3; ++i) {
            if(carRegPlates[i] != "") {
                cout<<carRegPlates[i]<<endl;
            }
        }
    }
