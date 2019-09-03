#include "empleados.h"
#include <iostream>
#include <string>

using namespace std;

Empleados::Empleados()
{
    edad= new int;
}

Empleados::Empleados(string nom, string ap, int ed)
{
    nombre = nom;
    apellido = ap;
    edad = new int(ed);
    //*edad = ed;
}

void Empleados:: PrintEmpleados()
{
    cout << "\nNombre: " << nombre << endl;
    cout << "\nApellido: " << apellido << endl;
    cout << "\n Edad: " << *edad << endl;
}
void Empleados::setNombre(string n)
{
    nombre = n;
}
void Empleados::setApellido(string a) 
{
    apellido = a;
}
void Empleados::setEdad(int e)
{
    edad= new int;
    *edad = e;
}
/*void Empleados::getDatos()
{
    cout << "\n Introduzca el Nombre del empleado: " << endl;
    cin << nombre;
    
    cout << "\n Introduzca el Apellido: " << endl;
    cin << apellido;
    
    cout << "\n Introduzca su edad: " << endl;
    cin << *edad;
}*/
Empleados::~Empleados()
{
    delete edad;
}