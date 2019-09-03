#ifndef FECHA_
#define FECHA_

#include <string>
using std::string;
using std::cout;

class FECHA
{
    public:
    FECHA();
    FECHA(int, int, int);
    ~FECHA();
    
    int validarDia(int);
    int validarMes(int);
    int validarAnio(int);
    
    void imprimirFecha();
    
    private:
    int dia;
    int mes;
    int anio;
    
};

#endif 