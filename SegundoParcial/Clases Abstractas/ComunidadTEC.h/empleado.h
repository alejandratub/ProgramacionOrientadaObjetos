#include <iostream>
#include <string>
#include "comunidadTEC.h"

#ifndef EMPLEADO_H
#define EMPLEADO_H

using namespace std;

class Empleado : public ComunidadTEC
{
    public:
    Empleado();
    Empleado(string n, int s);
    void imprimir() const;
    int getSalario() const;
    void setSalario(int s);
    
    protected:
    int salario;
};
#endif