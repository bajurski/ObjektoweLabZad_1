//
// Created by Arkadiusz Bajura on 28/05/2022.
//

#ifndef PROGOBJLAB_ZAD_1_CAR_H
#define PROGOBJLAB_ZAD_1_CAR_H
#include <string>

class car {

    static int numberOfCars;
    std::string manufacturer{};
    std::string model{};
    short int numOfDoors{};
    double engineVol{};
    double averageBurn{};
    std::string regPlate{};


    double calcFuelBurn(double distance);
public:
    //Default constructor:
    car();
    //Constructor with parameters:
    car(std::string manufac, std::string mod, short int numDoo, double engVol, double aveBurn, std::string regPl);
    //Public methods:
    double calcTripCost(double tripDistance, double fuelPrice);
    void printInfo();
    static void printNumberOfCars();
    //setters:
    void setManufacturer(std::string manu);
    void setModel(std::string mod);
    void setNumOfDoors(short numOfDo);
    void setEngVol(double engVol);
    void setAverBurn(double avBurn);
    //getters:
    std::string getManufacturer();
    std::string getModel();
    short  getNumOfDoors();
    double getEngVol();
    double getAverBurn();
    double getFuelBurnOnTrip(double distance);
    std::string getRegPlate();


};


#endif //PROGOBJLAB_ZAD_1_CAR_H
