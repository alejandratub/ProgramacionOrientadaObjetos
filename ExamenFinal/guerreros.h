#include <iostream>
#include "jugador.h"

using namespace std;

#ifndef GUERREROS_H
#define GUERREROS_H

class Guerreros: public Jugador
{
    public:
    Guerreros();
    Guerreros(int, int, int, int);
    void Ataque();
    void Esquivar(int);
    void AumentoVida();

    void print();
    
    protected:
    int fuerza;
    int magia;
    int velocidad;
};
#endif