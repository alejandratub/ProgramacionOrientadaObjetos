#include "empleado.h"
#include <iostream>
#include <string>

using namespace std;

Empleado::Empleado(){}

Empleado::Empleado(string n, int s) : ComunidadTEC(n)
{
    salario = s;
}

int Empleado:: getSalario() const
{
    return salario;
}

void Empleado::setSalario(int s)
{
    salario = s;
}

void Empleado::imprimir() const
{
    cout << "Empleado: " << nombre;
    cout << "Salario: " << salario << endl;
}