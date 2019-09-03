#ifndef CONVERTIDOR_H
#define CONVERTIDOR_H
#include <iostream>
#include <string>

//using namespace std;


class Convertidor
{
    public:
    Convertidor(){}
    Convertidor(float num)
    {
        numero = num;
    }
    /*void setNumero(double num)
    {
        numero = num;
    }*/
    virtual void convertir()  = 0;
    
    protected:
    float numero;
};
#endif


