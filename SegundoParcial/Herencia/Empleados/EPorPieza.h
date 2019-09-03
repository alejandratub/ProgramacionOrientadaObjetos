#ifndef EPOR_PIEZA
#define EPOR_PIEZA

#include "empleados.h"
#include <iostream>
#include <string>
using namespace std;

class EPorPieza : public Empleados
{
    public: 
    EPorPieza();
    EPorPieza(string, string, int, int);
    //~EPorPieza();
    
    void PrintEmpleados();
    void setDatos(int p);
    
    protected:
    int piezas;
};
#endif