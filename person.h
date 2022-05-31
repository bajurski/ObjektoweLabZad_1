//
// Created by Arkadiusz Bajura on 30/05/2022.
//

#ifndef PROGOBJLAB_ZAD_1_PERSON_H
#define PROGOBJLAB_ZAD_1_PERSON_H

#include <string>

class person {
    std::string firstName{};
    std::string familyName{};
    std::string homeAddress{};
    std::string carRegPlates[3];
    short numberOfCarsOwed{0};

public:
//Default constructor:
    person();
//Constructor with parameters:
    person(std::string firNam,std::string famNam,std::string homAddr,short numOfCar );

    void addCarToPerson(std::string regPlat);
    void removeCarfromPerson(std::string regPlat);
    void printInfo();
};


#endif //PROGOBJLAB_ZAD_1_PERSON_H
