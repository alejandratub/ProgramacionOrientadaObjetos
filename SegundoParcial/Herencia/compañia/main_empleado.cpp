#include <iostream>
#include <string>

#include "empleado.h"
#include "compania.h"

using std::string;
using std::cout;
using std::cin;

int main()
{
    string nombre;
    string apellido;
    string departamento;
    string posicion;
    double sueldo;
    
    int dn;
    int mn;
    int an;
    int dc;
    int mc;
    int ac;
    
      cout <<"\n===DATOS GENERALES===";
        cout <<"Ingresa tu nombre: ";
        cin >> nombre;
    
        cout <<"Ingresa tu apellido: ";
        cin >> apellido;

        cout <<"Ingresa tu Área: ";
        cin >> departamento;
        
        cout <<"Ingresa tu puesto: ";
        cin >> posicion;
        
        cout <<"Ingresa tu salario: $";
        cin >> sueldo;
        

    
    cout <<"===FECHA DE NACIMIENTO===";
        cout <<"Ingresa el día: ";
        cin >> dn;
        cout <<"Ingresa el mes: ";
        cin >> mn;
        cout <<"Ingresa el año: ";
        cin >> an;
    
        
    FECHA nacimiento1 (dn,mn,an);
    
    
    cout <<"===FECHA DE CONTRATACIÓN===";
        cout <<"Ingresa el día: ";
        cin >> dc;
        cout <<"Ingresa el mes: ";
        cin >> mc;
        cout <<"Ingresa el año: ";
        cin >> ac;
        
        cout << endl;
        
    FECHA contratacion1 (d2,m2,a2);
    
    
    
    EMPLEADO empleado1 (nombre, apellido, nacimiento1, contratacion1, departamento, posicion, sueldo);
    
    
    COMPANIA compania1 ("Hewlett Packard.","Prolongación Reforma");
    
    
    
    empleado1.setCompania(compania1);
    
    cout <<"\n===DATOS DEL EMPLEADO===\n";
    cout <<"\nEmpresa: " << empleado1.getNombreComp();
    cout <<"\n\tDirección: " << empleado1.getDireccionComp();
    
    empleado1.imprimirEmpleado();
    
    
    FECHA nacimiento2 (28,9,1970);
    FECHA contratacion2 (12,11,2000);
    EMPLEADO empleado2 ("Alejandra", "Tubilla", nacimiento2, contratacion2,10000);
    
    empleado2.setCompania(compania1);
    
    cout <<"\n===DATOS DEL EMPLEADO===\n";
    cout <<"\nEmpresa: " << empleado2.getNombreCompcompania();
    cout <<"\n\tDirección: " << empleado2.getDireccionCompreccion();
    
    empleado2.imprimirEmpleado();
}
}