#include <iostream>
#include "circulo.h"

using namespace std;

CIRCULO:: CIRCULO(double r)
{
    area  = new double;
    perimetro = new double;
    radio = new double;
    *radio = r;
}

CIRCULO:: CIRCULO(const CIRCULO & obj)
{
    radio = new double;
    area = new double;
    perimetro = new double;
    *radio = *(obj.radio);
   // *radio = obj.getRadio();
}
 CIRCULO:: ~CIRCULO()
{
    delete radio;
    delete area;
    delete perimetro;
}

void CIRCULO:: perimetroCIRCULO()
{
    *perimetro = (pi * ((*radio)*2));
}

void CIRCULO:: areaCIRCULO()
{
    *area = (pi * ((*radio)*(*radio)));
}

void CIRCULO:: imprimirAreaCIRCULO()
{
    cout <<"\n El radio es: " << *radio <<" cm";
    cout <<"\n El área es: " << *area <<" cm2";
}

void CIRCULO:: imprimirPerimetroCIRCULO()
{
    cout<<"\n El perímetro es " << *perimetro<< " cm\n";
}

void CIRCULO:: setValoresCIRCULO(double valor)
{
    * radio = valor;
}

/*void CIRCULO:: getRadio()
{
    return *radio;
}*/