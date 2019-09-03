#include <iostream>
#include <string>

#ifndef COMUNIDAD_H
#define COMUNIDAD_H

using namespace std;

class ComunidadTEC{
    
    public:
    ComunidadTEC();
    ComunidadTEC(string n)
    {
        nombre = n;
    }
    
    virtual void imprimir() const = 0;
    
    protected:
    string nombre;
    
};
#endif