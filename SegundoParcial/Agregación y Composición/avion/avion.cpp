#include <iostream>
#include <string>
#include "avion.h"

using namespace std;

AVION::AVION(){}

AVION::AVION(int na, int np, string ma, string ma, int serie): m(serie)
{
    asientos = na;
    pasajeros = np;
    modelo = ma;
}

AVION::~AVION(){}

string AVION::getModelo() const
{
    return modelo;
}

int AVION::getAsientos() const
{
    return asientos;
}

int AVION::getPasajeros() const
{
    return pasajeros;
}

int AVION::getSerie() const
{
    return m.getSerie();
}


string AVION::getPiloto()
{
    return p.getNombre();
}

void AVION::setPiloto(Piloto pi)
{
    p = pi;
}