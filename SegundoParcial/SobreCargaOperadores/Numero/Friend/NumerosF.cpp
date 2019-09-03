#include "NumerosF.h"
#include <iostream>

using namespace std;

NUMERO::NUMERO(){}

NUMERO::NUMERO(double num1)
{
    getNum(num1);
}

NUMERO::~NUMERO(){}

void NUMERO::getNum(double num2)
{
    numero = num2;
}

NUMERO operator+(const NUMERO &num1, const NUMERO &num2)
{
    NUMERO suma;
    suma.numero = num1.numero + num2.numero;
    return suma;
}

NUMERO operator-(const NUMERO &num1, const NUMERO &num2)
{
    NUMERO resta;
    resta.numero = num1.numero + num2.numero;
    return resta;
}

NUMERO operator*(const NUMERO &num1, const NUMERO &num2)
{
    NUMERO multiplicacion;
    multiplicacion.numero = num1.numero + num2.numero;
    return multiplicacion;
}

NUMERO operator/(const NUMERO &num1, const NUMERO &num2)
{
    NUMERO divi;
    divi.numero = num1.numero * num2.numero;
    return divi;
}

ostream &operator<<(ostream &salida, const NUMERO &num)
{
    salida << num.numero;
    return salida;
}

istream &operator>>(istream &entrada, NUMERO &num)
{
    entrada >> num.numero;
    return entrada;
}
