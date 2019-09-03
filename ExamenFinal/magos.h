#include <iostream>
#include "jugador.h"
using namespace std;

#ifndef MAGOS_H
#define MAGOS_H

class Magos: public Jugador
{
    public:
    Magos();
    Magos(int, int, int, int);
    void print();
    void Ataque();
    void Esquivar(int);
    void AumentoVida();

    protected:
    int fuerza;
    int magia;
    int velocidad;
};
#endif