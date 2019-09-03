#include <iostream>
#include <string>

#include "vehiculo.h"

using namespace std;

#ifndef SEDANES_H
#define SEDANES_H

class Sedanes: public Vehiculo
{
    public:
    Sedanes();
    Sedanes(string,string,int,string ,int,int ,float , float ,string ,string);
    //~Sedanes;
    
    
    
    
};
#endif