#include <iostream>
#include "calcu.h"

using namespace std;
Calculadora::Calculadora ()
{
    operando1 = new int;
     operando2 = new int;
     resultado = new int;
}
Calculadora::~Calculadora ()
{
    delete operando1;
    delete operando2;
    delete resultado;
    cout <<"\ndestructor\n";
}

int Calculadora:: suma(int op1,int op2)
{
    *operando1 = op1;
    *operando2 = op2;
    
    *resultado = op1 + op2;
   cout << *resultado;
}

int Calculadora:: resta(int op1,int op2)
{
    *operando1 = op1;
    *operando2 = op2;
    
    *resultado = op1 - op2;
    cout << *resultado;
   
}

int Calculadora:: getOperando1()
{
    return *operando1;
}

int Calculadora:: getOperando2()
{
    return *operando2;
}

int Calculadora:: getResultado()
{
    return *resultado;
}

void Calculadora:: setOperando1(int valor1)
{
    *operando1 = valor1;
}

void Calculadora:: setOperando2(int valor2)
{
    *operando2 = valor2;
}

