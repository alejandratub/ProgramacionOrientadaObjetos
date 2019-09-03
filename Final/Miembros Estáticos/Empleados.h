#include <iostream>
#include <string>

using namespace std;
#ifndef EMPLEADOS_H
#define EMPLEADOS_H

class Empleado
{
    public:
    Empleado(){}
    Empleado(string n, string a)
    {
        nombre=n;
        apellido=a;
        ++cantidadEmpleados;
    }
    ~Empleado()
    {
        --cantidadEmpleados;
    }
    string getNombre()
    {
        return nombre;
    }
    string getApellido()
    {
        return apellido;
    }
    static int getCantidadE()
    {
        return cantidadEmpleados;
    }
    
    private:
    string nombre;
    string apellido;
    static int cantidadEmpleados;
};

int Empleado::cantidadEmpleados = 0;

#endif