#include "NumerosR.h"
#include <iostream>


Numeros::Numeros(){}

Numeros::Numeros(double num):numero(num) {}

Numeros::~Numeros(){}

Numeros Numeros::operator+(const Numeros &num)
{
    Numeros suma;
    suma.numero = numero + num.numero;
    return suma;
}

Numeros Numeros::operator-(const Numeros &num)
{
    Numeros resta;
    resta.numero = numero - num.numero;
    return resta;
}

Numeros Numeros::operator*(const Numeros &num)
{
    Numeros mult;
    mult.numero = numero * num.numero;
    return mult;
}

Numeros Numeros::operator/(const Numeros &num)
{
    Numeros divi;
    divi.numero = numero / num.numero;
    return divi;
}

double Numeros::getNum() const
{
    return numero;
}