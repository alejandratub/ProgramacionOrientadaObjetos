#ifndef EMPLEADOS
#define EMPLEADOS
#include <string>
#include <iostream>
using namespace std;

class Empleados
{
    public:
   Empleados();
   Empleados(string, string, int);
   ~Empleados();
   
   void PrintEmpleados();
   void setNombre(string);
   void setApellido(string);
   void setEdad(int);
  
   
   protected:
   string nombre;
   string apellido;
   int *edad;
   
};
#endif