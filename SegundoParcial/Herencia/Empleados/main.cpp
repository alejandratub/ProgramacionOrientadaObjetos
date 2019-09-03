#include "empleados.h"
#include "EPorComision.h"
#include "EPorHora.h"
#include "EPorPieza.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    double HorasT;
    double ventasT;
    double piezasT;
    
    string nomb;
    string ape;
    int anios;
    int opc;
    
    Empleados empleado1;
    EPorPieza piezas1;
    EporComision comision1;
    EporHora hora1;
    
    cout << "\n-----DATOS-----" << endl;
    
    cout <<"\n Nombre: " << endl;
    cin >> nomb;
    
    cout << "\n Apellido: " << endl;
    cin >> ape;
    
    cout << "\n Edad: " << endl;
    cin >> anios;
    
    empleado1.setNombre(nomb);
    empleado1.setApellido(ape);
    empleado1.setEdad(anios);
    
    cout << "TIPO DE CONTRATO" << endl;
    cout <<"\n 1. Por Horas Trabajadas" << endl;
    cout << "\n2. Por Comisión" << endl;
    cout << "\n3. Por Piezas" << endl;
    cin >> opc;
    
    
     
    switch(opc)
    {
        case 1:
        cout<< "\n----Sueldo por Horas trabajadas---- " << endl;
        cout <<"\n Ingrese la cantidad de horas trabajadas: " << endl;
        cin >> HorasT;
        hora1.setDatos(HorasT);
        empleado1.PrintEmpleados();
        hora1.PrintEmpleados();
        
        break;
        
        case 2:
        cout <<"\n----Sueldo por Comisión----" << endl;
        cout << "\nIngrese el numero de ventas realizadas: " << endl;
        cin >> ventasT;
        comision1.setDatos(ventasT);
        empleado1.PrintEmpleados();
         comision1.PrintEmpleados();
         
         break;
        
        case 3:
        cout << "\n----Sueldo por Piezas----" << endl;
        cout << "\nIngrese el  numero de piezas vendidas: " << endl;
        cin >> piezasT;
        piezas1.setDatos(piezasT);
        empleado1.PrintEmpleados();
        piezas1.PrintEmpleados();
        
        break;
        
    }

        return 0;    
}

