#ifndef EPOR_HORA
#define EPOR_HORA

#include "empleados.h"

#include <string>
#include <iostream>

using namespace std;

class EporHora : public Empleados
{
    public:
    EporHora();
    EporHora(string,string, int, int);
    //~EporHora();
    
    void PrintEmpleados();
    void setDatos(int h);
    
    protected:
    int horas;
};
#endif