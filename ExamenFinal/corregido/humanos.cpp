#include <iostream>
#include <string>

#include "jugador.h"
#include "humanos.h"


Humano::Humano(){}

Humano::Humano(float velocidad, float fuerza, float vida, float magia): Jugador(velocidad,fuerza,vida)
{
    this->magia = magia;
}

Humano::~Humano(){}


float Humano::ataque()
{
    Vataque = fuerza + magia;

    return Vataque;
}

void Humano::recibirAtaque(float elAtaque)
{
    vida = vida - (elAtaque * 0.1);
}

void Humano::esquivarAtaque(float elAtaque)
{
    if (velocidad >= elAtaque)
    {
        vida = vida;
        cout << "\n\t*Lograste esquivar el ataque. " << endl;
        
    }
    
    else if (velocidad <= elAtaque)
    {
     vida = vida - ((elAtaque) * 0.1);
    }
}


void Humano::aumentoVida()
{
    vida = vida + (magia-(magia - 1));
    magia = magia - 1;
}

void Humano::imprimir()
{
    Jugador::imprimir();
    cout<<"\t\t*Magia: " << magia << endl;
}