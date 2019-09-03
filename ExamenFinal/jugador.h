#include <iostream>

using namespace std;

#ifndef JUGADOR_H
#define JUGADOR_H

class Jugador
{
    public:
    Jugador();
    Jugador(int);
    
    void Ataque();
    void Esquivar();
    void AumentoVida();
    void Intercambio(int);
    void print();
    
    protected:
    int vida;
    int decision;
    int ataque2;
    
};
#endif