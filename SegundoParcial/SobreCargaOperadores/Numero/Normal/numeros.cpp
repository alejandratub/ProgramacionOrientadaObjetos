
#include <iostream>
#include "numeros.h"

Numeros::Numeros(){}

Numeros::Numeros(double num)
{
    numero = num;
}

double Numeros::getNumero()
{
     return numero;
}

Numeros Numeros::operator+(Numeros b)
{
    Numeros suma; //estoy creando una instancia de la clase Numeros
    suma.numero = numero + b.numero; //Mi instancia va a ser igual al numero + el segundo numero creado en mi main
    return suma;
}

Numeros Numeros::operator-(Numeros b)
{
    Numeros resta;
    resta.numero = numero - b.numero; //objeto.atributo
    return resta;
}
Numeros Numeros::operator*(Numeros b)
{
    Numeros multiplicacion;
    multiplicacion.numero = numero * b.numero;
    return multiplicacion;
}
Numeros Numeros::operator/(Numeros b)
{
    Numeros division;  
    division.numero = numero / b.numero;
    return division;
    
}


Numeros:: ~Numeros(){}
