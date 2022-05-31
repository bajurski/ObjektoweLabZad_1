cmake_minimum_required(VERSION 3.22)
project(ProgObjLab_Zad_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ProgObjLab_Zad_1
        car.cpp
        car.h
        main.cpp garage.cpp garage.h person.cpp person.h)
