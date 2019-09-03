#include <iostream>
#include <string>

using namespace std;

#ifndef ALMACEN_H
#define ALMACEN_H

class Almacen 
{
    public:
    Almacen();
    Almacen(int, double,string,double);
    ~Almacen();
    
    virtual void numVehiculos();
    virtual void imprimir();
    virtual void buscarAnio();
    virtual void vehiculosModelo();
    virtual void ordenarAnio();
    virtual void ordenarPrecio();
    virtual void agragar();
    
    protected:
    int numero;
    double anio;
    string modelo;
    double precio;
    
    
    
    
};
#endif