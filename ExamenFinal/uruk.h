#include <iostream>
#include "jugador.h"
using namespace std;

#ifndef URUK_H
#define URUK_H

class Uruk: public Jugador
{
    public:
    Uruk();
    Uruk(int, int, int);
    void print();
    void Ataque();
    void Esquivar(int);
    void Intercambio(int);
    
    protected:
    int fuerza;
    int velocidad;
};
#endif