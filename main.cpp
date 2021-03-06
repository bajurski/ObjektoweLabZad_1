//
// Created by Arkadiusz Bajura on 28/05/2022.
//
#include <iostream>
#include "car.h"
#include "garage.h"
#include "person.h"
using namespace std;



int main()
{
//Creating car objects:
    car *C1 = new car("Audi", "Q5", 5, 2.0, 7.2, "SLU 74RX");
    car *C2 = new car("Skoda", "Yeti", 5, 2.0, 6.2, "SLU 47V4");
    car *C3 = new car("Nissan", "Terrano", 3, 2.7, 8.6, "SLU 84UU");
//Test code for Ćwiczenie_1_1:
    cout<<endl;
    cout<<"============= TEST CODE FOR ĆWICZENIE_1_1 ==================================="<<endl;
    cout<<endl;
    C1->printInfo();
    C2->printInfo();
    C2->printNumberOfCars();
    cout << "Trip cost on trip :" << C2->calcTripCost(150, 7.15) << endl;
    cout << "Fuel burn on distance :" << C2->getFuelBurnOnTrip(750);
    cout<<endl;
//Test code for Ćwiczenie_1_2:
    cout<<endl;
    cout<<"============= TEST CODE FOR ĆWICZENIE_1_2 ==================================="<<endl;
    cout<<endl;
    garage *G1 = new garage();
    G1->setAddress("ul. Garażowa 1");
    G1->setCapacity(1);
    garage *G2 = new garage("ul. Garażowa 2", 2);
    G1->insertCar(*C1);
    G1->printInfo();
    G1->insertCar(*C2);
    G2->insertCar(*C2);
    G2->insertCar(*C1);
    G2->printInfo();
    G2->removeCar();
    G2->printInfo();
    G2->removeCar();
    G2->removeCar();
    cout<<endl;
//Test code for Zadanie 1:
    cout<<endl;
    cout<<"================== TEST CODE FOR ZADANIE 1 ====================================="<<endl;
    cout<<endl;
    person *P1 = new person("Maciej","Kowalski","ul.Słoneczna 30",0);
    person *P2 = new person("Anna", "Masztalska","ul.Wiśniowa 2",0);
    person *P3 = new person("Wojtek","Nowak","ul.Wesoła 55/3",0);

    P1->addCarToPerson(C3->getRegPlate());
    P1->addCarToPerson(C1->getRegPlate());
    P1->addCarToPerson(C2->getRegPlate());
    P1->addCarToPerson(C3->getRegPlate());
    P2->removeCarfromPerson(C1->getRegPlate());
    P1->printInfo();
    P1->removeCarfromPerson(C3->getRegPlate());
    P1->printInfo();
    P3->addCarToPerson(C1->getRegPlate());
    P3->addCarToPerson(C3->getRegPlate());
    P3->printInfo();
    P2->addCarToPerson(C2->getRegPlate());
    P2->printInfo();
    P2->removeCarfromPerson(C2->getRegPlate());
    P2->printInfo();

    delete G1;
    delete G2;
    delete C1;
    delete C2;
    delete C3;
    delete P1;
    delete P2;
    delete P3;

    return 0;
}


