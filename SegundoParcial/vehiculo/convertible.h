#include <iostream>
#include <string>

#include "vehiculo.h"

using namespace std;

#ifndef CONVERTIBLE_H
#define CONVERTIBLE_H

class Convertible : public Vehiculo
{
    public:
    Convertible();
    Convertible(string,string,int,string ,int,int ,float , float ,string ,string,string,string);
    //~Convertible;
    
    void imprimir();
    protected:
    string techo;
    string tipoTecho;
    
};
#endif