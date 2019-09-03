#ifndef Orcos_H
#define Orcos_H

#include <iostream>
#include <string>

#include "jugador.h"

using namespace std;

class Orcos: public Jugador
{
    
    public:
        Orcos();
        Orcos(float, float, float);
        ~Orcos();
        
        float ataque();
        void esquivarAtaque(float);
        void recibirAtaque(float);
        void Intercambio();
        
    protected:
        float Vataque;
};
#endif