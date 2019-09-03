#include <iostream>
#include "motor.h"

using namespace std;

MOTOR::MOTOR(){}

MOTOR::MOTOR(int noserie)
{
    serie = noserie;
}

MOTOR::~MOTOR(){}

int MOTOR::getSerie() const
{
    return serie;
    
}
