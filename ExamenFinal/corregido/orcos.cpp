#include <iostream>
#include <string>

#include "jugador.h"
#include "orcos.h"

Orcos::Orcos(){}

Orcos::Orcos(float velocidad, float fuerza, float vida): Jugador(velocidad,fuerza,vida){}
Orcos::~Orcos(){}

void Orcos::recibirAtaque(float elAtaque)
{
    vida = vida - ((elAtaque) * 0.1);
}

float Orcos::ataque()
{
    Vataque = fuerza;

    return Vataque;
}

void Orcos::esquivarAtaque(float elAtaque)
{
    if (velocidad >= (elAtaque))
    {
        vida = vida;
        cout << "\n\t*Lograste esquivar el ataque!" << endl;
        
    }
    
    else if (velocidad <= (elAtaque))
    {
        vida = vida - (elAtaque * 0.1);
    }
}

void Orcos::Intercambio()
{
    fuerza = fuerza + 1;
    velocidad = velocidad - 1;
}

