#include <iostream>
#include "jugador.h"
using namespace std;

#ifndef ARQUEROS_H
#define ARQUEROS_H

class Arqueros: public Jugador
{
    public:
    Arqueros();
    Arqueros(int, int, int, int);
    void Ataque();
    void Esquivar(float);
    void AumentoVida();
void recibir_ataque(float);
    void print();
    protected:
    int fuerza;
    int magia;
    int velocidad;
};
#endif