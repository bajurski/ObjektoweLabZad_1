//
// Created by Arkadiusz Bajura on 28/05/2022.
//
#include <iostream>
#include "car.h"

using namespace std;



int main()
{
    car *iwonasCar = new car("Audi", "Q5", 5, 2.0, 7.2);
    car *myCar = new car("Skoda","Yeti",5,2.0,6.2);

    iwonasCar->printInfo();
    myCar->printInfo();
    myCar->printNumberOfCars();
    cout << "Trip cost on trip :" << myCar->calcTripCost(150, 7.15) << endl;
    cout<< "Fuel burn on distance :"<< myCar->getFuelBurnOnTrip(750);

    delete myCar;

    delete iwonasCar;



    return 0;
}


