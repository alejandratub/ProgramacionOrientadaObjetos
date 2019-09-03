#include <iostream>
#include "miniCalculadora.h"

using namespace std;
MiniCalculadora::MiniCalculadora (): operando1(0), operando2(0), resultado(0) {}

int MiniCalculadora:: suma(int op1,int op2)
{
    operando1 = op1;
    operando2 = op2;
    
    resultado = op1 + op2;
   cout << resultado;
}

int MiniCalculadora:: resta(int op1,int op2)
{
    operando1 = op1;
    operando2 = op2;
    
    resultado = op1 - op2;
    cout << resultado;
   
}

int MiniCalculadora:: getOperando1()
{
    return operando1;
}

int MiniCalculadora:: getOperando2()
{
    return operando2;
}

int MiniCalculadora:: getResultado()
{
    return resultado;
}

void MiniCalculadora:: setOperando1(int valor1)
{
    operando1 = valor1;
}

void MiniCalculadora:: setOperando2(int valor2)
{
    operando2 = valor2;
}

