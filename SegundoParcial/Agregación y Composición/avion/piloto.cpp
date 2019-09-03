#include <iostream>
#include <string>
#include "piloto.h"

using namespace std;

PILOTO::PILOTO(){}

PILOTO::PILOTO(string nom, string ap, int edadp, int identificap, int anioservicio)
{
    nombre = nom;
    apellido = ap;
    edad = edadp;
    identificador = identificap;
    antiguedad = anioservicio;
}

PILOTO::~PILOTO() {}

string PILOTO::getNombre() const
{
    return nombre + "" + apellido;
}
PILOTO:: getEdad() const
{
    return edad;
}