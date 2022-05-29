//
// Created by Arkadiusz Bajura on 29/05/2022.
//

#include "garage.h"
#include <iostream>

using namespace std;

//Default constructor with initializer list:
garage::garage() : address ("Unknown"), capacity (0)
{
    cars[0] = nullptr;
}
//Constructor taking parameters into initialization list.
garage::garage(std::string addr, short capa) :  address(addr), capacity(capa)
{
    cars[capacity];
}