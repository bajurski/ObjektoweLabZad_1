//
// Created by Arkadiusz Bajura on 28/05/2022.
//
#include <iostream>
#include "car.h"
#include "garage.h"
using namespace std;



int main()
{
    car *iwonasCar = new car("Audi", "Q5", 5, 2.0, 7.2);
    car *myCar = new car("Skoda","Yeti",5,2.0,6.2);

    /*iwonasCar->printInfo();
    myCar->printInfo();
    myCar->printNumberOfCars();
    cout << "Trip cost on trip :" << myCar->calcTripCost(150, 7.15) << endl;
    cout<< "Fuel burn on distance :"<< myCar->getFuelBurnOnTrip(750);*/

    garage *g1 = new garage();
    g1->setAddress("ul. Garażowa 1");
    g1->setCapacity(1);
    garage *g2 = new garage("ul. Garażowa 2", 2);
    g1->insertCar(*iwonasCar);
    g1->printInfo();
    g1->removeCar();
    g2->insertCar(*myCar);
    g2->insertCar(*iwonasCar);
    g2->printInfo();
    g2->removeCar();
    g2->printInfo();
    g2->removeCar();
    g2->removeCar();

    delete myCar;
    delete iwonasCar;

    return 0;
}


