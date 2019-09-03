#include <iostream>
#include <string>

#include "vehiculo.h"

using namespace std;

#ifndef DEPORTIVO_H
#define DEPORTIVO_H

class Deportivo: public Vehiculo
{
    public:
    Deportivo();
    Deportivo(string,string,int,string ,int,int ,float , float ,string ,string,int,double);
    //~Deportivo;
    void imprimir();
    protected:
    int turbo;
    double potencia;
    
};
#endif