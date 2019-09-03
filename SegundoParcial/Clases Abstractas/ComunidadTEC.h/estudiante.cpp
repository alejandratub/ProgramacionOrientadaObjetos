#include <iostream>
#include <string>
#include "estudiante.h"

using namespace std;

Estudiante::Estudiante();

Estudiante::Estudiante(string n, float c) : ComunidadTEC(n)
{
    nota = c;
}

float Estudiante::getNota() const
{
    return nota;
}

void Estudiante::setNota(float c)
{
    nota = c;
}

void Estudiante::imprimir() const
{
    cout << "Estudiante: " << nombre;
    cout << "Calificación: " << nota << endl;
}