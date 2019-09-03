#include <iostream>
#include <string>

#include "compania.h"

using std::string;

COMPANIA::COMPANIA(){}

COMPANIA::COMPANIA(string nc, string d)
{
    nombreC = nc;
    direccion = d;
}

COMPANIA::~COMPANIA() {}

string COMPANIA::getNombreC()
{
    return nombreC
}

string COMPANIA::getDireccion()
{
    return direccion;
}