#ifndef Humano_H
#define Humano_H

#include <iostream>
#include <string>

#include "jugador.h"

using namespace std;

class Humano: public Jugador
{
    
    public:
        Humano();
        Humano(float, float, float, float);
        ~Humano();
        
        float ataque();
        void esquivarAtaque(float);
        void recibirAtaque(float);
        void aumentoVida();
        void imprimir();
    
    protected:
        float Vataque;
        float magia;
        
};
#endif