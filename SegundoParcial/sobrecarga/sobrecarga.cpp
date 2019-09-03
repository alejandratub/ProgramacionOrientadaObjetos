//sobrecarga de metodos
//puedo usar metodos con el mismo nombre siempre y cuando reciban parametros diferentes
//pueden recibir el mismo tipo de parametros mientras reciban diferente numero de parametros 


#include <iostream>
#include "sobrecarga.h"
#include <math.h>

using std::cout;

Figura::Figura() {}

Figura::~Figura() {}

float Figura::area(float r)
{
    return pi*r*r;
}

float Figura::area(float an, float al)
{
    return an * al;
}

float Figura::area(float a, float b, float c) //para triangulo con tres lados distintos puedes usar otra formula para que reciba tre parametros en vez de solo dos y sea un método diferente al anterior 
{
    float p;
    p = (a+b+c)/2;
    return pow((p * (p-a) * (p-b) * (p-c)), 0.5);
}
