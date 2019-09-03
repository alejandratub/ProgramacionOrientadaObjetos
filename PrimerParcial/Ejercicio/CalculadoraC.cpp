#include <iostream>
#include "CalculadoraC.h"

using namespace std;

CalculadoraC::CalculadoraC()
{
    operando1 = new int;
     operando2 = new int;
     resultado = new int;
}
CalculadoraC::CalculadoraC(const CalculadoraC &obj)
{
    operando1 = new int;
     operando2 = new int;
     resultado = new int;
     *resultado = *(obj.resultado);
     *operando1 = *(obj.operando1);
     *operando2 = *(obj. operando2);
}
CalculadoraC::~CalculadoraC ()
{
    delete operando1;
    delete operando2;
    delete resultado;
    cout <<"\ndestructor\n";
}

int CalculadoraC::suma(int op1,int op2)
{
    *operando1 = op1;
    *operando2 = op2;
    
    *resultado = op1 + op2;
   cout << *resultado;
}

int CalculadoraC::resta(int op1,int op2)
{
    *operando1 = op1;
    *operando2 = op2;
    
    *resultado = op1 - op2;
    cout << *resultado;
   
}

int CalculadoraC:: getOperando1() const
{
    return *operando1;
}

int CalculadoraC:: getOperando2() const
{
    return *operando2;
}

int CalculadoraC:: getResultado() const
{
    return *resultado;
}

void CalculadoraC:: setOperando1(int valor1)
{
    *operando1 = valor1;
}

void CalculadoraC:: setOperando2(int valor2)
{
    *operando2 = valor2;
}

