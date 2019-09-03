#include <iostream>
#include "circulo.1.h"

using namespace std;

int CIRCULO::cantidadCirculos = 0;
double const CIRCULO::pi = 3.1416;


CIRCULO::CIRCULO(double r)
{ 
    area = new double;
    perimetro = new double;
    radio = new double;
    
    *radio = r;
    
    ++cantidadCirculos;
}

CIRCULO::~CIRCULO()
{
    --cantidadCirculos;
}

void CIRCULO::perimetroCirculo()
{
    * perimetro =  pi * (*radio * 2);
}

void CIRCULO::areaCirculo()
{
    * area =  pi * ((*radio)*(*radio));
}


void CIRCULO::imprimir()
{
    
    cout <<"\nEl radio es: "<< *radio <<" cm";
    cout <<"\nEl area es: " << *area <<" cm";
    cout <<"\nEl perimetro es: "<< *perimetro <<" cm";
    cout <<"\n";
}

void CIRCULO::setValores(double valor)
{
    * radio = valor;
}

int CIRCULO::getCantidad()
{
    return cantidadCirculos;
}
        
