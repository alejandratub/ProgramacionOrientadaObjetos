#ifndef EPOR_COMISION
#define EPOR_COMISION

#include "empleados.h"
#include <string>
#include <iostream>
using namespace std;

class EporComision : public Empleados
{
    public:
    EporComision();
    EporComision(string, string, int, int);
   //~EporComision();
    
    void PrintEmpleados();
    void setDatos(int);
    
    protected:
    int venta;
    
    
};
#endif
