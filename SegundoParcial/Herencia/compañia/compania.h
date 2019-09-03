#ifndef COMPANIA_
#define COMPANIA_

using namespace std;
#include <string>

class COMPANIA
{
    public:
    COMPANIA();
    COMPANIA(string, string)
    ~COMPANIA();
    
    string getDireccion();
    string getNombreC();  
    
    private:
    string nombreC;
    string direccion;
    
}; 
#endif 