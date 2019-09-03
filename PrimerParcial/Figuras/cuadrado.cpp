#include <iostream>
#include "cuadrado.h"

using namespace std;

CUADRADO::CUADRADO(double l)
{
    area = new double;
    perimetro = new double;
    lado = new double;
    *lado = l;
}

CUADRADO::CUADRADO(const CUADRADO &obj)
{
    area = new double;
    perimetro = new double;
    lado = new double;
    
    *lado = *(obj.lado);
}
CUADRADO::~CUADRADO()
{
    delete area;
    delete perimetro;
    delete lado;
}

void CUADRADO::perimetroCUADRADO()
{
    *perimetro = (*lado)*4;
}

void CUADRADO:: areaCUADRADO()
{
    *area = (*lado)*(*lado);
}

void CUADRADO::imprimirAreaCUADRADO()
{
    cout << "\n El lado es: " << *lado <<" cm";
    cout << "\n El área es: " << *area <<" cm2";
}

void CUADRADO::imprimirPerimetroCUADRADO()
{
    cout <<"\n El perimetro es: " << *perimetro << " cm \n";
}

void CUADRADO::setValoresCUADRADO(double valor1)
{
    *lado = valor1;
}