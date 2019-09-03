#include <iostream>
#include <string>

using namespace std;

#ifndef VEHICULO_H
#define VEHICULO_H

class Vehiculo
{
    public:
    Vehiculo();
    Vehiculo(string ,string ,int ,string ,int ,int ,float , float ,string ,string );
    ~Vehiculo();
    virtual void imprimir() ;
    virtual void getAnio() ;
    virtual void servicio() ;
    virtual void imprimirPrecio();
    virtual void setAnio(double);
    
    protected:
    string nomManufactura;
    string nomModelo;
    int anio;
    string color;
    int numPasajeros;
    int numPuertas;
    float precio;
    float kilometraje;
    string tipo; //automático o estandar
    string estado; //nuevo o usado
};
#endif