#include <iostream>
#include <string>
#include "convertidor.h"

#ifndef OCTAL_H
#define OCTAL_H

//using namespace std;

class Octal : public Convertidor
{
    public:
    Octal();
    Octal(float num);
    ~Octal();
    void convertir();
   // void imprimir() const;
   
   protected:
   float numero;
    
};
#endif