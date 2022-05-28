//
// Created by Arkadiusz Bajura on 29/05/2022.
//

#ifndef PROGOBJLAB_ZAD_1_GARAGE_H
#define PROGOBJLAB_ZAD_1_GARAGE_H

#include <string>
#include <vector>
#include "car.h"

class garage {
    std::string address;
    short capacity;
    short numberOfCars;
    std::vector<car> cars;
};


#endif //PROGOBJLAB_ZAD_1_GARAGE_H
