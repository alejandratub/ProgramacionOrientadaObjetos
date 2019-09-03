#include <iostream>
#include <string>

#include "empleado.h"
#include "fecha.h"

using std::string;
using std::cout;

EMPLEADO::EMPLEADO(){}

EMPLEADO::EMPLEADO(string ar, string p, string nom, string ap, double s, int dn, int mn, int an, int dc, int mc, int ac): fechaN(n), fechaC(c)
{
    nombre = nom;
    apelido = ap;
    
    area = ar;
    puesto = p;
    salario = s;
}

EMPLEADO::~EMPLEADO() {}

void EMPLEADO::setCompania(COMPANIA comp)
{
    c = comp;
}

string EMPLEADO:: getNombreComp()
{
    return c.getNombreComp
}

string EMPLEADO:: getDireccionComp()
{
    return c.getDireccion();
}

void EMPLEADO:: imprimirEmpleado()
{
    cout << "\n Nombre del empleado: " << nombre + " " + apellido;
    cout << "\n Área: " << area;
    cout << "\n Puesto: " << puesto;
    cout << "\n Salario: " << salario;
    
    cout << "\n Fecha de nacimiento: ";
    fechaN.imprimirFecha();
    
    cout << "\n";
    
    cout << "\n Fecha de contratación: ";
    fechaC.imprimirFecha();
}