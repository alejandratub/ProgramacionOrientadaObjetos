#ifndef EMPLEADO_
#define EMPLEADO_

using namespace std;
#include <string>
#include "fecha.h"
#include "compania.h"

class EMPLEADO 
{
    public:
    EMPLEADO();
    EMPLEADO(string, string, string, string, double, int, int, int, int, int, int);
    ~EMPLEADO();
    
    void imprimirEmpleado();
    void setCompania(COMPANIA);
    
    string getNombreComp();
    string getDireccionComp();
    
    private:
    string nombre;
    string apellido;
    
    string area;
    string puesto;
    double salario;
    
    FECHA fechaN;
    FECHA fechaC;
    COMPANIA c;
}; 
#endif 