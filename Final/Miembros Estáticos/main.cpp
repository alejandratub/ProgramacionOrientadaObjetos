#include <iostream>
#include <string>
#include "Empleados.h"

using namespace std;

int main()
{
    cout << "\n El número de empleados antes de crear la instancia es: " << Empleado:: getCantidadE() << "\n\n";
    
    Empleado*pEmpleado1 = new Empleado("Renata " , " Betanzos");
    Empleado*pEmpleado2 = new Empleado("Roberto ", " Jiménez");
    
    cout << "Empleado 1: " 
    << pEmpleado1->getNombre() << ""
    << pEmpleado1->getApellido() << ""
    << "Empleado 2: "
    << pEmpleado2->getNombre() << ""
    << pEmpleado2->getApellido() << "'\n\n";
    
    delete pEmpleado1;
    
    cout << "El número de empleados después de borrar empleado 1 es: " << pEmpleado2->getCantidadE() << "\n";
    
    delete pEmpleado2;
    cout << "El número de empleados después de borrar empleado 2 es: " << Empleado::getCantidadE() << "\n\n";
    
    return 0;
    
}