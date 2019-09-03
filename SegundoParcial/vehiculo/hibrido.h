#include <iostream>
#include <string>

#include "vehiculo.h"

using namespace std;

#ifndef HIBRIDO_H
#define HIBRIDO_H

class Hibrido : public Vehiculo
{
    
    public:
    Hibrido();
    Hibrido(string,string,int,string ,int,int ,float , float ,string ,string, string);
    //~Hibrido();
    void imprimir();
    
    protected:
    string modo; //flotar o andar

};
#endif