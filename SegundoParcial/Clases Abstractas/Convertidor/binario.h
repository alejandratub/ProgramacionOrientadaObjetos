#include <iostream>
#include <string>
#include "convertidor.h"

//using namespace std;

#ifndef BINARIO_H
#define BINARIO_H

class Binario : public Convertidor
{
  public:
  Binario();
  Binario(float);
  ~Binario();
  void convertir() ;
 // void imprimir() const;
 
 protected:
 float numero;
  
  
};
#endif