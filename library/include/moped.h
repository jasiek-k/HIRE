//
// Created by Janek on 26.11.2018.
//

#ifndef PRO_WYPO_MOPE_H
#define PRO_WYPO_MOPE_H
#include "motorvehicle.h"
#include "vehicle.h"
#include <iostream>
#include <cstdlib>
using namespace std;

class Moped: public MotorVehicle
{
    char segment;
public:
    Moped(char,string,int,int);
    char getSegment();
    int actualRentalPrice();
    ~Moped();
};
#endif //PRO_WYPO_MOPE_H
