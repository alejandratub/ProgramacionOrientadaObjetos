
#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <string>

using namespace std;

class Jugador
{
    public:
        Jugador();
        Jugador(float, float, float);
        ~Jugador();
        
        virtual float ataque() = 0;
        virtual void esquivarAtaque(float) = 0;
        virtual void recibirAtaque(float) = 0;
        virtual float getVida();
        virtual void imprimir();
        
        
    protected:
        float velocidad;
        float fuerza;
        float vida;
};
#endif