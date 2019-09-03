#include <iostream>
#include <string>
#include "convertidor.h"

//using namespace std;

#ifndef HEXADECIMAL_H
#define HEXADECIMAL_H

class Hexadecimal : public Convertidor
{
    public:
    Hexadecimal();
    Hexadecimal(float);
    ~Hexadecimal();
    
    void convertir();
    //void imprimir() const;
    
    protected:
    float numero;
};
#endif