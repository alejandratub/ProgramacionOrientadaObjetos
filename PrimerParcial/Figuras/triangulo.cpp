#include <iostream>
#include "triangulo.h"

using namespace std;

TRIANGULO::TRIANGULO(double b, double a, double l)
{
    base = new double;
    *base = b;
    
    altura = new double;
    *altura = a;
    
    lado = new double;
    *lado = l;
    
    area = new double;
    perimetro = new double;
}

TRIANGULO::TRIANGULO(const TRIANGULO &obj)
{
    area= new double;
    perimetro = new double;
    
    base = new double;
    altura = new double;
    lado = new double;
    
    *lado = * (obj.lado);
    *base = * (obj.base);
    *altura = * (obj.altura);
}
TRIANGULO::~TRIANGULO()
{
    delete area;
    delete perimetro;
    delete base;
    delete altura;
    delete lado;
}

void TRIANGULO::perimetroTRIANGULO()
{
    *perimetro = (*lado)*(*lado)*(*base);
    
}

void TRIANGULO::areaTRIANGULO()
{
    *area = ((*base)*(*altura))/2;
}
    
    
 void TRIANGULO::imprimirAreaTRIANGULO()
 {
     cout << "\n Los lados del triangulo son: " << *lado << " cm";
     cout << "\n La base del triangulo es: " << *base << " cm";
     cout << "\n La altura del triangulo es: " << *altura << " cm";
     cout << "\n El area del triangulo es: " << *area << " cm2";
     
 }
    
void TRIANGULO::imprimirPerimetroTRIANGULO()
{
    cout <<"\n El perimetro del triangulo es: " << *perimetro << " cm \n";
}

void TRIANGULO::setValoresTRIANGULO(double valor1, double valor2, double valor3)
{
    *lado = valor1;
    *base = valor2;
    *altura = valor3;
}
    
       
