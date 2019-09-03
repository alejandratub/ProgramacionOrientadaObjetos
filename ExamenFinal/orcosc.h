#include <iostream>
#include "jugador.h"
using namespace std;

#ifndef ORCOSC_H
#define ORCOSC_H

class OrcosC: public Jugador
{
    public:
    OrcosC();
    OrcosC(int, int, int);
    void print();
    void Ataque();
    void Esquivar(int);
    void Intercambio(int);
    protected:
    int fuerza;
    int velocidad;
};

#endif